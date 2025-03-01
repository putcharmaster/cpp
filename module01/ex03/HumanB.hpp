/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanhwang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 11:08:55 by sanhwang          #+#    #+#             */
/*   Updated: 2025/03/01 15:37:09 by sanhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class  HumanB{
    private:
        std::string name;
        Weapon* weapon;  // using the pointer because it can be null

    public:
        HumanB(std::string name);
        void setWeapon(Weapon& newWeapon);
        void attack() const;
};

#endif