/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap_functions.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 12:29:09 by antoinejour       #+#    #+#             */
/*   Updated: 2024/12/06 11:00:30 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ScavTrap.hpp"

void ScavTrap::attack(const std::string& target)
{
    ClapTrap::attack(target);
    std::cout << RED << "SCAVTRAP ATTACK SPECIFIC FUNCTION CALLED" << RESET << std::endl;
}

void  ScavTrap::guardGate()
{
    std::cout << BLUE << _Name << " is now in Gate Keeper mode" << RESET << std::endl;
};