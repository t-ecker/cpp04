/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomecker <tomecker@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:44:17 by tecker            #+#    #+#             */
/*   Updated: 2024/10/29 23:17:23 by tomecker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    
    const Animal* i = new Cat();
    // const WrongAnimal* i = new WrongCat();
    
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    delete(meta);
    delete(i);
    delete(j);
    return 0;
}

// Virtual member functions:
// allows a Base pointer to call the Derived version of an overridden function (polymorphism)

    // Enforce derived class implementation (abstract class):
    //     virtual double area() const = 0; (in base class)



// Virtual Deconstructors:

// Virtual destructors are only necessary when deleting a derived object through a base class pointer
//          (or if there is a virtual member function in the base class)
    // Needed:
    //     const Animal* meta = new Cat();
    // Not needed:
    //     const Animal* meta = new Animal(); (Animal has no virtual member function)
    //     Animal b;

