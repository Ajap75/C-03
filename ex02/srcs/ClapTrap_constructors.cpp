/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap_constructors.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 15:59:17 by antoinejour       #+#    #+#             */
/*   Updated: 2024/12/05 14:56:48 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ClapTrap.hpp"


ClapTrap::ClapTrap(){}// Default Constructor

ClapTrap::ClapTrap(std::string Name)
     :  _Name(Name), _Hit_points(10), _Energy_points(10), _Attack_damage(0) // Constructor with param
{
    std::cout << "ClapTrap Constructor has been called" << std::endl;
} 

ClapTrap::~ClapTrap() // Destructor
{
    std::cout << "ClapTrap Destructor has been called" << std::endl;
} 

ClapTrap::ClapTrap(const ClapTrap& other)
     : _Name(other._Name), _Hit_points(other._Hit_points), _Energy_points(other._Energy_points), _Attack_damage(other._Attack_damage) // Copy Constructor
{
    std::cout << "ClapTrap Copy Constructor has been called" << std::endl;
} 

ClapTrap& ClapTrap::operator=(const ClapTrap& other) // Assignation operator overloaded
{
    std::cout << "ClapTrap Assignation operator overloaded has been called" << std::endl;
    if (this != &other) // self ssignement check
    {
        this->_Attack_damage = other._Attack_damage;
        this->_Hit_points = other._Hit_points;
        this->_Energy_points = other._Energy_points;
        // `Name` is not assigned because it is already initialized in the constructor
    }
    return *this;
}

