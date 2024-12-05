/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap_constructors.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 15:59:17 by antoinejour       #+#    #+#             */
/*   Updated: 2024/12/05 10:56:46 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ClapTrap.hpp"


ClapTrap::ClapTrap() {} // Default Constructor

ClapTrap::ClapTrap(std::string Name_param)
     :  Name(Name_param), Hit_points(10), Energy_points(10), Attack_damage(0) // Constructor
{
    std::cout << "Constructor has been called" << std::endl;
} 
ClapTrap::~ClapTrap() // Destructor
{
    std::cout << "Destructor has been called" << std::endl;
} 

ClapTrap::ClapTrap(const ClapTrap& other)
     : Name(other.Name), Hit_points(other.Hit_points), Energy_points(other.Energy_points), Attack_damage(other.Attack_damage) // Copy Constructor
{
    std::cout << "Copy Constructor has been called" << std::endl;
} 

ClapTrap& ClapTrap::operator=(const ClapTrap& other) // Assignation operator overloaded
{
    std::cout << "Assignation operator overloaded has been called" << std::endl;
    if (this != &other) // self ssignement check
    {
        this->Attack_damage = other.Attack_damage;
        this->Hit_points = other.Hit_points;
        this->Energy_points = other.Energy_points;
        // `Name` is not assigned because it is already initialized in the constructor
    }
    return *this;
}

