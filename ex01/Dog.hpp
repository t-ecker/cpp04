/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomecker <tomecker@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:44:14 by tecker            #+#    #+#             */
/*   Updated: 2024/10/29 23:43:08 by tomecker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *_brain;
    public:
        ~Dog();

        Dog();
        Dog(const Dog &src);
        Dog &operator=(const Dog &src);
        void makeSound(void) const override;
        Brain *getBrain(void) const;

};

#endif