/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanhwang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 17:05:05 by sanhwang          #+#    #+#             */
/*   Updated: 2025/03/31 17:15:00 by sanhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
    public:
        WrongCat();
        WrongCat(const WrongCat &other);
        WrongCat &operator=(const WrongCat &other);
        ~WrongCat();

        void    makeSound() const;  //C++98 doesn't have a keyword override 
        // this will override WrongAnimal makeSound() anyway
};

#endif