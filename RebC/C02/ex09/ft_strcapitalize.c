/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beccka <beccka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 11:02:16 by beccka            #+#    #+#             */
/*   Updated: 2022/08/20 11:59:23 by beccka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include <string.h>
char *ft_strcapitalize(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z'){
            str[i] += 32;
        }
			 
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (!(str[i - 1] >= 'a' && str[i - 1] <= 'z'))
			{
				if (!(str[i - 1] >= '0' && str[i - 1] <= '9'))
				{
					if (!(str[i - 1] >= 'A' && str[i - 1] <= 'Z'))
					{
						str[i] -= 32;
					}
				}
			}
		}
        
        i++;
    }
    return (str);
}

/*int main()
{
    char string[] = "oi, TUdo bBm? 42palavras quarenta-E-duas; cinquenta+e+um";
    printf("%s", ft_strcapitalize(string));
    return(0);
}
*/