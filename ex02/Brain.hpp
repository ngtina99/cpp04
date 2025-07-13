/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 07:05:00 by ngtina1999        #+#    #+#             */
/*   Updated: 2024/12/03 18:27:30 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {

	public:
	
		Brain();
		~Brain();
		Brain( Brain const &src );
		Brain	&operator=( Brain const &rhs );
	
	private:

		std::string _ideas[100];

};

#endif
