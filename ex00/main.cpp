/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */

/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 13:43:11 by laugarci          #+#    #+#             */
//   Updated: 2023/10/17 17:53:21 by laugarci         ###   ########.fr       //
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie* zombieHeap = newZombie("Heap Zombie");
    zombieHeap->announce();
    delete zombieHeap;

    randomChump("Stack Zombie");

    return 0;
}

