/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 16:01:25 by mpapin            #+#    #+#             */
/*   Updated: 2025/09/16 18:16:05 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    ClapTrap ct("ClapTrap");
    ct.attack("target A");
    ct.takeDamage(5);
    ct.beRepaired(3);
    ct.attack("target B");

    ScavTrap st("ScavTrap");
    st.attack("target X");
    st.takeDamage(20);
    st.beRepaired(10);
    st.guardGate();

    return 0;
}
