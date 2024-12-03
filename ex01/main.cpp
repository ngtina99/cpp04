/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 19:59:38 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/12/03 18:52:05 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	const Animal	*meta[10];
	int				size = 5;

	for (int i = 0; i < size; i++)
	{
		meta[i] = new Dog();
		meta[size + i] = new Cat();
	}
	for (int i = 0; i < 10; i++)
 			delete meta[i];

	Dog basicDog;

	basicDog.printBrainAddress(); 
	{
		Dog tmp = basicDog;  // Deep copy constructor should be called here
		tmp.printBrainAddress();
        // At the end of this block, tmp goes out of scope and is destroyed
	}
	basicDog.printBrainAddress(); 

	Cat basicCat;

	basicCat.printBrainAddress(); 
	{
		Cat tmp = basicCat;
		tmp.printBrainAddress();
	}
	basicCat.printBrainAddress();

    std::cout << "-------------------------------------\n";
    {
        std::cout << "Check deep copy of Dog class using copy constructor:\n" << std::endl;
        Dog* dogA = new Dog;
        Dog* dogB = new Dog(*dogA);  // Use the copy constructor

        dogA->printBrainAddress();
        dogB->printBrainAddress();

        delete dogA;
        delete dogB;
    }

    std::cout << "-------------------------------------\n";
    {
        std::cout << "Check deep copy of Dog class using assignment operator overload:\n" << std::endl;
        Dog* dogA = new Dog;
        Dog* dogB = new Dog;

        *dogA = *dogB;  // Use the assignment operator overload

        dogA->printBrainAddress();
        dogB->printBrainAddress();

        delete dogA;
        delete dogB;
    }
}
