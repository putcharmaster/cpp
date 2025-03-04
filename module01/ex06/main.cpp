/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanhwang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 03:34:47 by sanhwang          #+#    #+#             */
/*   Updated: 2025/03/02 03:35:09 by sanhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av) {
    if (ac != 2) {
        std::cerr << "Usage: ./harlFilter <log level>" << std::endl;
        return 1;
    }

    Harl harl;
    std::string level = av[1];

    harl.complain(level);
    
    return 0;
}