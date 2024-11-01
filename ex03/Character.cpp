/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tecker <tecker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 14:00:48 by tecker            #+#    #+#             */
/*   Updated: 2024/11/01 10:26:52 by tecker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
    : _name("no-name"), _cleanupCount(0)
{
    for (int i = 0; i < 4; i++)
        _inv[i] = nullptr;
    for (int i = 0; i < 100; i++)
        _cleanup[i] = nullptr;
    std::cout << "(Character) Default Constructor called" << std::endl;
}
Character::Character(std::string name)
    : _name(name), _cleanupCount(0)
{
    for (int i = 0; i < 4; i++)
        _inv[i] = nullptr;
    for (int i = 0; i < 100; i++)
        _cleanup[i] = nullptr;
    std::cout << "(Character) String Constructor called" << std::endl;
}
Character::~Character()
{
    for (int i = 0; i < _cleanupCount; i++)
        delete _cleanup[i];
    std::cout << "(Character) Destructor called" << std::endl;
}
Character::Character(const Character &src)
    : _name(src.getName()), _cleanupCount(0)
{
    for (int i = 0; i < 4; i++)
    {
        if (src.getInvSlot(i) != nullptr)
        {
            _inv[i] = src.getInvSlot(i)->clone();
            _cleanup[_cleanupCount++] = _inv[i];
        }
        else
            _inv[i] = nullptr;
    }
    std::cout << "(Character) Copy Constructor called" << std::endl;
}
Character &Character::operator=(const Character &src)
{
    std::cout << "(Character) Copy assignment operator called" << std::endl;
    if (this != &src)
    {
        _name = src.getName();
        for (int i = 0; i < _cleanupCount; i++)
            delete _cleanup[i];
        _cleanupCount = 0;

        for (int i = 0; i < 4; i++)
        {
            if (src.getInvSlot(i) != nullptr)
            {
                _inv[i] = src.getInvSlot(i)->clone();
                _cleanup[_cleanupCount++] = _inv[i];
            }
            else
                _inv[i] = nullptr;
        }
    }
    return (*this);
}

AMateria *Character::getInvSlot(int i) const
{
	if (i >= 0 && i <= 3)
		return (_inv[i]);
	return (nullptr);
}


std::string const &Character::getName() const
{
	return (_name);
}
void Character::equip(AMateria* m)
{
    if (_cleanupCount < 100)
	{
        int slot = 0;
        while (slot < 4 && _inv[slot] != nullptr)
            slot++;
			
        if (slot < 4)
		{
            _inv[slot] = m;
            _cleanup[_cleanupCount++] = m;
        }
		else
            delete m;
    }
	else
        delete m;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3)
		_inv[idx] = nullptr;
}
void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx <= 3 && _inv[idx])
		_inv[idx]->use(target);
}