/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanhwang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 11:08:30 by sanhwang          #+#    #+#             */
/*   Updated: 2025/02/26 15:11:04 by sanhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){
    if (N <= 0)
        return NULL; // !! nullptr does not work with C++98 flag
    Zombie* zombies = new Zombie[N];
    for(int i = 0; i < N; i++){
        zombies[i].setName(name);
    }
    return zombies;
}