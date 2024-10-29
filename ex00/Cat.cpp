/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tecker <tecker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:44:05 by tecker            #+#    #+#             */
/*   Updated: 2024/10/29 17:14:32 by tecker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
    : _type("Cat")
{
    std::cout << "(Cat) Default constructer called" << std::endl;    
}

Cat::Cat(const Cat &src)
{
    _type = src.getType();
    std::cout << "(Cat) Copy Constructor called" << std::endl;
}

Cat::~Cat()
{
    std::cout << "(Cat) Deconstructor called" << std::endl;
}

std::string Cat::getType(void) const
{
    return (_type);
}

void Cat::makeSound(void)
{
    std::cout << "Cat Sound..." << std::endl;
}

Cat &Cat::operator=(const Cat &src)
{
    std::cout << "(Cat) Copy assignment operator called" << std::endl;
    if (this != &src)
    {
        _type = src.getType();
    }
    return (*this);
}