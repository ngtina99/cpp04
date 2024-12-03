/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 07:02:01 by ngtina1999        #+#    #+#             */
/*   Updated: 2024/12/03 16:45:29 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : virtual public Animal {

	public:

		Cat();
		Cat(std::string const &type);
		~Cat();
		Cat( Cat const &src );
		Cat	&operator=( Cat const &rhs );

		virtual void	makeSound() const;

	private:

		Brain	*_brain;

};

#endif