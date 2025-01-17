/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 18:07:48 by antoinejour       #+#    #+#             */
/*   Updated: 2025/01/17 10:42:29 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ClapTrap.hpp"


void ClapTrapTest()
{
    int i;
    i = 0;
    ClapTrap BigGirl("BigGirl"); // constructor with params call
    ClapTrap Tony("Tony"); // constructor with params call
    ClapTrap Lulu(BigGirl); // copy constructor called
    std::cout << "Adress of the ClapTrap object BigGirl = " << &BigGirl << std::endl;
    std::cout << "Adress of the reference/alias Lulu to the object BigGirl = " << &Lulu << std::endl; 
    Tony = BigGirl; // Assignatioon operator called 
    Lulu.takeDamage(1); // Lulu is a reference to the ClapTrap object BigGirl
    Tony.takeDamage(1);
    
    BigGirl.takeDamage(9);
    while (i <= 7)
    {
        BigGirl.beRepaired(1);
        i++;
        std::cout << "Big Girl has " << BLUE << BigGirl.getEnergy_points() << " point of Energy" <<  RESET << " and " << GREEN << BigGirl.getHit_points() << " points of Hit" << RESET << std::endl;
    }
    BigGirl.attack("SmallBoy");
    BigGirl.attack("SmallBoy");
    BigGirl.takeDamage(8);
    BigGirl.takeDamage(1);
    BigGirl.takeDamage(1);
}


int main (void)
{
    ClapTrapTest();
    return (0);
}