/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngtina1999 <ngtina1999@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 07:03:48 by ngtina1999        #+#    #+#             */
/*   Updated: 2024/12/02 07:03:56 by ngtina1999       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

CHECK MEMORY LEAKS

{
const Animal* j = new Dog();
const Animal* i = new Cat();
delete j;//should not create a leak
delete i;
...
return 0;
}