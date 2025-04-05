/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanhwang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 22:52:07 by sanhwang          #+#    #+#             */
/*   Updated: 2025/03/28 22:56:53 by sanhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    type = "Cat";
    std::cout << "Cat created" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other) {
    std::cout << "Cat copied" << std::endl;
}

Cat &Cat::operator=(const Cat &other) {
    if (this != &other)
        type = other.type;
    std::cout << "Cat assigned" << std::endl;
    return *this;
}

Cat::~Cat() {
    std::cout << "Cat destroyed" << std::endl;
}

void    Cat::makeSound() const {
    std::cout << "miaoo!!  miaooo" << std::endl;
}