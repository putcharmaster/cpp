/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanhwang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 15:14:52 by sanhwang          #+#    #+#             */
/*   Updated: 2025/03/25 15:41:14 by sanhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(){
    ClapTrap robot("sam");
    ClapTrap copyRobot(robot);
    ClapTrap assignedRobot;
    assignedRobot = robot;

    std::cout << "==================================================" << std::endl;

    robot.attack("Target");
    robot.takeDamage(5);
    robot.beRepaired(2);
    robot.attack("Target");

    std::cout << "==================================================" << std::endl;    
    return 0;
}