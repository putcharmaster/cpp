/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanhwang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 14:51:30 by sanhwang          #+#    #+#             */
/*   Updated: 2025/03/28 15:18:16 by sanhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal") {
    std::cout << "Default Animal created" << std::endl;
}
//to avoid unexpected behavior, initialize type("Animal")

Animal::Animal(const Animal &other) : type(other.type) {
    std::cout << "(copy constructor)Animal " << type << " copied" << std::endl;
}

Animal &Animal::operator=(const Animal &other) {
    if (this != &other) {
        this->type = other.type;
    }
    std::cout << "(copy assignment operator)Animal " << type << "copied" << std::endl;
    return *this;
}

Animal::~Animal(){
    std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType() const {
    return type;
}

void    Animal::makeSound() const {
    std::cout << "Animal sound!" << std::endl;
}

 