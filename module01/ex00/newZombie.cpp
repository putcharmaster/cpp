/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanhwang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 10:57:47 by sanhwang          #+#    #+#             */
/*   Updated: 2025/02/22 21:46:39 by sanhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name){
    return  new Zombie(name);
}

/* you can't use "void announce();" because it's heap allocation 
    you must "delete" (like free) after the usage */