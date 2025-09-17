/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 16:01:27 by mpapin            #+#    #+#             */
/*   Updated: 2025/09/17 02:00:29 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _Name("Default"), _PointHealth(10), _AttackDamage(0), _PointEnergy(10) {
    std::cout << "ClapTrap " << _Name <<  " created" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _Name(name), _PointHealth(10), _AttackDamage(0), _PointEnergy(8) {
    std::cout << "ClapTrap " << _Name << " created" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap destructor called for: " << _Name << std::endl;
}

void ClapTrap::attack(const std::string& target) {
    if (_PointHealth <= 0 || _PointEnergy <= 0) {
        std::cout << "ClapTrap " << _Name << " can t attack" << std::endl;
        return;
    }
    _PointEnergy--;
    std::cout << "ClapTrap " << _Name << " attacks " << target
              << ", causing " << _AttackDamage << " attack damage"  << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    _PointHealth -= static_cast<int>(amount);
    if (_PointHealth < 0) _PointHealth = 0;
    std::cout << "ClapTrap " << _Name << " take(s) " << amount << " damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (_PointHealth <= 0 || _PointEnergy <= 0) {
        std::cout << "ClapTrap " << _Name << " can t repair!" << std::endl;
        return;
    }
    _PointEnergy--;
    _PointHealth += amount;
    std::cout << "ClapTrap " << _Name << " repairs itself " << amount << " points!" << std::endl;
}
