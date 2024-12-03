/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 19:59:38 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/12/03 19:17:56 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	std::cout << "\n--------------------------------------------------" << std::endl;
	std::cout << "\nCheck constructors" << std::endl;
	std::cout << "\n--------------------------------------------------" << std::endl;
	const Animal	*meta[10];
	int				size = 5;

	for (int i = 0; i < size; i++)
	{
		meta[i] = new Dog();
		meta[size + i] = new Cat();
	}
	for (int i = 0; i < 10; i++)
 			delete meta[i];

	std::cout << "\n--------------------------------------------------" << std::endl;
	std::cout << "\nCheck deep copy of Dog and its copy constructor" << std::endl;
	std::cout << "\n--------------------------------------------------" << std::endl;
	Dog basicDog;

	basicDog.printBrainAddress(); 
	{
		Dog tmp(basicDog);
		tmp.printBrainAddress();
	}
	basicDog.printBrainAddress(); 

	std::cout << "\n--------------------------------------------------" << std::endl;
	std::cout << "\nCheck deep copy of Cat and its copy constructor" << std::endl;
	std::cout << "\n--------------------------------------------------" << std::endl;
	Cat basicCat;

	basicCat.printBrainAddress(); 
	{
		Cat tmp(basicCat);
		tmp.printBrainAddress();
	}
	basicCat.printBrainAddress();
	
}
