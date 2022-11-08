/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeslall <omeslall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 08:40:24 by omeslall          #+#    #+#             */
/*   Updated: 2022/11/08 16:40:07 by omeslall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include<iostream>
#include"Weapon.hpp"

class HumanB
{
private:
	Weapon	*weapon;
	std::string	name;
public:
	HumanB(std::string	name);
	// ~HumanB();
	// void	setWeapon(Weapon weapon);
	// void	attack();
};

#endif