/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 07:02:01 by ngtina1999        #+#    #+#             */
/*   Updated: 2024/12/03 21:15:56 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : virtual public Animal {

	public:

		Cat();
		Cat(std::string const &type);
		~Cat();
		Cat( Cat const &src );
		Cat	&operator=( Cat const &rhs );

		virtual void	makeSound() const;
		void printBrainAddress() const;

	private:

		Brain	*_brain;

};

#endif