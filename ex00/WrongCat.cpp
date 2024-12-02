/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 19:59:38 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/12/02 23:28:00 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(std::string const &type) : _type(type) {
	std::cout << "WrongCat  constructor called with " << this->_type << std::endl;
}

WrongCat::WrongCat() : _type("basicWrongCat") {
	std::cout << "WrongCat default constructor called with " << this->_type << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called with " << this->_type << std::endl;
}

WrongCat::WrongCat(WrongCat const &src) 
	: _type(src._type) {
	std::cout << "WrongCat copy constructor called with " << this->_type << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &rhs) {
	std::cout << "WrongCat copy assignment operator called with " << this->_type << std::endl;
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "WrongCat " << this->_type << " made a wrongcat sound!" << std::endl;
}