/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanhwang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 23:29:32 by sanhwang          #+#    #+#             */
/*   Updated: 2025/01/29 01:31:37 by sanhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook(){
    count = 0;
    oldest = 0;
}

std::string PhoneBook::truncate(std::string str){
    if (str.length() > 10)
        return (str.substr(0, 9) + ".");
    return str;
}

void    PhoneBook::addContact(){
    std::string first_name, last_name, nickname, phone_number, darkest_secret;

    std::cout << "Enter first name: ";
    std::getline(std::cin, first_name);
    std::cout << "Enter last name: ";
    std::getline(std::cin, last_name);
    std::cout << "Enter nickname: ";
    std::getline(std::cin, nickname);
    std::cout << "Enter phone number: ";
    std::getline(std::cin, phone_number);
    std::cout << "Enter darkest secret: ";
    std::getline(std::cin, darkest_secret);

    if (first_name.empty() || last_name.empty() || nickname.empty()
        || phone_number.empty() || darkest_secret.empty()){
        std::cout << "All fields must be filled!" << std::endl;
        return;
    }

    contacts[oldest].setInfo(first_name, last_name, nickname, phone_number, darkest_secret);
    if (count < 8)
        count++;
    oldest = (oldest + 1) % 8;
}

void    PhoneBook::searchContact(){
    int index;

    if (count == 0){
        std::cout << "No contacts saved yet!" << std::endl;
        return;
    }

    std::cout << std::setw(10) << "Index" << "|";
    std::cout << std::setw(10) << "First Name" << "|";
    std::cout << std::setw(10) << "Last Name" << "|";
    std::cout << std::setw(10) << "Nickname" << std::endl;

    for (int i = 0; i < count; i++){
        std::cout << std::setw(10) << i << "|";
        std::cout << std::setw(10) << truncate(contacts[i].getFirstName()) << "|";
        std::cout << std::setw(10) << truncate(contacts[i].getLastName()) << "|";
        std::cout << std::setw(10) << truncate(contacts[i].getNickname()) << std::endl;
    }

    std::cout << "Enter index to display: ";
    std::cin >> index;
    std::cin.ignore(); //to handle input buffer cleaning. like a flush 

    if (std::cin.fail() || index < 0 || index >= count){
        std::cout << "Invalid index!" << std::endl;
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        return;
    }

    std::cout << "First name: " << contacts[index].getFirstName() << std::endl;
    std::cout << "Last name: " << contacts[index].getLastName() << std::endl;
    std::cout << "Nickname: " << contacts[index].getNickname() << std::endl;
    std::cout << "Phone number: " << contacts[index].getPhoneNumber()  << std::endl;
    std::cout << "Darkest secret: " << contacts[index].getDarkestSecret() << std::endl;

}