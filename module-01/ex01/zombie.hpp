/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeslall <omeslall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 18:41:22 by omeslall          #+#    #+#             */
/*   Updated: 2022/10/16 16:59:48 by omeslall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    private:
        std::string _name;
    public:
        Zombie();
        ~Zombie();
        void Zombie_set(std::string name);
        void announce();
};

Zombie* zombieHorde( int N, std::string name );

#endif