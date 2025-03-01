/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanhwang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 11:08:18 by sanhwang          #+#    #+#             */
/*   Updated: 2025/02/26 15:14:03 by sanhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){
    int n = 7;

    if (n <= 0){
        std::cout << "there's no zombie." << std::endl;
        return 0;
    }
    else{
        Zombie* rabbits = zombieHorde(n, "rabbit zombies");
        for(int i = 0; i < n; i++){
            rabbits[i].announce();
        }
        delete[] rabbits;
        return 0;
    }
}