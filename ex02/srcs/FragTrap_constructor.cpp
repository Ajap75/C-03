/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap_constructor.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 10:36:11 by antoinejour       #+#    #+#             */
/*   Updated: 2025/01/17 15:28:32 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() // Default Constructor
{
    this->_Hit_points = 100; // Overwrite the inherited attribute's value. Attributes inisialized by the ClapTrap Default constructor
    this->_Energy_points = 100; // same
    this->_Attack_damage = 30; // same 
    std::cout << "FragTrap Default Constructor has been called" << std::endl;
    
}; 

FragTrap::FragTrap(std::string Name)
        : ClapTrap(Name)  // Constructor with param
{
    this->_Hit_points = 100; // Overwrite the inherited attribute's value. Attributes inisialized by the ClapTrap Default constructor
    this->_Energy_points = 100; // same
    this->_Attack_damage = 30; // same
    std::cout << "FragTrap Constructor with param has been called" << std::endl;
};

FragTrap::~FragTrap() //Default Destructor
{
    std::cout << "FragTrap Destructor has been called" << std::endl;

}; 

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) // copy constructor : Explicitly call ClapTrap copy constructor
{
    std::cout << "FragTrap Copy Constructor has been called" << std::endl;
}; 

FragTrap& FragTrap::operator =(const FragTrap& other) // Assignation operator overloaded
{
    if (this != &other)
    {
        ClapTrap:: operator =(other);
        // `Name` is not assigned because it is already initialized in the constructor
    }
    return (*this);
};
