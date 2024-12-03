/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 19:59:38 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/12/02 23:45:09 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {

	public:

		Animal();
		Animal(std::string const &type);
		virtual ~Animal();
		Animal( Animal const &src );
		Animal	&operator=( Animal const &rhs );

		virtual void	makeSound() const;
		std::string		getType() const;

	protected:

		std::string	_type;

};

#endif
