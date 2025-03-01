/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanhwang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 11:08:52 by sanhwang          #+#    #+#             */
/*   Updated: 2025/03/01 15:43:14 by sanhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(NULL) {}

void    HumanB::setWeapon(Weapon& newWeapon){
    weapon = &newWeapon;
}

void    HumanB::attack() const{
    if(weapon){
        std::cout << name << " attacks with "
                    << weapon->getType() << std::endl;
    } 
    else{
        std::cout << name << " has no weapon" << std::endl;
    }
}