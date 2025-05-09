/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomecker <tomecker@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:44:08 by tecker            #+#    #+#             */
/*   Updated: 2024/10/29 22:42:33 by tomecker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
    private:

    public:
        ~Cat();

        Cat();
        Cat(const Cat &src);
        Cat &operator=(const Cat &src);
        void makeSound(void) const override;

};

#endif