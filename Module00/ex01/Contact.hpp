/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanhwang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 22:28:28 by sanhwang          #+#    #+#             */
/*   Updated: 2025/01/28 22:39:15 by sanhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact{
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

public:
    void setInfo(std::string first_name, std::string last_name, std::string nickname, 
    std::string phone_number, std::string darkest_secret){
        this->first_name = first_name;
        this->last_name = last_name;
        this->nickname = nickname;
        this->phone_number = phone_number;
        this->darkest_secret = darkest_secret;
    }

    std::string getFirstName(){ return this->first_name; }
    std::string getLastName(){ return this->last_name; }
    std::string getNickname(){ return this->nickname; }
    std::string getPhoneNumber(){ return this->phone_number; }
    std::string getDarkestSecret(){ return this->darkest_secret; }
};

#endif