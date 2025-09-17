/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 01:39:15 by mpapin            #+#    #+#             */
/*   Updated: 2025/09/17 01:56:20 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Default") {
    _PointHealth = 100;
    _PointEnergy = 100;
    _AttackDamage = 30;
    std::cout << "FragTrap " << _Name << " created" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    _PointHealth = 100;
    _PointEnergy = 100;
    _AttackDamage = 30;
    std::cout << "FragTrap created " << _Name << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "destructer call for FragTrap " << _Name << std::endl;
}

void FragTrap::highFivesGuys() {
    std::cout << "requst of a high five!" << std::endl;
}
