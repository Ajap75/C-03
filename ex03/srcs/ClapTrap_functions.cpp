/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap_functions.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 17:23:26 by antoinejour       #+#    #+#             */
/*   Updated: 2025/01/17 14:47:30 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ClapTrap.hpp"
#include <limits.h>
#include "../headers/ClapTrap.hpp"


// Members Function definiton 

void ClapTrap::attack(const std::string& target)
{
    if (getEnergy_points() <= 0)
    {
        std::cout <<  getName() << " has not enough Energy Points to attack" << std::endl;
        return;
    }
    setEnergy_points(getEnergy_points() - 1);
    std::cout <<  getName() << RED << " attacks " << RESET << target.c_str() << " causing " << RED << getAttack_Damage() << " points of damage" << RESET << std::endl; 
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if (getEnergy_points() <= 0)
    {
        std::cout << "ClapTrap " << getName() << " has not enough Energy Points to repairs itself" << std::endl;
        return;
    }
 
    setEnergy_points(getEnergy_points() - 1);
    std::cout <<  getName() << " repairs itself and gain " << GREEN << amount << " point of Hit" << RESET << std::endl;
    if ((amount + getHit_points()) <= INT_MAX)
        setHit_points(amount + getHit_points());
    else
        setHit_points(INT_MAX);
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (getHit_points() <= 0)
    {
        std::cout << getName() << " has been damaged but " << getName() << RED << " is already dead" << RESET << std::endl;
        return ;
    }    
    else if ((getHit_points() - static_cast<int>(amount)) <= 0)
    {
        std::cout  << getName() << " died after suffering " << RED << amount << " points of damage" << RESET << std::endl;
        setHit_points(0);
        return ;
    }
    std::cout << getName() << " has suffered " << RED << amount << " points of damage" << RESET << std::endl;
    setHit_points(getHit_points() - static_cast<int>(amount));
}

/* When ClapTrack attacks, it causes its target to lose <attack damage> hit points.
When ClapTrap repairs itself, it gets <amount> hit points back. Attacking and repairing
cost 1 energy point each. Of course, ClapTrap can’t do anything if it has no hit points
or energy points left. */