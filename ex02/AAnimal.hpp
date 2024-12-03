/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
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

class AAnimal {

	public:

		AAnimal();
		AAnimal(std::string const &type);
		virtual ~AAnimal();
		AAnimal( AAnimal const &src );
		AAnimal	&operator=( AAnimal const &rhs );

		virtual void	makeSound() const = 0;
		std::string		getType() const;

	protected:

		std::string	_type;

};

#endif
