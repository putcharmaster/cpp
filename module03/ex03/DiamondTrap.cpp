/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanhwang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 01:10:56 by sanhwang          #+#    #+#             */
/*   Updated: 2025/03/27 02:03:55 by sanhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : FragTrap("DefaultFragTrap"), ScavTrap("DefaultScavTrap") {
    std::cout << "DiamondTrap Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name) : FragTrap(name), ScavTrap(name){
    this->name = "\"Diamond_" + name + "\"";
    //this->name = name;  // need to do this because i have private name member
    std::cout << "DiamondTrap constructor called for " << name << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : FragTrap(other), ScavTrap(other){
    std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other){
    std::cout << "DiamondTrap copy assignment operator called" << std::endl;
    if (this != &other){
        FragTrap::operator=(other);
        ScavTrap::operator=(other);
        name = other.name;
    }
    return *this;
}

DiamondTrap::~DiamondTrap(){
    std::cout << "DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::whoAmI(){
    std::cout << "DiamondTrap name is " << name
                << "  ClapTrap name is \"" << FragTrap::name 
                << "\"" << std::endl;
}