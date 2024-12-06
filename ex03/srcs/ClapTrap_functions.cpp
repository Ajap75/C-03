/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap_functions.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 17:23:26 by antoinejour       #+#    #+#             */
/*   Updated: 2024/12/05 14:20:40 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ClapTrap.hpp"


// Members Function definiton 

void ClapTrap::attack(const std::string& target)
{
    int Energy_points = getEnergy_points() - 1;
    if (Energy_points < 0)
    {
        std::cout << "ClapTrap " << getName() << " has not enough Energy Points to attack" << std::endl;
        return;
    }
    else
    { 
        setEnergy_points(Energy_points);
        std::cout << "ClapTrap " << getName() << RED << " attacks " << RESET << target.c_str() << " causing " << RED << getAttack_Damage() << " points of damage" << RESET << std::endl;  
    }
}
void ClapTrap::beRepaired(unsigned int amount)
{
    int Energy_points = getEnergy_points() - 1;
    if (Energy_points < 0)
    {
        std::cout << "ClapTrap " << getName() << " has not enough Energy Points to repairs itself" << std::endl;
        return;
    }
    else
    {
        std::cout << "ClapTrap " << getName() << " repairs itself and gain " << GREEN << amount << " point of Hit" << RESET << std::endl;
        setEnergy_points(Energy_points);
        if ((amount + this->_Hit_points) <= INT_MAX)
            setHit_points(amount + this->_Hit_points);
        else
            setHit_points(INT_MAX);
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    
    int Hit_points = getHit_points();
    if (Hit_points == 0)
    {
        std::cout << "ClapTrap has been damaged but " << getName() << RED << " is already dead" << RESET << std::endl;
        return ;
    }    
    Hit_points -= amount;
    if (Hit_points <= 0)
    {
        std::cout << "ClapTrap " << getName() << " died after suffering " << RED << amount << " points of damage" << RESET << std::endl;
        setHit_points(0);
        return ;
    }
    std::cout << "ClapTrap " << getName() << " has suffered " << RED << amount << " points of damage" << RESET << std::endl;
    setHit_points(Hit_points);
}

/* When ClapTrack attacks, it causes its target to lose <attack damage> hit points.
When ClapTrap repairs itself, it gets <amount> hit points back. Attacking and repairing
cost 1 energy point each. Of course, ClapTrap can’t do anything if it has no hit points
or energy points left. */