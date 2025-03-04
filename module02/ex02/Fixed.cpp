/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanhwang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 23:38:45 by sanhwang          #+#    #+#             */
/*   Updated: 2025/03/04 20:17:59 by sanhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixedPointValue(0){}

Fixed::Fixed(const int intValue) : fixedPointValue(intValue << fractionalBits){}

Fixed::Fixed(const float floatValue){
    fixedPointValue = roundf(floatValue * (1 << fractionalBits));
}

Fixed::Fixed(const Fixed &other) : fixedPointValue(other.fixedPointValue){}

Fixed &Fixed::operator=(const Fixed &other){
    if (this != &other){
        fixedPointValue = other.fixedPointValue;
    }
    return *this;
}

Fixed::~Fixed(){}

int Fixed::getRawBits() const {
    return fixedPointValue;
}

void Fixed::setRawBits(int const raw){
    fixedPointValue = raw;
}

bool Fixed::operator>(const Fixed &other) const{
    return fixedPointValue > other.fixedPointValue;
}

bool Fixed::operator<(const Fixed &other) const{
    return fixedPointValue < other.fixedPointValue
}

bool Fixed::operator>=(const Fixed &other) const{
    return fixedPointValue >= other.fixedPointValue;
}

bool Fixed::operator<=(const Fixed &other) const{
    return fixedPointValue <= other.fixedPointValue;
}

bool Fixed::operator==(const Fixed &other) const{
    return fixedPointValue == other.fixedPointValue;
}

bool Fixed::operator!=(const Fixed &other) const{
    return fixedPointValue != other.fixedPointValue;
}

Fixed Fixed::operator+(const Fixed &other) const{
    Fixed result;
    result.fixedPointValue = fixedPointValue + other.fixedPointValue;
    return result;
}

Fixed Fixed::operator-(const Fixed &other) const{
    Fixed result;
    result.fixedPointValue = fixedPointValue - other.fixedPointValue;
    return result;
}

Fixed Fixed::operator*(const Fixed &other) const{
    Fixed result;
    result.fixedPointValue = (fixedPointValue * other.fixedPointValue) >> fractionalBits;
    return result;
}

Fixed Fixed::operator/(const Fixed &other) const{
    Fixed result;
    if (other.fixedPointValue != 0){
        result.fixedPointValue = (fixedPointValue << fractionalBits) / other.fixedPointValue;
    } 
    else {
        std::cerr << "Error: Division by zero!" << std::endl;
    }
    return result;
}

Fixed& Fixed::operator++(){
    ++fixedPointValue;
    return *this;
}

Fixed Fixed::operator++(int){
    Fixed temp = *this;
    ++fixedPointValue;
    return temp;
}

Fixed& Fixed::operator--(){
    --fixedPointValue;
    return *this;
}

Fixed Fixed::operator--(int){
    Fixed temp = *this;
    --fixedPointValue;
    return temp;
}

Fixed& Fixed::min(Fixed &a, Fixed &b){
    return (a < b) ? a : b;
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b){
    return (a < b) ? a : b;
}

Fixed& Fixed::max(Fixed &a, Fixed &b){
    return (a > b) ? a : b;
}


const Fixed& Fixed::max(const Fixed &a, const Fixed &b){
    return (a > b) ? a : b;
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed){
    os << static_cast<float>(fixed.getRawBits()) / (1 << Fixed::fractionalBits);
    return os;
}