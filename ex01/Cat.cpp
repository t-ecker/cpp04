/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomecker <tomecker@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:44:05 by tecker            #+#    #+#             */
/*   Updated: 2024/10/29 23:42:27 by tomecker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
    : Animal()
{
    std::cout << "(Cat) Default constructer called" << std::endl;    
    _type = "Cat";
    _brain = new Brain();
}

Cat::Cat(const Cat &src)
    : Animal(src)
{
    _type = src.getType();
    _brain = src.getBrain();
    std::cout << "(Cat) Copy Constructor called" << std::endl;
}

Cat::~Cat()
{
    std::cout << "(Cat) Deconstructor called" << std::endl;
    delete _brain;
}

void Cat::makeSound(void) const
{
    std::cout << "Cat Sound..." << std::endl;
}

Cat &Cat::operator=(const Cat &src)
{
    std::cout << "(Cat) Copy assignment operator called" << std::endl;
    if (this != &src)
    {
        _type = src.getType();
        _brain = src.getBrain();
    }
    return (*this);
}

Brain *Cat::getBrain(void) const
{
    return (_brain);
}