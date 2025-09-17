/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 02:08:11 by mpapin            #+#    #+#             */
/*   Updated: 2025/09/17 02:23:17 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Default_clap_name"), _Name("Default") {
    _PointHealth = FragTrap::_PointHealth;
    _PointEnergy = ScavTrap::_PointEnergy;
    _AttackDamage = FragTrap::_AttackDamage;
    std::cout << "DiamondTrap default constructor called for: " << _Name << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
    : ClapTrap(name + "_clap_name"), _Name(name) {
    _PointHealth = 100;
    _PointEnergy = 50;
    _AttackDamage = 30;
    std::cout << "DiamondTrap constructor called for: " << _Name << std::endl;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap destructor called for: " << _Name << std::endl;
}

void DiamondTrap::whoAmI() {
    std::cout << "I am " << _Name
              << " and my ClapTrap name is " << ClapTrap::_Name << std::endl;
}
