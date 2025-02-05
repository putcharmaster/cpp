/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanhwang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 01:27:24 by sanhwang          #+#    #+#             */
/*   Updated: 2025/01/29 01:30:47 by sanhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

int main(){
    PhoneBook book;
    std::string command;

    while(1){
        std::cout << "Enter command (ADD, SEARCH or EXIT): ";
        std::getline(std::cin, command);

        if (command == "EXIT" || command == "exit")
            break;
        else if (command == "ADD" || command == "add")
            book.addContact();
        else if (command == "SEARCH" || command == "search")
            book.searchContact();
    }
    return 0;
}