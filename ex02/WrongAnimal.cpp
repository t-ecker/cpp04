/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomecker <tomecker@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:43:59 by tecker            #+#    #+#             */
/*   Updated: 2024/10/29 22:13:13 by tomecker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
    : _type("WrongAnimal")
{
    std::cout << "(WrongAnimal) Default constructer called" << std::endl;    
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
    _type = src.getType();
    std::cout << "(WrongAnimal) Copy Constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "(WrongAnimal) Deconstructor called" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
    return (_type);
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "WrongAnimal Sound..." << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src)
{
    std::cout << "(WrongAnimal) Copy assignment operator called" << std::endl;
    if (this != &src)
    {
        _type = src.getType();
    }
    return (*this);
}

