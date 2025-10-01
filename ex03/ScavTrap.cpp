/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 10:32:13 by amblanch          #+#    #+#             */
/*   Updated: 2025/10/01 22:22:32 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void ScavTrap::guardGate() {
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

ScavTrap::ScavTrap(void) {
    std::cout << "ScavTrap default constructor called" << std::endl;
    _hit_pts = 100;
    _energy_pts = 50;
    _attack_damage = 20;
}

ScavTrap::ScavTrap(const std::string name): ClapTrap(name) {
    _hit_pts = 100;
    _energy_pts = 50;
    _attack_damage = 20;
    std::cout << "asigment Constructor ScavTrap " << _name << " called" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "destructor ScavTrap " << _name << " called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) {
    std::cout << "copy constructor ScavTrap " << other._name << " called" << std::endl;
    _name = other._name;
    _hit_pts = other._hit_pts;
    _energy_pts = other._energy_pts;
    _attack_damage = other._attack_damage;
};

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
    std::cout << "Copy assigment constructor ScavTrap " << other._name << " called" << std::endl;
    if (this != &other) {
        _name = other._name;
        _hit_pts = other._hit_pts;
        _energy_pts = other._energy_pts;
        _attack_damage = other._attack_damage;
    }
    return (*this);
    
};

void ScavTrap::attack(const std::string &target) {
    std::cout << "ScavTrap " << _name;
    if (_hit_pts <= 0)
        std::cout << " is dead!" << std::endl;
    else if (_energy_pts <= 0)
        std::cout << "not enough energy!" << std::endl;
    else
        std::cout << " attacks " << target <<", causing " << _attack_damage << " points of damage!" << std::endl;
}