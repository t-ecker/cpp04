/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomecker <tomecker@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 14:01:13 by tecker            #+#    #+#             */
/*   Updated: 2024/10/30 20:56:12 by tomecker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
    : AMateria("ice")
{
    std::cout << "(Ice) Default Constructor called" << std::endl;
}

Ice::~Ice()
{
    std::cout << "(Ice) Deconstructor called" << std::endl;
}

Ice::Ice(const Ice &src)
    : AMateria(src)
{
    std::cout << "(Ice) Copy Constructor called" << std::endl;
}

// Ice &Ice::operator=(const Ice &src)
// {
//     std::cout << "(Ice) Copy assignment operator called" << std::endl;
//     if (this != &src)
//     {
//         _type = src.getType();
//     }
//     return (*this);
// }


void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
}

Ice* Ice::clone() const
{
    Ice * res = new Ice(*this);
    return (res);
}