/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomecker <tomecker@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 14:02:12 by tecker            #+#    #+#             */
/*   Updated: 2024/10/30 18:15:41 by tomecker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include <string.h>
#include <iostream>

#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        ~Cure();
        Cure(const Cure &src);
        // Cure &operator=(const Cure &src);
        
        Cure* clone() const override;
        void use(ICharacter& target) override;
};

// No Copy assignment operator because:
// assigning one Cure to another would just result in redundant work

#endif