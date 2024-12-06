/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 15:04:23 by antoinejour       #+#    #+#             */
/*   Updated: 2024/12/06 10:25:46 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ClapTrap.hpp"
#include "../headers/ScavTrap.hpp"
#include "../headers/FragTrap.hpp"

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

class DiamondTrap : public ScavTrap, public FragTrap
{
    private :

    std::string _Name;
    
    public :
    DiamondTrap(); // Default constructor
    DiamondTrap(std::string Diamondname); // Constructor
    ~DiamondTrap(); // destructor
    DiamondTrap(const DiamondTrap& other); // copy constructor
    DiamondTrap& operator= (const DiamondTrap& other); // Assignation operator overloaded

    // member function
    void whoAmI();
    void attack(const std::string& target);

};

#endif

