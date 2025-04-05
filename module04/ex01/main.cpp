/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanhwang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 20:26:19 by sanhwang          #+#    #+#             */
/*   Updated: 2025/04/03 23:50:42 by sanhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    std::cout << "Creating Animals...\n";

    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << "\nTesting makeSound():\n";
    dog->makeSound();
    cat->makeSound();

    std::cout << "\nTesting Brain functionality:\n";
    Dog originalDog;
    originalDog.setIdea("Chase the ball!");
    originalDog.setIdea("Dig a hole!");
    
    std::cout << "Original Dog's ideas:\n";
    originalDog.printIdeas();

    std::cout << "\nCopying the dog (Deep copy test):\n";
    Dog copiedDog = originalDog;
    copiedDog.printIdeas();

    std::cout << "\nModifying copied dog's ideas:\n";
    copiedDog.setIdea("Bark at the mailman!");
    copiedDog.printIdeas();

    std::cout << "\nOriginal Dog's ideas after modifying copied dog (Should be unchanged!):\n";
    originalDog.printIdeas();

    std::cout << "\nDeleting Animals...\n";
    delete dog;
    delete cat;

    std::cout << "\nCreating an array of Animals (Polymorphism test)...\n";
    Animal* animals[4];

    for (int i = 0; i < 2; i++) {
        animals[i] = new Dog();
    }
    for (int i = 2; i < 4; i++) {
        animals[i] = new Cat();
    }

    std::cout << "\nDeleting Animal array...\n";
    for (int i = 0; i < 4; i++) {
        delete animals[i]; // Should call proper destructors
    }

    std::cout << "End of program.\n";
    return 0;
}
