/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanhwang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 10:57:37 by sanhwang          #+#    #+#             */
/*   Updated: 2025/02/23 15:05:28 by sanhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){
    randomChump("stack zombie");

    Zombie* heap = newZombie("heap zombie");
    heap->announce();
    delete heap;

    std::string name = "foo";
/*     std::string input;
    std::cout << "name: ";
    std::getline(std::cin, input);
    
    Zombie  zombie(input);
    zombie.announce();
 */
    return 0;
}