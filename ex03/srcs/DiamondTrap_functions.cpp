/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap_functions.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 10:14:33 by antoinejour       #+#    #+#             */
/*   Updated: 2024/12/06 10:34:58 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../headers/DiamondTrap.hpp"

void DiamondTrap::whoAmI()
{
    std::cout  << "My name is : " << GREEN << this->_Name << RESET<< std::endl;
    std::cout  << "My ClassTrap name is : " << GREEN << ClapTrap::_Name << RESET << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}