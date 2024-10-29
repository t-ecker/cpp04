/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomecker <tomecker@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:44:02 by tecker            #+#    #+#             */
/*   Updated: 2024/10/29 23:05:13 by tomecker         ###   ########.fr       */
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
        virtual void makeSound(void) const;
        std::string getType(void) const;
};

#endif