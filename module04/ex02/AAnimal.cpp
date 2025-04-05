/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanhwang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 01:03:08 by sanhwang          #+#    #+#             */
/*   Updated: 2025/04/05 18:35:11 by sanhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(){
    std::cout << "AAnimal created" << std::endl;
}

AAnimal::AAnimal(const AAnimal &other) : type(other.type) {
    std::cout << "AAnimal copied" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &other){
    if (this != &other){
        type = other.type;
    }
    std::cout << "AAnimal assigned" << std::endl;
    return *this;
}

AAnimal::~AAnimal(){
    std::cout << "AAnimal destructed" << std::endl;
}

std::string AAnimal::getType() const{
    return type;
}

//void AAnimal::makeSound(); is no longer needed
//because it's a pure virtual fuction(=0) AAnimal class is an abstract class
