/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomecker <tomecker@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:44:02 by tecker            #+#    #+#             */
/*   Updated: 2024/10/30 00:17:19 by tomecker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string.h>
#include <iostream>

class Animal
{
    protected:
        std::string _type;
    public:
        virtual ~Animal();

        Animal();
        Animal(const Animal &src);
        Animal &operator=(const Animal &src);
        virtual void makeSound(void) const = 0;
        std::string getType(void) const;
};

#endif