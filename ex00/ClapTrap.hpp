/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 16:01:27 by mpapin            #+#    #+#             */
/*   Updated: 2025/09/11 16:01:29 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class ClapTrap {
    private:
        std::string _Name;
        int         _PointHealth = 10;
        int         _PointEnergy = 8;
        int         _AttackDamage = 0;
        
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
}