/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 18:07:48 by antoinejour       #+#    #+#             */
/*   Updated: 2025/01/17 11:19:09 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ScavTrap.hpp"


void ClapTrapTest()
{
    int i;
    i = 0;
    ScavTrap BigGirl("BigGirl");
    BigGirl.guardGate();
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
    BigGirl.takeDamage(100);
    BigGirl.takeDamage(10);

}


int main (void)
{
    ClapTrapTest();
    return (0);
}