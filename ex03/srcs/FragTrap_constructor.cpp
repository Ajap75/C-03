/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap_constructor.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 10:36:11 by antoinejour       #+#    #+#             */
/*   Updated: 2024/12/06 10:56:47 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() // Default Constructor
{
    this->_Hit_points = 100; // Overwrite the inherited attribute's value. Attributes inisialized by the ClapTrap Default constructor
    this->_Energy_points = 100; // same
    this->_Attack_damage = 30; // same
    std::cout << "FragTrap Dafault Constructor has been called" << std::endl;
}; 

FragTrap::FragTrap(std::string Name)
        : ClapTrap(Name) // Constructor with param
{
    _Hit_points = 100;     // Overwrite the inherited attribute's value. Attributes inisialized by the ClapTrap constructor
    _Energy_points = 100; // same 
    _Attack_damage = 30; // same 
    std::cout << "FragTrap Constructor has been called" << std::endl;
};

FragTrap::~FragTrap() // Default Destructor
{
    std::cout << "FragTrap Destructor has been called" << std::endl;
}; 

FragTrap::FragTrap(const FragTrap &other)
         : ClapTrap(other) // copy constructor : Explicitly call ClapTrap copy constructor
{
    std::cout << "FragTrap Copy Constructor has been called" << std::endl;
}; 

FragTrap& FragTrap::operator =(const FragTrap& other) // Assignation operator overloaded
{
    if (this != &other)
    {
        ClapTrap::operator=(other);
    }
    return (*this);
};
