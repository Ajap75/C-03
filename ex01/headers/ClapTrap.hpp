/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 15:38:29 by antoinejour       #+#    #+#             */
/*   Updated: 2025/01/17 10:48:16 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string"
#include "iostream"
#include <limits.h>


#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#define GREEN "\033[32m"
#define BLUE "\033[34m"
#define RED "\033[31m"
#define RESET "\033[0m"

class ClapTrap
{
    protected : // modified from prviate to protected to allow the child class to have acces to those attributes 
    
    std::string _Name;
    int _Hit_points;
    int _Energy_points;
    int _Attack_damage;


    public :

    ClapTrap(); // Default Constructor
    ClapTrap(std::string Name); // constructor 
    ~ClapTrap(); // Destructor
    ClapTrap(const ClapTrap& other); // copy Constructor
    ClapTrap& operator=(const ClapTrap& other); // Assignation operator overloaded 

    // Public Memebers functions // 

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    std::string getName() const;
    int getHit_points() const;
    int getEnergy_points() const;
    int getAttack_Damage() const;    

    void setHit_points (unsigned int new_value);
    void setEnergy_points(unsigned int new_value);

};

#endif