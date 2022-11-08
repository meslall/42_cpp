/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeslall <omeslall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 09:37:17 by omeslall          #+#    #+#             */
/*   Updated: 2022/11/08 16:45:22 by omeslall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include<iostream>
#include"Weapon.hpp"

class HumanA
{
private:
	std::string name;
	Weapon &weapon;
public:
	HumanA(std::string name,Weapon &wp);
	~HumanA();
	void	attack(void);
};	

#endif