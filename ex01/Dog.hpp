/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 07:02:00 by ngtina1999        #+#    #+#             */
/*   Updated: 2024/12/02 23:46:05 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog: virtual public Animal {

	public:

		Dog();
		Dog(std::string const &type);
		~Dog();
		Dog( Dog const &src );
		Dog	&operator=( Dog const &rhs );

		virtual void	makeSound() const;

};

#endif