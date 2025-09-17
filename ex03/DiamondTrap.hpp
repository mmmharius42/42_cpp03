/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 02:09:13 by mpapin            #+#    #+#             */
/*   Updated: 2025/09/17 02:23:16 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
    private :
        std::string _Name;
    public:
        DiamondTrap();
        DiamondTrap(std::string name);
        ~DiamondTrap();

        using ScavTrap::attack;

        void whoAmI();
};

#endif