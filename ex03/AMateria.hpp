/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomecker <tomecker@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 14:02:21 by tecker            #+#    #+#             */
/*   Updated: 2024/10/30 19:49:22 by tomecker         ###   ########.fr       */
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
        AMateria();
        AMateria(std::string const & type);
        virtual ~AMateria();
        AMateria(const AMateria &src);
        // AMateria &operator=(const AMateria &src);
        
        std::string const &getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

// no copy assigning operator because:
// AMateria is a base for types like Ice and Cure, assigning one type to another (e.g., Ice to Cure) is undesirable, and assigning within the same type (e.g., Ice to Ice) is redundant.

#endif