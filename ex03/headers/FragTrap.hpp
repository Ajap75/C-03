/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 10:36:26 by antoinejour       #+#    #+#             */
/*   Updated: 2024/12/05 18:14:33 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ClapTrap.hpp"

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

class FragTrap : virtual public ClapTrap // virtual is used to avoid the Diamond situation, with the DiamondTrapClass will inherit of the FragTrapClass and ScavTrapClass. In this situation only one instance of ClapTrap will be inherited by Diamond Class
{
    private :

    public :

    FragTrap(); //Default Constructor
    FragTrap(std::string Name);
    ~FragTrap(); //Destructor
    FragTrap (const FragTrap& other);
    FragTrap& operator=(const FragTrap& other);


    // Member function specific to the class ScavTrap
   void highFivesGuys(void);

};


#endif