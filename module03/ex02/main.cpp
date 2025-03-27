/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanhwang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 20:14:24 by sanhwang          #+#    #+#             */
/*   Updated: 2025/03/27 00:40:51 by sanhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(){
    FragTrap frag("sammy");
    std::cout << std::endl;
/* 
    FragTrap robot("sam");
    std::cout << std::endl;
    
    FragTrap copyRobot(robot);
    std::cout << std::endl;
    
    FragTrap robot2;
    std::cout << std::endl;
    
    robot2 = robot;
    std::cout << std::endl;
    std::cout << std::endl; */

    frag.attack("magali");
    frag.highFivesGuys();
    std::cout << std::endl;
    
    return 0;
}