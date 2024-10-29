/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomecker <tomecker@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:44:14 by tecker            #+#    #+#             */
/*   Updated: 2024/10/29 23:02:49 by tomecker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
    private:

    public:
        ~Dog();

        Dog();
        Dog(const Dog &src);
        Dog &operator=(const Dog &src);
        void makeSound(void) const override;

};

#endif