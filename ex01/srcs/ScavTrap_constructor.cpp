/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap_constructor.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 10:36:11 by antoinejour       #+#    #+#             */
/*   Updated: 2024/12/06 11:13:31 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ScavTrap.hpp"

ScavTrap::ScavTrap() // Default Constructor
{
    this->_Hit_points = 100; // Overwrite the inherited attribute's value. Attributes inisialized by the ClapTrap Default constructor
    this->_Energy_points = 50; // same
    this->_Attack_damage = 20; // same 
    std::cout << "ScavTrap Dafault Constructor has been called" << std::endl;
}; 

ScavTrap::ScavTrap(std::string Name)
        : ClapTrap(Name)  // Constructor with param
{
    this->_Hit_points = 100; // Overwrite the inherited attribute's value. Attributes inisialized by the ClapTrap Default constructor
    this->_Energy_points = 50; // same
    this->_Attack_damage = 20; // same
    std::cout << "ScavTrap Constructor has been called" << std::endl;
};

ScavTrap::~ScavTrap() //Default Destructor
{
    std::cout << "ScavTrap Constructor has been called" << std::endl;
}; 

ScavTrap::ScavTrap(const ScavTrap &other)
     : ClapTrap(other) // copy constructor : Explicitly call ClapTrap copy constructor
{
    // If ScavTrap has any specific attributes, you must initialize them here.
    // this->_specific_attribute = other._specific_attribute;
    
    std::cout << "ScavTrap Copy Constructor has been called" << std::endl;
}; 

ScavTrap& ScavTrap::operator =(const ScavTrap& other) // Assignation operator overloaded
{
    if (this != &other)
    {
        ClapTrap::operator=(other);
        // If ScavTrap has any specific attributes, you must assign them here.
        // this->_specific_attribute = other._specific_attribute;
    }
    return (*this);
};

