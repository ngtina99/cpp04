/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 07:03:48 by ngtina1999        #+#    #+#             */
/*   Updated: 2024/12/03 17:04:23 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
const Animal* j = new Dog();
const Animal* i = new Cat();
delete j;
delete i;

return 0;
}

// #include "Dog.hpp"
// #include "Cat.hpp"
// #include "WrongCat.hpp"

// int	main()
// {
// const Animal* j = new Dog();
// const Animal* i = new Cat();

// const Animal *jok = j;//new class delete the reference, if the copy

// jok->makeSound();
// delete j;
// jok->makeSound();//this is going to give a segfault if the thing is not good

// delete i;
// return 0;
// }