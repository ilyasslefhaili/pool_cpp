/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilefhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 17:34:20 by ilefhail          #+#    #+#             */
/*   Updated: 2022/07/24 17:34:23 by ilefhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "PhoneBook.hpp"

int main()
{
    PhoneBook phoneB;
    std::string    buff;

    while (1)
    {
        std::cout<<"enter the command : ";
        std::cin>>buff;
        if (buff == "ADD")
            phoneB.add();
    }

}

