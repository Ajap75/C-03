/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap_constructors.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 15:59:17 by antoinejour       #+#    #+#             */
/*   Updated: 2025/01/17 09:42:18 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ClapTrap.hpp"


ClapTrap::ClapTrap() 
    : Name("Unamed"), Hit_points(10), Energy_points(10), Attack_damage(0) // Default Constructor
{
    std::cout << "Default Constructor has been called" << std::endl;
}



ClapTrap::ClapTrap(std::string Name_param)
     :  Name(Name_param), Hit_points(10), Energy_points(10), Attack_damage(0) // Constructor
{
    std::cout << "Constructor with params has been called" << std::endl;
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
        this->Name = other.Name;
        this->Attack_damage = other.Attack_damage;
        this->Hit_points = other.Hit_points;
        this->Energy_points = other.Energy_points;
    }
    return *this;
}

