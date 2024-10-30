/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tecker <tecker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 14:00:39 by tecker            #+#    #+#             */
/*   Updated: 2024/10/30 14:40:56 by tecker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type)
    : _type(type)
{
    std::cout << "(AMateria) String Constructor called" << std::endl;
}

AMateria::~AMateria()
{
    std::cout << "(AMateria) Deconstructor called" << std::endl;
}

AMateria::AMateria(const AMateria &src)
{
    _type = src.getType();
    std::cout << "(AMateria) Copy Constructor called" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &src)
{
    std::cout << "(AMateria) Copy assignment operator called" << std::endl;
    if (this != &src)
    {
        _type = src.getType();
    }
    return (*this);
}

std::string const &AMateria::getType() const
{
    return (_type);
}

void AMateria::use(ICharacter& target)
{
    std::cout << "AMateria is used on " << target.getName() << std::endl;
}