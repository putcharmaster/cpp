/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanhwang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 22:46:38 by sanhwang          #+#    #+#             */
/*   Updated: 2025/03/28 22:50:45 by sanhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
    type = "Dog";
    std::cout << "Dog created" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other) {
    std::cout << "Dog copied" << std::endl;
}

Dog &Dog::operator=(const Dog &other) {
    if (this != &other)
        type = other.type;
    std::cout << "Dog assigned" << std::endl;
    return *this;
}

Dog::~Dog(){
    std::cout << "Dog destroyed" << std::endl;
}

void    Dog::makeSound() const {
    std::cout << "Mung! Mung!!" << std::endl;
}