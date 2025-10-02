/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 09:51:41 by amblanch          #+#    #+#             */
/*   Updated: 2025/10/02 14:31:57 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
    ClapTrap didier("didier");
    ClapTrap jimmy("jimmy");
    
    didier.takeDamage(5);
    jimmy.attack("didier");
    didier.beRepaired(1);
    jimmy.takeDamage(100);
    jimmy.takeDamage(100);
    jimmy.beRepaired(10);
    
}