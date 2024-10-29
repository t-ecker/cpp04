/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomecker <tomecker@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:44:05 by tecker            #+#    #+#             */
/*   Updated: 2024/10/29 22:40:52 by tomecker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
    : WrongAnimal()
{
    std::cout << "(WrongCat) Default constructer called" << std::endl;    
    _type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &src)
    : WrongAnimal(src)
{
    _type = src.getType();
    std::cout << "(WrongCat) Copy Constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "(WrongCat) Deconstructor called" << std::endl;
}

void WrongCat::makeSound(void) const
{
    std::cout << "WrongCat Sound..." << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &src)
{
    std::cout << "(WrongCat) Copy assignment operator called" << std::endl;
    if (this != &src)
    {
        _type = src.getType();
    }
    return (*this);
}