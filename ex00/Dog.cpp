/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomecker <tomecker@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:44:10 by tecker            #+#    #+#             */
/*   Updated: 2024/10/29 23:04:39 by tomecker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
    : Animal()
{
    std::cout << "(Dog) Default constructer called" << std::endl;    
    _type = "Dog";
}

Dog::Dog(const Dog &src)
    : Animal(src)
{
    _type = src.getType();
    std::cout << "(Dog) Copy Constructor called" << std::endl;
}

Dog::~Dog()
{
    std::cout << "(Dog) Deconstructor called" << std::endl;
}

void Dog::makeSound(void) const
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