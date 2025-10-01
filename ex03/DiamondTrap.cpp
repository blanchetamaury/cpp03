/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 10:30:08 by amblanch          #+#    #+#             */
/*   Updated: 2025/10/01 22:21:40 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("_clap_name"), FragTrap(""), ScavTrap("") { //100 50 30
    _hit_pts = _hit_pts_default;
    _energy_pts = _energy_pts_default;
    _attack_damage = _attack_damage_default;
    std::cout << "DiamondTrap default Constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name) {
    _name = name;
    _hit_pts = _hit_pts_default;
    _energy_pts = _energy_pts_default;
    _attack_damage = _attack_damage_default;
    std::cout << "Asigment Constructor DiamondTrap " << _name << " called" << std::endl;
    std::cout << "DiamondTrap value is hit_pts(" << FragTrap::_hit_pts << "), energy(" << ScavTrap::_energy_pts << "), attack_dommage(" << FragTrap::_attack_damage << ")" << std::endl; 
}

DiamondTrap::~DiamondTrap() {
    std::cout << "Destructor DiamonTrap " << _name << " called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) {
    std::cout << "Copy constructor DiamonTrap " << other._name << " called" << std::endl;
    _name = other._name;
    _hit_pts = other._hit_pts;
    _energy_pts = other._energy_pts;
    _attack_damage = other._attack_damage;
};

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other) {
    std::cout << "Copy assigment constructor DiamonTrap " << other._name << " called" << std::endl;
    if (this != &other) {
        _name = other._name;
        _hit_pts = other._hit_pts;
        _energy_pts = other._energy_pts;
        _attack_damage = other._attack_damage;
    }
    return (*this);
};

void DiamondTrap::whoAmI(void) {
    std::cout << "My name is " << _name << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}