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
			int				len;
	public:
		PhoneBook()
		{
			len =  0;
		}
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
					oldestOne = a;
				}
				else
				{
					len += 1;
					oldestOne = a;
				}
				std::cout<<"enter the first name : ";
				std::getline(std::cin, buff);
				contact[oldestOne].FirstName = buff;
				std::cout<<"enter the last name : ";
				std::getline(std::cin, buff);
				contact[oldestOne].LastName = buff;
				std::cout<<"enter the nickname : ";
				std::getline(std::cin, buff);
				contact[oldestOne].NickName = buff;
				std::cout<<"enter the phone number : ";
				std::getline(std::cin, buff);
				contact[oldestOne].PhoneNumber = buff;
				std::cout<<"enter the darket secret: ";
				std::getline(std::cin, buff);
				contact[oldestOne].Darkestsecret = buff;
				a++;
			}
			void search()
			{
				int j = 0;

				while (j < len)
				{
					std::cout<<j<<" |";
					std::cout<<contact[j].FirstName<<" |";
					std::cout<<contact[j].LastName<<" |";
					std::cout<<contact[j].NickName<<std::endl;
					j++;
				}
			}
};

#endif