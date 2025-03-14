/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 19:59:38 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/12/03 01:17:35 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(std::string const &type) : Animal(type) {
	std::cout << "Cat  constructor called with " << this->_type << std::endl;
}

Cat::Cat() : Animal("basicCat") {
	std::cout << "Cat default constructor called with " << this->_type << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat destructor called with " << this->_type << std::endl;
}

Cat::Cat(Cat const &src) : Animal(src) {
	std::cout << "Cat copy constructor called with " << this->_type << std::endl;
}

Cat &Cat::operator=(const Cat &rhs) {
	std::cout << "Cat copy assignment operator called with " << this->_type << std::endl;
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Cat " << this->_type << " made a cat sound!" << std::endl;
}
