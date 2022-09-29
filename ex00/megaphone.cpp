/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeslall <omeslall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 15:12:20 by omeslall          #+#    #+#             */
/*   Updated: 2022/09/25 17:24:11 by omeslall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int ac, char **av)
{
    int i;
    int j;

    i = 1;
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    while (ac > i)
    {
        j = 0;
        std::string str = av[i];
        while (str[j])
        {
            if(str[j] >= 'a' && str[j] <= 'z')
                str[j] = str[j] - 32;
            j++;
        }
        std::cout << str << " ";
        i++;
    }
    std::cout << std::endl;
}