/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 08:37:26 by omeslall          #+#    #+#             */
/*   Updated: 2022/11/08 23:22:53 by marvin           ###   ########.fr       */
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
    void			setType(std::string type);
};

#endif