/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tecker <tecker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 14:00:58 by tecker            #+#    #+#             */
/*   Updated: 2024/10/30 14:57:06 by tecker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
    : AMateria("cure")
{
    std::cout << "(Cure) Default Constructor called" << std::endl;
}

Cure::~Cure()
{
    std::cout << "(Cure) Deconstructor called" << std::endl;
}

Cure::Cure(const Cure &src)
    : AMateria(src)
{
    _type = src.getType();
    std::cout << "(Cure) Copy Constructor called" << std::endl;
}

Cure &Cure::operator=(const Cure &src)
{
    std::cout << "(Cure) Copy assignment operator called" << std::endl;
    if (this != &src)
    {
        _type = src.getType();
    }
    return (*this);
}


void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure* Cure::clone() const
{
    Cure * res = new Cure(*this);
    return (res);
}
