/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeslall <omeslall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:35:35 by omeslall          #+#    #+#             */
/*   Updated: 2022/11/08 16:48:01 by omeslall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Weapon.hpp"

Weapon::Weapon(std::string type):type(type){};
Weapon::~Weapon(){}
std::string	Weapon::getType()
{
	return(this->type);
}