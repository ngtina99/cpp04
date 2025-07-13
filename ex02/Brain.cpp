/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 07:03:18 by ngtina1999        #+#    #+#             */
/*   Updated: 2024/12/03 18:37:37 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain default constructor called "<< std::endl;
	for (int i = 0; i < 100; i++) {
		_ideas[i] = "Idea";
	}
}

Brain::~Brain() {
	std::cout << "Brain destructor called " << std::endl;
}

Brain::Brain(Brain const &src) {
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		(this->_ideas)[i] = (src._ideas)[i];
	return ;
}

Brain &Brain::operator=(const Brain &rhs) {
	std::cout << "Brain copy assignment operator called" << std::endl;
	for (int i = 0; i < 100; i++)
		(this->_ideas)[i] = (rhs._ideas)[i];
	return (*this);
}
