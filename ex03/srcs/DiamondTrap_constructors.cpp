/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap_constructors.cpp                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 15:22:49 by antoinejour       #+#    #+#             */
/*   Updated: 2024/12/06 10:59:35 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/DiamondTrap.hpp"

DiamondTrap::DiamondTrap()  // Default constructor;
{
    std::cout << "DiamondTrap default constructor called" << std::endl;
    _Hit_points = 100;
    _Energy_points = 50;
    _Attack_damage = 30;
};


/* Its attributes and member functions will be picked from either one of its parent classes: 
• Name, which is passed as parameter to a constructor
• ClapTrap::name (parameter of the constructor + "_clap_name" suffix)
• Hit points (FragTrap)
• Energy points (ScavTrap)
• Attack damage (FragTrap)
• attack() (Scavtrap)
*/


DiamondTrap::DiamondTrap(std::string Diamondname) // constructor;
     : ClapTrap(Diamondname + "_clap_name"), _Name(Diamondname) 
{
    std::cout << "DiamondTrap default constructor called" << std::endl;
    _Hit_points = 100;
    _Energy_points = 50;
    _Attack_damage = 30;
};


DiamondTrap::DiamondTrap(const DiamondTrap& other)  // COPY constructor
    : ClapTrap(other), _Name(other._Name) 
/*Copy constructor of a child class need to explicitly call the copyconstructor of the parent class first 
Ensures that the base class (ClapTrap) part of the object is properly initialized using the other instance.
The name attribute belongs to DiamondTrap and must be explicitly copied.*/
{
    std::cout << "DiamondTrap copy constructor called" << std::endl;
    _Hit_points = other._Hit_points;
    _Energy_points = other._Energy_points;
    _Attack_damage = other._Attack_damage;
/*These are inherited from ClapTrap and can be directly assigned since they are accessible in the derived class.*/
}

DiamondTrap::~DiamondTrap() {} // Destructor;

DiamondTrap& DiamondTrap::operator =(const DiamondTrap& other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other);
        _Name = other._Name;
    }
    return (*this);
}
