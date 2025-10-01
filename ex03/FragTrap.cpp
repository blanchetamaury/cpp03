/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 13:20:28 by amblanch          #+#    #+#             */
/*   Updated: 2025/10/01 22:22:36 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void FragTrap::highFivesGuys() {
    std::cout << "I want a high-fives!" << std::endl;
}

FragTrap::FragTrap() {
    _name = "";
    _hit_pts = 100;
    _energy_pts = 100;
    _attack_damage = 30;
    std::cout << "Default Constructor FragTrap called" << std::endl;
}

FragTrap::FragTrap(const std::string name): ClapTrap(name) {
    _hit_pts = 100;
    _energy_pts = 100;
    _attack_damage = 30;
    std::cout << "asigment Constructor FragTrap " << _name << " called" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "destructor FragTrap " << _name << " called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) {
    std::cout << "copy constructor FragTrap " << other._name << " called" << std::endl;
    _name = other._name;
    _hit_pts = other._hit_pts;
    _energy_pts = other._energy_pts;
    _attack_damage = other._attack_damage;
};

FragTrap &FragTrap::operator=(const FragTrap &other) {
    std::cout << "Copy assigment constructor FragTrap " << other._name << " called" << std::endl;
    if (this != &other) {
        _name = other._name;
        _hit_pts = other._hit_pts;
        _energy_pts = other._energy_pts;
        _attack_damage = other._attack_damage;
    }
    return (*this);
    
};

void FragTrap::attack(const std::string &target) {
    std::cout << "FragTrap " << _name;
    if (_hit_pts <= 0)
        std::cout << " is dead!" << std::endl;
    else if (_energy_pts <= 0)
        std::cout << "not enough energy!" << std::endl;
    else
        std::cout << " attacks " << target <<", causing " << _attack_damage << " points of damage!" << std::endl;
}