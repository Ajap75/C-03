/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 10:36:26 by antoinejour       #+#    #+#             */
/*   Updated: 2024/12/05 14:52:20 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ClapTrap.hpp"

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

class ScavTrap : public ClapTrap
{
    private :

    public :

    ScavTrap(); //Default Constructor
    ScavTrap(std::string Name);
    ~ScavTrap(); //Destructor
    ScavTrap (const ScavTrap& other);
    ScavTrap& operator=(const ScavTrap& other);

    // Memeber function usign a memeber function of clapPass but adding its own version
    void attack(const std::string& target);
    // Member function specific to the class ScavTrap
    void guardGate(); 

};


#endif