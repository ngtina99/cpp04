/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 19:59:38 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/12/02 23:31:56 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal {

	public:

		WrongAnimal();
		WrongAnimal(std::string const &type);
		~WrongAnimal(); //try virtual
		WrongAnimal( WrongAnimal const &src );
		WrongAnimal	&operator=( WrongAnimal const &rhs );

		void	makeSound() const;

	protected:

		std::string	_type;

};

#endif