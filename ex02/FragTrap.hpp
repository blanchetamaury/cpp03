/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 13:14:43 by amblanch          #+#    #+#             */
/*   Updated: 2025/10/01 11:18:04 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
    public:
        FragTrap();
        FragTrap(const std::string name);
        FragTrap(const FragTrap& other);
        FragTrap &operator=(const FragTrap &other);
        ~FragTrap();
        void highFivesGuys(void);
        void attack(const std::string &target);
};

#endif