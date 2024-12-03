/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 19:59:38 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/12/02 23:43:39 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(std::string const &type) : _type(type) {
	std::cout << "AAnimal  constructor called with " << this->_type << std::endl;
}

AAnimal::AAnimal() : _type("basicAnimal") {
	std::cout << "AAnimal default constructor called with " << this->_type << std::endl;
}

AAnimal::~AAnimal() {
	std::cout << "AAnimal destructor called with " << this->_type << std::endl;
}

AAnimal::AAnimal(AAnimal const &src) 
	: _type(src._type) {
	std::cout << "AAnimal copy constructor called with " << this->_type << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &rhs) {
	std::cout << "AAnimal copy assignment operator called with " << this->_type << std::endl;
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

void	AAnimal::makeSound() const
{
	std::cout << "AAnimal " << this->_type << " made an animal sound!" << std::endl;
}

std::string	AAnimal::getType() const
{
	return (this->_type);
}
