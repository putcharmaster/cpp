/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanhwang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 22:50:55 by sanhwang          #+#    #+#             */
/*   Updated: 2025/01/28 22:50:55 by sanhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void    Contact::setInfo(std::string first_name, std::string last_name, std::string nickname, 
                        std::string phone_number, std::string darkest_secret)
{
    this->first_name = first_name;
    this->last_name = last_name;
    this->nickname = nickname;
    this->phone_number = phone_number;
    this->darkest_secret = darkest_secret;
}

std::string Contact::getFirstName() {return this->first_name;}
std::string Contact::getLastName() {return this->last_name;}
std::string Contact::getNickname() {return this->nickname;}
std::string Contact::getPhoneNumber() {return this->phone_number;}
std::string Contact::getDarkestSecret() {return this->darkest_secret;}




