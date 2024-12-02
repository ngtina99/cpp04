/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 07:02:01 by ngtina1999        #+#    #+#             */
/*   Updated: 2024/12/02 23:31:41 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat: virtual public Animal {

	public:

		Cat();
		Cat(std::string const &type);
		~Cat(); //try virtual
		Cat( Cat const &src );
		Cat	&operator=( Cat const &rhs );

		virtual void	makeSound() const;

};

#endif