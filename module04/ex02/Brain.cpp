/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanhwang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 20:19:13 by sanhwang          #+#    #+#             */
/*   Updated: 2025/04/03 23:40:58 by sanhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() : nextIndex(0) {
    std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &other){
    *this = other;
    std::cout << "Brain copied" << std::endl;
}

Brain &Brain::operator=(const Brain &other) {
    if (this != &other){
        for (int i = 0; i < 100; i++)
            ideas[i] = other.ideas[i];
        nextIndex = other.nextIndex;
    }
    std::cout << "Brain assigned" << std::endl;
    return *this;
}

Brain::~Brain(){
    std::cout << "Brain destructor called" << std::endl;
}

void    Brain::setIdea(const std::string &idea) {
    if (nextIndex < 100) {
        ideas[nextIndex] = idea;
        nextIndex++;
    }
    else {
        std::cout << "Brain is full! Cannot store more ideas." << std::endl;
    }
}

void Brain::printIdea() const {
    for (int i = 0; i < nextIndex; i++)
        std::cout << "Idea[" << i << "]: " << ideas[i] << std::endl;
}