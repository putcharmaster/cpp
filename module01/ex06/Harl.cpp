/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanhwang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 03:34:11 by sanhwang          #+#    #+#             */
/*   Updated: 2025/03/02 03:51:33 by sanhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::debug(){
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "debuuuuuuuuug" << std::endl;
}

void    Harl::info(){
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "infoooooooooooo" << std::endl;
}

void    Harl::warning(){
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "waaaaarning" << std::endl;
}

void    Harl::error(){
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "EEEEEEEEEEEEEEEEError" << std::endl;
}

void    Harl::complain(std::string level){
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*f[])() = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
    
    bool found = false;
    for (int i = 0; i < 4; i++){
        if (level == levels[i]){
            found = true;
            for (int j = i; j < 4; j++)
                (this->*f[j])();
            break;
        }
    }
    if (!found){
         std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        std::cout << "Although there are several ways to deal with Harl, one of the most effective is to SWITCH it off." << std::endl;
    }
}