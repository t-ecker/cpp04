/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomecker <tomecker@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:44:17 by tecker            #+#    #+#             */
/*   Updated: 2024/10/30 00:12:41 by tomecker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    
    int amount = 4;
    Animal *animals[amount];

    for (int b = 0; b < amount / 2; b++)
        animals[b] = new Dog();
    for (int b = amount / 2; b < amount; b++)
        animals[b] = new Cat();
    for (int b = 0; b < amount; b++)
        delete animals[b];
    
    delete i;
    delete j;
    return 0;
}
