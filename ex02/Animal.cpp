/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomecker <tomecker@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:43:59 by tecker            #+#    #+#             */
/*   Updated: 2024/10/29 22:13:13 by tomecker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
    : _type("Animal")
{
    std::cout << "(Animal) Default constructer called" << std::endl;    
}

Animal::Animal(const Animal &src)
{
    _type = src.getType();
    std::cout << "(Animal) Copy Constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "(Animal) Deconstructor called" << std::endl;
}

std::string Animal::getType(void) const
{
    return (_type);
}

void Animal::makeSound(void) const
{
    std::cout << "Animal Sound..." << std::endl;
}

Animal &Animal::operator=(const Animal &src)
{
    std::cout << "(Animal) Copy assignment operator called" << std::endl;
    if (this != &src)
    {
        _type = src.getType();
    }
    return (*this);
}

