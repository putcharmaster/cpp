/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanhwang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 11:09:11 by sanhwang          #+#    #+#             */
/*   Updated: 2025/03/01 23:21:01 by sanhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int main(int ac, char **av){
    if (ac != 4){
        std::cerr << "Usage: " << av[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }
    
    Replace replacer(av[1], av[2], av[3]);
    if (!replacer.processFile())
        return 1;

    std::cout << "File process successfully: " << av[1] << ".replace" << std::endl;
    return 0;
}
