/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 10:22:20 by amblanch          #+#    #+#             */
/*   Updated: 2025/10/01 10:44:44 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap  : public ClapTrap {
    public:
        ScavTrap(void);
        ScavTrap(const std::string name);
        ScavTrap(const ScavTrap& other);
        ScavTrap &operator=(const ScavTrap &other);
        ~ScavTrap();
        void attack(const std::string &target);
        void guardGate();
};

#endif