/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanhwang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 16:22:04 by sanhwang          #+#    #+#             */
/*   Updated: 2025/03/25 18:52:07 by sanhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    hitPoint = 100;
    energyPoint = 50;
    attackDamage = 20;
    std::cout 
        << "ScavTrap default constructor called!(hit 100, energy 50, damage 20)" 
        << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name){
    hitPoint = 100;
    energyPoint = 50;
    attackDamage = 20;
    std::cout
        << "ScavTrap named constructor called for " << name << "!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other){
    std::cout << "ScavTrap copy constructor called!" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other){
    if (this != &other)
        ClapTrap::operator=(other);
    std::cout << "ScavTrap assignment operator called!" << std::endl;
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor called!" << std::endl;
}

void    ScavTrap::attack(const std::string &target) {
    if (energyPoint > 0) {
        std::cout << "ScavTrap " << name << " attacks " << target
                    << ", causing " << attackDamage << " points of damage!" << std::endl;
        energyPoint--;
    }
    else {
        std::cout << "ScavTrap " << name << " has no energy left to attack!" << std::endl;
    }
}

void    ScavTrap::guardGate(){
    std::cout << "ScavTrap " << name << " is now in Gatekeeper mode!" << std::endl;
}