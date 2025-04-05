/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanhwang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 17:15:08 by sanhwang          #+#    #+#             */
/*   Updated: 2025/03/31 17:22:22 by sanhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(){
    type = "WrongCat";
    std::cout << "WrongCat created" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other){
    std::cout << "WrongCat copied(all the members of WrongAnimal)" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other){
    if (this != &other)
        type = other.type;
    std::cout << "WrongCat assigned" << std::endl;
    return *this;
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat destroyed" << std::endl;
}

void    WrongCat::makeSound() const{
    std::cout << "\"giving you deadly stares\"";
}
