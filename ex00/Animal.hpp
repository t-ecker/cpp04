/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tecker <tecker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:44:02 by tecker            #+#    #+#             */
/*   Updated: 2024/10/29 17:09:43 by tecker           ###   ########.fr       */
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
        ~Animal();

        Animal();
        Animal(const Animal &src);
        Animal &operator=(const Animal &src);
        void makeSound(void);
        std::string getType(void) const;
};

#endif