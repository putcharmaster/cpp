/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanhwang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 22:52:07 by sanhwang          #+#    #+#             */
/*   Updated: 2025/04/03 23:51:36 by sanhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    type = "Cat";
    brain = new Brain();
    std::cout << "Cat created" << std::endl;
}

Cat::Cat(const Cat &other) : AAnimal(other) {
    brain = new Brain(*other.brain);
    std::cout << "Cat copied" << std::endl;
}

Cat &Cat::operator=(const Cat &other) {
    if (this != &other){
        AAnimal::operator=(other); //deep copy 
        //type = other.type is shallow copy
        delete brain; //to prevent memory leak.
        brain = new Brain(*other.brain);
    }
    std::cout << "Cat assigned" << std::endl;
    return *this;
}

Cat::~Cat() {
    delete brain;
    std::cout << "Cat destroyed" << std::endl;
}

void    Cat::makeSound() const {
    std::cout << "miaoo!!  miaooo" << std::endl;
}

Brain   *Cat::getBrain() const {
    return brain;
}