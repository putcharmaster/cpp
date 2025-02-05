/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanhwang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 23:27:12 by sanhwang          #+#    #+#             */
/*   Updated: 2025/01/28 23:29:20 by sanhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook{
    private:
    Contact contacts[8];
    int     count;
    int     oldest;

    public:
    PhoneBook();
    void    addContact();
    void    searchContact();
    std::string truncate(std::string str);
};

#endif