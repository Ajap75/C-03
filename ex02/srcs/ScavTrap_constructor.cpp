/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap_constructor.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 10:36:11 by antoinejour       #+#    #+#             */
/*   Updated: 2024/12/05 12:54:23 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ScavTrap.hpp"

ScavTrap::ScavTrap() // Default Constructor
{
    std::cout << "ScavTrap Dafault Constructor has been called" << std::endl;
    
}; 

ScavTrap::ScavTrap(std::string Name)
        : ClapTrap(Name)  // Constructor with param
{
    std::cout << "ScavTrap Constructor has been called" << std::endl;
};

ScavTrap::~ScavTrap() //Default Destructor
{
    std::cout << "ScavTrap Constructor has been called" << std::endl;

}; 

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) // copy constructor : Explicitly call ClapTrap copy constructor
{
    std::cout << "ScavTrap Copy Constructor has been called" << std::endl;
}; 

ScavTrap& ScavTrap::operator =(const ScavTrap& other) // Assignation operator overloaded
{
    if (this != &other)
    {
        this->_Attack_damage = other._Attack_damage;
        this->_Energy_points = other._Energy_points;
        this->_Hit_points = other._Energy_points;
        // `Name` is not assigned because it is already initialized in the constructor
    }
    return (*this);
};

void  ScavTrap::guardGate()
{
    std::cout << _Name << " is now in Gate Keeper mode" << std::endl;
};