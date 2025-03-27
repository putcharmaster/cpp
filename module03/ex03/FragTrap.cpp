/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanhwang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 20:03:08 by sanhwang          #+#    #+#             */
/*   Updated: 2025/03/26 20:17:45 by sanhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(){
    hitPoint = 100;
    energyPoint = 100;
    attackDamage = 30;
    std::cout << "FragTrap default constructor called!" << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
    hitPoint = 100;
    energyPoint = 100;
    attackDamage = 30;
    std::cout << "FragTrap named constructor called for " << name << "!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) {
    std::cout << "Fragtrap copy constructor called!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
    if (this != &other)
        ClapTrap::operator=(other);
    std::cout << "FragTrap assignment operator called!" << std::endl;
    return *this;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap destructor called!" << std::endl;
}

void FragTrap::attack(const std::string &target){
    if (energyPoint > 0){
        std::cout 
            << "FragTrap " << name << " aggressively attacks " << target\
            << ", dealing " << attackDamage << " damage!" << std::endl;
        energyPoint--;
    }
    else {
        std::cout << "FragTrap " << name << " is out of energy and can't attack!"
            << std::endl;
    }
}

void FragTrap::highFivesGuys(){
    std::cout << "FragTrap " << name << " requests a high five!" << std::endl; 
}