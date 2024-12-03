/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 07:03:18 by ngtina1999        #+#    #+#             */
/*   Updated: 2024/12/03 01:32:05 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain default constructor called with " << this->_type << std::endl;
}

Brain::~Brain() {
	std::cout << "Brain destructor called with " << this->_type << std::endl;
}

Brain::Brain(Brain const &src) {
	std::cout << "Brain copy constructor called with " << this->_type << std::endl;
}

Brain &Brain::operator=(const Brain &rhs) {
	std::cout << "Brain copy assignment operator called with " << this->_type << std::endl;
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}