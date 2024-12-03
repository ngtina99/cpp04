/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 19:59:38 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/12/03 16:55:18 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(std::string const &type) : Animal(type) {
	std::cout << "Dog  constructor called with " << this->_type << std::endl;
	this->_brain = new Brain();
}

Dog::Dog() : Animal("basicDog") {
	std::cout << "Dog default constructor called with " << this->_type << std::endl;
	this->_brain = new Brain();
}

Dog::~Dog() {
	std::cout << "Dog destructor called with " << this->_type << std::endl;
	delete (this->_brain);
}

Dog::Dog(Dog const &src) : Animal(src) {
	std::cout << "Dog copy constructor called with " << this->_type << std::endl;
	delete (this->_brain);
	this->_brain = new Brain(*(src._brain));
}

Dog &Dog::operator=(const Dog &rhs) {
	std::cout << "Dog copy assignment operator called with " << this->_type << std::endl;
	if (this != &rhs) {
		this->_type = rhs._type;
		delete (this->_brain);
		this->_brain = new Brain(*(rhs._brain));
	}
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Dog " << this->_type << " made a dog sound!" << std::endl;
}
