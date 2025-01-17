/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap_constructors.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 15:59:17 by antoinejour       #+#    #+#             */
/*   Updated: 2025/01/17 13:34:22 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ClapTrap.hpp"


ClapTrap::ClapTrap() : _Name("Unnamed"), _Hit_points(100), _Energy_points(30), _Attack_damage(30) // Default Constructor
{
    std::cout << "ClapTrap Default Constructor has been called" << std::endl;
}

ClapTrap::ClapTrap(std::string Name)
     :  _Name(Name), _Hit_points(100), _Energy_points(100), _Attack_damage(30) // Constructor with param
{
    std::cout << "ClapTrap Constructor with param has been called" << std::endl;
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
        this->_Name = other._Name;
        this->_Attack_damage = other._Attack_damage;
        this->_Hit_points = other._Hit_points;
        this->_Energy_points = other._Energy_points;
        
    }
    return *this;
}

