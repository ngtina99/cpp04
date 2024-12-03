/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 19:59:38 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/12/03 20:22:42 by thuy-ngu         ###   ########.fr       */
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

	for (int i = 0; i <= 10; i++)
	{
		std::cout << i << " ";
		if (i % 2 == 0)
			meta[i] = new Dog();
		else
			meta[i] = new Cat();
		std::cout << std::endl;
	}
	for (int i = 0; i <= 10; i++) {
		std::cout << i << " ";
		//meta[i]->makeSound();
		delete meta[i];
		std::cout << std::endl;
	}

	std::cout << "\n--------------------------------------------------" << std::endl;
	std::cout << "\nCheck deep copy of Dog and its copy constructor" << std::endl;
	std::cout << "\n--------------------------------------------------" << std::endl;
	Dog basicDog;
	
	std::cout << std::endl;
	basicDog.printBrainAddress(); 
	std::cout << std::endl;
	{
		Dog tmp(basicDog);
		std::cout << std::endl;
	 	std::cout << "tmp ";
		tmp.printBrainAddress();
		std::cout << std::endl;
	}
	std::cout << std::endl;
	basicDog.printBrainAddress(); 

	std::cout << "\n--------------------------------------------------" << std::endl;
	std::cout << "\nCheck deep copy of Cat and its copy constructor" << std::endl;
	std::cout << "\n--------------------------------------------------" << std::endl;
	Cat basicCat;

	std::cout << std::endl;
	basicCat.printBrainAddress();
	std::cout << std::endl;
	{
		Cat tmp(basicCat);
		std::cout << std::endl;
		std::cout << "tmp ";
		tmp.printBrainAddress();
		std::cout << std::endl;
	}
	std::cout << std::endl;
	basicCat.printBrainAddress();
	std::cout << std::endl;
	
}
