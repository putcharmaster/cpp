/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanhwang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 22:46:38 by sanhwang          #+#    #+#             */
/*   Updated: 2025/04/03 23:46:23 by sanhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
    type = "Dog";
    brain = new Brain();
    std::cout << "Dog created" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other) {
    brain = new Brain(*other.brain);
    std::cout << "Dog copied" << std::endl;
}

Dog &Dog::operator=(const Dog &other) {
    if (this != &other){
        Animal::operator=(other);
        delete brain;
        brain = new Brain(*other.brain);
    }
    std::cout << "Dog assigned" << std::endl;
    return *this;
}

Dog::~Dog(){
    delete brain;
    std::cout << "Dog destroyed" << std::endl;
}

void    Dog::makeSound() const {
    std::cout << "Mung! Mung!!" << std::endl;
}

void    Dog::setIdea(const std::string &idea) {
    brain->setIdea(idea);
}

void    Dog::printIdeas() const {
    brain->printIdea();
}