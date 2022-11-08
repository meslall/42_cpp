/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeslall <omeslall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 18:41:22 by omeslall          #+#    #+#             */
/*   Updated: 2022/10/14 23:26:54 by omeslall         ###   ########.fr       */
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
        Zombie(std::string name);
        ~Zombie();
        void announce();
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif