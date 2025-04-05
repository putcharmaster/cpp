/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanhwang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 14:45:05 by sanhwang          #+#    #+#             */
/*   Updated: 2025/03/28 21:41:54 by sanhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
    protected:
        std::string type;
    
    public:
        Animal();
        Animal(const Animal &other);
        Animal &operator=(const Animal &other);
        virtual ~Animal();

        std::string getType() const;
        virtual void makeSound() const;
};


#endif