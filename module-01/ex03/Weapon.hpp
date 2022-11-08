/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeslall <omeslall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 08:37:26 by omeslall          #+#    #+#             */
/*   Updated: 2022/11/08 16:46:55 by omeslall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WEAPON_HPP
# define WEAPON_HPP

#include<iostream>

class Weapon
{
    private:
    std::string		type;
    public:
	Weapon(std::string	type);
	~Weapon();
    std::string		getType();
    // void			setType(std::string type);
};

#endif