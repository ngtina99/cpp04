/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngtina1999 <ngtina1999@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 19:59:38 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/12/02 07:00:12 by ngtina1999       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{

	public:

		ClapTrap();
		ClapTrap(std::string const &name);
		~ClapTrap();
		ClapTrap( ClapTrap const &src );
		ClapTrap	&operator=( ClapTrap const &rhs );

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void checkStatus();

	protected:

		std::string	_name;
		int	_hitPoints;
		int	_energyPoints;
		int	_attackDamage;

};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClaptTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 19:59:38 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/10/16 19:59:38 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>

class ClapTrap
{

	public:

		ClapTrap();
		ClapTrap(std::string const &name);
		~ClapTrap();
		ClapTrap( ClapTrap const &src );
		ClapTrap	&operator=( ClapTrap const &rhs );

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void checkStatus();

	protected:

		std::string	_name;
		int	_hitPoints;
		int	_energyPoints;
		int	_attackDamage;

};

#endif
