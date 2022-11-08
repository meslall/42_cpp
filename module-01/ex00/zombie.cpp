/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeslall <omeslall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:49:05 by omeslall          #+#    #+#             */
/*   Updated: 2022/10/14 23:27:44 by omeslall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"
Zombie::Zombie(){}
Zombie::Zombie(std::string name)
{
    this->_name = name;
    std::cout << "Zombie " << this->_name << " is born" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << this->_name << " is dead" << std::endl;
}

void Zombie::announce()
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

