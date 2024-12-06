/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 10:36:26 by antoinejour       #+#    #+#             */
/*   Updated: 2024/12/05 14:03:49 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ClapTrap.hpp"

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

class FragTrap : public ClapTrap
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