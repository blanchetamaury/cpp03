/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 09:51:41 by amblanch          #+#    #+#             */
/*   Updated: 2025/10/01 11:08:56 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void) {
    ClapTrap didier("didier");
    FragTrap jimmy("jimmy");
    
    didier.takeDamage(5);
    jimmy.attack("didier");
    didier.beRepaired(1);
    jimmy.highFivesGuys();
    jimmy.takeDamage(100);
    jimmy.takeDamage(100);
}