/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanhwang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 15:12:20 by sanhwang          #+#    #+#             */
/*   Updated: 2025/04/03 23:51:25 by sanhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {
    private:
        Brain *brain;
        
    public:
        Cat();
        Cat(const Cat &other);
        Cat &operator=(const Cat &other);
        ~Cat();

        void    makeSound() const; //no override with C++98.
        Brain   *getBrain() const;
};

#endif