/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeslall <omeslall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 09:20:56 by omeslall          #+#    #+#             */
/*   Updated: 2022/11/08 16:49:27 by omeslall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanA.hpp"
#include"HumanB.hpp"
#include"Weapon.hpp"

int main()
{
	{
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	// club.setType("some other type of club");
	// bob.attack();
	}
	{
	Weapon club = Weapon("crude spiked club");
	HumanB jim("Jim");
	// jim.setWeapon(club);
	// jim.attack();
	// club.setType("some other type of club");
	// jim.attack();
}
return 0;
}
