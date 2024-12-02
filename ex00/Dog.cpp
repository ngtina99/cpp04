/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 19:59:38 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/12/02 23:26:47 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog(std::string const &type) : _type(type) {
	std::cout << "Dog  constructor called with " << this->_type << std::endl;
}

Dog::Dog() : _type("basicDog") {
	std::cout << "Dog default constructor called with " << this->_type << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog destructor called with " << this->_type << std::endl;
}

Dog::Dog(Dog const &src) 
	: _type(src._type) {
	std::cout << "Dog copy constructor called with " << this->_type << std::endl;
}

Dog &Dog::operator=(const Dog &rhs) {
	std::cout << "Dog copy assignment operator called with " << this->_type << std::endl;
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Dog " << this->_type << " made a dog sound!" << std::endl;
}
