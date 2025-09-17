/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 17:56:02 by mpapin            #+#    #+#             */
/*   Updated: 2025/09/17 02:23:08 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Default") {
    _PointHealth = 100;
    _PointEnergy = 50;
    _AttackDamage = 20; 
    std::cout << "ScavTrap " << _Name << " created" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    _PointHealth = 100;
    _PointEnergy = 50;
    _AttackDamage = 20;
    std::cout << "ScavTrap " << name << " created" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor called for: " << _Name << std::endl;
}

void ScavTrap::attack(const std::string& target) {
    if (_PointEnergy > 0 && _PointHealth > 0) {
        std::cout << "ScavTrap " << _Name << " attacks " << target
            << ", causing " << _AttackDamage << " points of damage!" << std::endl;
        _PointEnergy--;
    } else {
        std::cout << "ScavTrap " << _Name << " can t attack. Not enough energy or health." << std::endl;
    }
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << _Name << " is now in Gate keeper mode." << std::endl;
}

