/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap_functions.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 12:29:09 by antoinejour       #+#    #+#             */
/*   Updated: 2024/12/05 12:34:04 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ScavTrap.hpp"

void ScavTrap::attack(const std::string& target)
{
    ClapTrap::attack(target);
    std::cout << "SCAVTRAP ATTACK SPECIFIC FUNCTION CALLED"<< std::endl;
}