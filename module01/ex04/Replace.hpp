/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanhwang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 18:06:41 by sanhwang          #+#    #+#             */
/*   Updated: 2025/03/01 18:09:02 by sanhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <string>
#include <fstream>

class Replace{
    private:
        std::string filename;
        std::string s1;
        std::string s2;

    public:
        Replace(std::string filename, std::string s1, std::string s2);
        bool    processFile();
};

#endif