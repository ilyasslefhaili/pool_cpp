/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilefhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 17:34:32 by ilefhail          #+#    #+#             */
/*   Updated: 2022/07/24 17:34:37 by ilefhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include <iostream>
#include <string>

class  contact
{
public:
		std::string FirstName;
		std::string LastName;
		std::string NickName;
		std::string PhoneNumber;
		std::string Darkestsecret;
};

class PhoneBook{
    private:
            contact			contact[8];
	public:
		void add() 
			{
				static int		a;
				int		oldestOne;
				std::string	buff;

				if (a >= 8 && a < 16)
					oldestOne = a - 8;
				else if (a == 16)
				{
					a = 0;
					std::cout<<"ldld"<<std::endl;
					oldestOne = a;
				}
				else
					oldestOne = a;
				std::cout<<"enter the first name : ";
				std::cin>>buff;
				contact[oldestOne].FirstName = buff;
				std::cout<<"enter the last name : ";
				std::cin>>buff;
				contact[oldestOne].LastName = buff;
				std::cout<<"enter the nickname : ";
				std::cin>>buff;
				contact[oldestOne].NickName = buff;
				std::cout<<"enter the phone number : ";
				std::cin>>buff;
				contact[oldestOne].PhoneNumber = buff;
				std::cout<<"enter the darket secret: ";
				std::cin>>buff;
				contact[oldestOne].Darkestsecret = buff;
				int i = 0;
				while (i < 8)
				{
					std::cout<<contact[i].FirstName<<std::endl;
					std::cout<<contact[i].LastName<<std::endl;
					std::cout<<contact[i].PhoneNumber<<std::endl;
					std::cout<<contact[i].NickName<<std::endl;
					std::cout<<contact[i].Darkestsecret<<std::endl;
					i++;
				}
				a++;
			}
};

#endif