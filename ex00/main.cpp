/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 16:01:25 by mpapin            #+#    #+#             */
/*   Updated: 2025/09/11 16:01:31 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
    ClapTrap salut("Bien le s");
    ClapTrap Bonjour("Comment allez-vous");
    salut.attack("Bonjour");
    salut.takeDamage(5);
    salut.beRepaired(2);
}