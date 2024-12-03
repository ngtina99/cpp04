/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 19:59:38 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/12/03 18:43:00 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(std::string const &type) : Animal(type) {
	std::cout << "Cat  constructor called with " << this->_type << std::endl;
	this->_brain = new Brain();
}

Cat::Cat() : Animal("basicCat") {
	std::cout << "Cat default constructor called with " << this->_type << std::endl;
	this->_brain = new Brain();
}

Cat::~Cat() {
	std::cout << "Cat destructor called with " << this->_type << std::endl;
	delete (this->_brain);
}

Cat::Cat(Cat const &src) : Animal(src._type) {
	std::cout << "Cat copy constructor called with " << this->_type << std::endl;
	this->_brain = new Brain(*(src._brain));
}

Cat &Cat::operator=(const Cat &rhs) {
	std::cout << "Cat copy assignment operator called with " << this->_type << std::endl;
	if (this != &rhs) {
		this->_type = rhs._type;
		delete (this->_brain);
		this->_brain = new Brain(*(rhs._brain));
	}
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Cat " << this->_type << " made a cat sound!" << std::endl;
}

void	Cat::printBrainAddress() const {
		std::cout << "catBrain address: " << _brain << std::endl;
}

