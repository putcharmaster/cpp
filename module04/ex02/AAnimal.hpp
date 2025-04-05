/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanhwang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 00:58:30 by sanhwang          #+#    #+#             */
/*   Updated: 2025/04/03 01:06:05 by sanhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal {
    protected:
        std::string type;

    public:
        AAnimal();
        AAnimal(const AAnimal &other);
        AAnimal &operator=(const AAnimal &other);
        virtual ~AAnimal();

        std::string getType() const;
        virtual void    makeSound() const = 0;
};

#endif