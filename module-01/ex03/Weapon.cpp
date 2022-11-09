/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:35:35 by omeslall          #+#    #+#             */
/*   Updated: 2022/11/08 23:24:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Weapon.hpp"

Weapon::Weapon(std::string type):type(type){};
Weapon::~Weapon(){}
std::string	Weapon::getType()
{
	return(this->type);
}

void	Weapon::setType(std::string	tp)
{
	this->type = tp;
}