/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanhwang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 19:39:50 by sanhwang          #+#    #+#             */
/*   Updated: 2025/03/31 17:26:36 by sanhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
    std::cout << "WrongAnimal created" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) : type(other.type) {
    std::cout << "WrongAnimal Copied" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
    if (this != &other){
        type = other.type;
    }
    std::cout << "WrongAnimal assigned" << std::endl;
    return *this;
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal destructed" << std::endl;
}

void    WrongAnimal::makeSound() const{
    std::cout << "WrongAnimal weird sound!!" << std::endl;
}