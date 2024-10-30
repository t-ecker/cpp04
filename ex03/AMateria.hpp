/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tecker <tecker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 14:02:21 by tecker            #+#    #+#             */
/*   Updated: 2024/10/30 15:09:19 by tecker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string.h>
#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
    protected:
        const std::string _type;
    public:
        AMateria(std::string const & type);
        virtual ~AMateria();
        AMateria(const AMateria &src);
        AMateria &operator=(const AMateria &src);
        
        std::string const &getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif