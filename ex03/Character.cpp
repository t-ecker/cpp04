/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomecker <tomecker@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 14:00:48 by tecker            #+#    #+#             */
/*   Updated: 2024/10/31 00:34:28 by tomecker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
	: _name("no-name")
{
	for (int i = 0; i < 4; i++)
        _inv[i] = nullptr;
    std::cout << "(Character) Default Constructor called" << std::endl;
}
Character::Character(std::string name)
	: _name(name)
{
	for (int i = 0; i < 4; i++)
        _inv[i] = nullptr;
    std::cout << "(Character) String Constructor called" << std::endl;
}
Character::~Character()
{
	for (size_t i = 0; i < _cleanup.size(); i++)
			delete _cleanup[i];
	_cleanup.clear();
    std::cout << "(Character) Deconstructor called" << std::endl;
}
Character::Character(const Character &src)
	: _name(src.getName())
{
	for (int i = 0; i < 4; i++)
	{
		if (src.getInvSlot(i) != nullptr)
		{
			_inv[i] = src.getInvSlot(i)->clone();
			_cleanup.push_back(_inv[i]);
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
		for (size_t i = 0; i < _cleanup.size(); i++)
			delete _cleanup[i];
		_cleanup.clear();
		for (int i = 0; i < 4; i++)
		{
			if (src.getInvSlot(i) != nullptr)
			{
				_inv[i] = src.getInvSlot(i)->clone();
				_cleanup.push_back(_inv[i]);
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
	int slot = 0;
	while (slot < 4 && _inv[slot] != nullptr)
		slot++;
	if (slot < 4)
		_inv[slot] = m;
	_cleanup.push_back(m);
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