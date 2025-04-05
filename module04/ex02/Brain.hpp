/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanhwang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 20:17:24 by sanhwang          #+#    #+#             */
/*   Updated: 2025/04/03 23:41:11 by sanhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain{
    private:
        std::string ideas[100];
        int nextIndex;

    public:
        Brain();
        Brain(const Brain &other);
        Brain &operator=(const Brain &other);
        ~Brain();

        void    setIdea(const std::string &idea);
        void    printIdea() const;
};

#endif