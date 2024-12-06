/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 18:07:48 by antoinejour       #+#    #+#             */
/*   Updated: 2024/12/06 10:45:02 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/DiamondTrap.hpp"


void DiamondTrapTest()
{
    int i;
    i = 0;
    DiamondTrap BigGirl("BigGirl");
    

    std::cout <<   "Big Girl has " << BLUE << BigGirl.getEnergy_points() << " point of Energy" <<  RESET
     << " and " << GREEN << BigGirl.getHit_points() << " points of Hit" << RESET
    << " and " << RED << BigGirl.getAttack_Damage() << " attack damage" << RESET <<  std::endl;
    
    BigGirl.guardGate();
    BigGirl.highFivesGuys();
    BigGirl.takeDamage(9);
    BigGirl.whoAmI();
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
    DiamondTrapTest();
    return (0);
}