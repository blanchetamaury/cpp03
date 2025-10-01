/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 10:55:36 by amblanch          #+#    #+#             */
/*   Updated: 2025/10/01 21:21:46 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {
    std::cout << "default constructor ClapTrap called" << std::endl;
    _name = "";
    _hit_pts = 10;
    _energy_pts = 10;
    _attack_damage = 0;
}

ClapTrap::~ClapTrap(void) {
    std::cout << "destructor ClapTrap called" << std::endl;
}

ClapTrap::ClapTrap(const std::string name) {
    std::cout << "asigment constructor ClapTrap called" << std::endl;
    _hit_pts = 10;
    _energy_pts = 10;
    _attack_damage = 0;
    _name = name;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
    std::cout << "copy constructor ClapTrap called" << std::endl;
    _name = other._name;
    _hit_pts = other._hit_pts;
    _energy_pts = other._energy_pts;
    _attack_damage = other._attack_damage;
};

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
    std::cout << "Copy assigment constructor ClapTrap called" << std::endl;
    if (this != &other) {
        _name = other._name;
        _hit_pts = other._hit_pts;
        _energy_pts = other._energy_pts;
        _attack_damage = other._attack_damage;
    }
    return (*this);
    
};

void ClapTrap::attack(const std::string &target) {
    std::cout << "ClapTrap " << _name;
    if (_hit_pts <= 0)
        std::cout << "is dead!" << std::endl;
    else if (_energy_pts <= 0)
        std::cout << "not enough energy!" << std::endl;
    else {
        std::cout << " attacks " << target <<", causing " << _attack_damage << " points of damage!" << std::endl;
        --_energy_pts;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (_hit_pts <= 0)
        std::cout << "ClapTrap " << _name << " is dead!" << std::endl;
    else if (_energy_pts <= 0) {
        std::cout << "ClapTrap " << _name << " not enough energy!" << std::endl;
    }
    else {
        std::cout << "ClapTrap " << _name << " take " << amount << " points of damage!" << std::endl;
        _hit_pts -= amount;
    }
};

void ClapTrap::beRepaired(unsigned int amount) {
    if (_hit_pts <= 0)
        std::cout << "ClapTrap " << _name << " is dead!" << std::endl;
    else if (_energy_pts <= 0) {
        std::cout << "ClapTrap " << _name << " not enough energy!" << std::endl;
    }
    else {
        std::cout << "ClapTrap " << _name << " gain " << amount << " points of health!" << std::endl;
        _hit_pts += amount;
    }
}