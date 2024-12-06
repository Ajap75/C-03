/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap_getter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 17:23:46 by antoinejour       #+#    #+#             */
/*   Updated: 2024/12/04 18:08:08 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ClapTrap.hpp"


std::string ClapTrap::getName() const
{
    return (this->Name);
}

int ClapTrap::getHit_points() const
{
    return (this->Hit_points);
}

int ClapTrap::getEnergy_points() const
{
    return(this->Energy_points);
}

int ClapTrap::getAttack_Damage() const
{
    return (this->Attack_damage);
}

void ClapTrap::setHit_points(unsigned int new_value)
{
    this->Hit_points = new_value;
}

void ClapTrap::setEnergy_points(unsigned int new_value)
{
    this->Energy_points = new_value;
}
