/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanhwang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 11:09:06 by sanhwang          #+#    #+#             */
/*   Updated: 2025/03/01 15:29:56 by sanhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class   Weapon{
    private:
        std::string type;

    public:
        Weapon(std::string type);
        const std::string& getType() const;
        void    setType(const std::string& newType);
};



#endif