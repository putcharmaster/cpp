/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanhwang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 11:09:16 by sanhwang          #+#    #+#             */
/*   Updated: 2025/03/02 03:36:04 by sanhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::debug(){
    std::cout << "debuuuuuuuuug" << std::endl;
}

void    Harl::info(){
    std::cout << "infoooooooooooo" << std::endl;
}

void    Harl::warning(){
    std::cout << "waaaaarning" << std::endl;
}

void    Harl::error(){
    std::cout << "EEEEEEEEEEEEEEEEError" << std::endl;
}

void    Harl::complain(std::string level){
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*f[])() = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
    for (int i = 0; i < 4; i++){
        if (level == levels[i]){
            (this->*f[i])();
            return;
        }
    }
}