/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomecker <tomecker@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:44:08 by tecker            #+#    #+#             */
/*   Updated: 2024/10/29 23:42:08 by tomecker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain *_brain;
    public:
        ~Cat();

        Cat();
        Cat(const Cat &src);
        Cat &operator=(const Cat &src);
        void makeSound(void) const override;
        Brain *getBrain(void) const;

};

#endif