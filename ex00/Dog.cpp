/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tecker <tecker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:44:10 by tecker            #+#    #+#             */
/*   Updated: 2024/10/29 17:14:20 by tecker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
    : _type("Dog")
{
    std::cout << "(Dog) Default constructer called" << std::endl;    
}

Dog::Dog(const Dog &src)
{
    _type = src.getType();
    std::cout << "(Dog) Copy Constructor called" << std::endl;
}

Dog::~Dog()
{
    std::cout << "(Dog) Deconstructor called" << std::endl;
}

std::string Dog::getType(void) const
{
    return (_type);
}

void Dog::makeSound(void)
{
    std::cout << "Dog Sound..." << std::endl;
}

Dog &Dog::operator=(const Dog &src)
{
    std::cout << "(Dog) Copy assignment operator called" << std::endl;
    if (this != &src)
    {
        _type = src.getType();
    }
    return (*this);
}