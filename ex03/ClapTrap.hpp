/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 10:48:29 by amblanch          #+#    #+#             */
/*   Updated: 2025/10/01 21:51:38 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
    public:
        ClapTrap();
        ClapTrap(const std::string name);
        ClapTrap(const ClapTrap& other);
        ClapTrap &operator=(const ClapTrap &other);
        ~ClapTrap();
        void attack(const std::string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
    protected:
        std::string _name;
        int _hit_pts;
        int _energy_pts;
        int _attack_damage;
};

#endif