/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilefhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 12:47:30 by ilefhail          #+#    #+#             */
/*   Updated: 2022/06/01 12:47:31 by ilefhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
    int i = 1;
    int j;

    if (argc > 1)
    {
        while (i < argc)
        {
            j = 0;
            while (argv[i][j])
            {
                argv[i][j] = toupper(argv[i][j]);
                j++;
            }
            j = 0;
            std::cout<<argv[i];
            i++;
        }
        std::cout <<std::endl;
    }
    else
        std::cout <<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
}