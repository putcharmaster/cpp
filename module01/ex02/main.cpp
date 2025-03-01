/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanhwang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 11:08:37 by sanhwang          #+#    #+#             */
/*   Updated: 2025/02/26 22:47:18 by sanhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(){
    std::string     str = "HI THIS IS BRAIN";
    std::string*    stringPTR = &str;
    std::string&    stringREF = str;

    std::cout << "memory address  ===========================" << std::endl;
    std::cout << "Address of str:              " << &str << std::endl;
    std::cout << "Address stored in stringPTR: " << stringPTR << std::endl;
    std::cout << "Address stored in stringREF: " << &stringREF << std::endl;

    std::cout << "value  ====================================" << std::endl;
    std::cout << "Original string:" << str << std::endl;
    std::cout << "Pointer value:  " << *stringPTR << std::endl;
    std::cout << "Reference value " << stringREF << std::endl;

    return 0;
}