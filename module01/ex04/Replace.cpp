/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanhwang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 18:06:38 by sanhwang          #+#    #+#             */
/*   Updated: 2025/03/01 18:49:15 by sanhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace(std::string filename, std::string s1, std::string s2)
                : filename(filename), s1(s1), s2(s2){}

bool    Replace::processFile(){
    std::ifstream inputFile(filename.c_str());
    if (!inputFile){
        std::cerr << "Error: Could not open file " << filename << std::endl;
        return false;
    }

    std::string newFilename = filename + ".replace";
    std::ofstream outputFile(newFilename.c_str());
    if(!outputFile){
        std::cerr << "Error: Could not create file " << newFilename << std::endl;
        return false;
    }

    std::string line;
    while(std::getline(inputFile, line)){
        size_t pos = 0;
        while((pos = line.find(s1, pos)) != std::string::npos){
            line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
            pos += s2.length();
        }
        outputFile << line << std::endl;
    }

    inputFile.close();
    outputFile.close();
    return true;
}