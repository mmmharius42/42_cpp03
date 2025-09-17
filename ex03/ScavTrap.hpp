/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 17:52:13 by mpapin            #+#    #+#             */
/*   Updated: 2025/09/17 02:23:12 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
        
    public :
        ScavTrap();
        ScavTrap(std::string _Name);
        ~ScavTrap();
        void attack(const std::string& target);
        void guardGate();
};

#endif