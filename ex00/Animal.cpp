/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 19:59:38 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/12/02 23:43:39 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(std::string const &type) : _type(type) {
	std::cout << "Animal  constructor called with " << this->_type << std::endl;
}

Animal::Animal() : _type("basicAnimal") {
	std::cout << "Animal default constructor called with " << this->_type << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal destructor called with " << this->_type << std::endl;
}

Animal::Animal(Animal const &src) 
	: _type(src._type) {
	std::cout << "Animal copy constructor called with " << this->_type << std::endl;
}

Animal &Animal::operator=(const Animal &rhs) {
	std::cout << "Animal copy assignment operator called with " << this->_type << std::endl;
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << "Animal " << this->_type << " made an animal sound!" << std::endl;
}

std::string	Animal::getType() const
{
	return (this->_type);
}
