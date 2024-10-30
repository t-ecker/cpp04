/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomecker <tomecker@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 14:01:34 by tecker            #+#    #+#             */
/*   Updated: 2024/10/30 19:42:48 by tomecker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
        _templates[i] = nullptr;
    std::cout << "(MateriaSource) Default Constructor called" << std::endl;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
        if (_templates[i] != nullptr)
			delete _templates[i];
	}
    std::cout << "(MateriaSource) Deconstructor called" << std::endl;
}
MateriaSource::MateriaSource(const MateriaSource &src)
{
	for (int i = 0; i < 4; i++)
	{
		if (src.getTemplateSlot(i) != nullptr)
			_templates[i] = src.getTemplateSlot(i)->clone();
		else
			_templates[i] = nullptr;
	}
    std::cout << "(MateriaSource) Copy Constructor called" << std::endl;
}
MateriaSource &MateriaSource::operator=(const MateriaSource &src)
{
    std::cout << "(MateriaSource) Copy assignment operator called" << std::endl;
	if (this != &src)
	{
		for (int i = 0; i < 4; i++)
		{
			if (_templates[i] != nullptr)
			{
				delete _templates[i];
				_templates[i] = src.getTemplateSlot(i)->clone();
			}
			else
				_templates[i] = nullptr;
			std::cout << i << std::endl;
		}
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
	int slot = 0;
	while (slot < 4 && _templates[slot] != nullptr)
		slot++;
	if (slot < 4)
		_templates[slot] = m;
}
AMateria *MateriaSource::createMateria(std::string const & type)
{
	for(int i = 0; i < 4; i++)
	{
		if (_templates[i] && _templates[i]->getType() == type)
			return (_templates[i]->clone());
	}
	return (nullptr);
}
AMateria *MateriaSource::getTemplateSlot(int i) const
{
	if (i >= 0 && i <= 3)
		return (_templates[i]);
	return (nullptr);
}