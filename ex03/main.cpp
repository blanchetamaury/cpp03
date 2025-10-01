/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 09:51:41 by amblanch          #+#    #+#             */
/*   Updated: 2025/10/01 22:22:03 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void) {
    //ClapTrap didier;
    DiamondTrap jimmy("jimmy");
    
    //didier.takeDamage(5);
    jimmy.attack("didier");
    //didier.beRepaired(1);
    jimmy.takeDamage(100);
    jimmy.takeDamage(100);
    jimmy.attack("didier");
    jimmy.whoAmI();
}