/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 19:59:38 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/12/02 23:43:36 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(std::string const &type) : _type(type) {
	std::cout << "WrongAnimal  constructor called with " << this->_type << std::endl;
}

WrongAnimal::WrongAnimal() : _type("basicWrongAnimal") {
	std::cout << "WrongAnimal default constructor called with " << this->_type << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor called with " << this->_type << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src) 
	: _type(src._type) {
	std::cout << "WrongAnimal copy constructor called with " << this->_type << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs) {
	std::cout << "WrongAnimal copy assignment operator called with " << this->_type << std::endl;
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal " << this->_type << " made a wronganimal sound!" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (this->_type);
}
