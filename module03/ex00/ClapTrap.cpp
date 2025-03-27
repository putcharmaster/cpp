/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanhwang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 15:14:44 by sanhwang          #+#    #+#             */
/*   Updated: 2025/03/25 14:21:27 by sanhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
        : name("Default"), hitPoint(10), energyPoint(10), attackDamage(0) {
            std::cout << "ClapTrap " << name << " created (default)!" << std::endl;
        }

ClapTrap::ClapTrap(const std::string& name) 
        : name(name), hitPoint(10), energyPoint(10), attackDamage(0) {
            std::cout << "ClapTrap " << name << " created!" << std::endl;
        }

ClapTrap::ClapTrap(const ClapTrap& other) {
    *this = other;
    std::cout << "ClapTrap " << name << " copied!" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other){
    if (this != &other){
        name = other.name;
        hitPoint = other.hitPoint;
        energyPoint = other.energyPoint;
        attackDamage = other.attackDamage;
    }
    std::cout << "ClapTrap " << name << " assigned! (hitpoint, energypoint, attackdamage)" << std::endl;
    return *this;
}
ClapTrap::~ClapTrap(){
    std::cout << "ClapTrap " << name << " destroyed!" << std::endl;
}

void    ClapTrap::attack(const std::string& target){
     if (energyPoint > 0 && hitPoint > 0){
        energyPoint--;
        std::cout << "ClapTrap " << name << " attacks " << target
                << ", causing " << attackDamage << " points of damage!" << std::endl;
     }
     else{
        std::cout << "ClapTrap " << name << " has no energy or hit points left to attack!"
                << std::endl;
     }
}
void    ClapTrap::takeDamage(unsigned int amount){
    if (hitPoint > 0){
        if (amount >= (unsigned int)hitPoint){
            hitPoint = 0;
        }
        else
            hitPoint -= amount;
        std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << std::endl;
    }
    else{
        std::cout << "ClapTrap " << name 
            << " is already destroyed and cannot take more damage!" << std::endl;
    }
}

void    ClapTrap::beRepaired(unsigned int amount){
    if (energyPoint > 0 && hitPoint > 0) {
        hitPoint += amount;
        energyPoint--;
        std::cout << "ClapTrap " << name << " repairs itself for " 
                    << amount << " hit points!" << std::endl;
    }
    else
        std::cout << "ClapTrap " << name << " has no energy or hit points left to repair" << std::endl;
}