/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beccka <beccka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 13:52:02 by beccka            #+#    #+#             */
/*   Updated: 2022/08/19 14:02:37 by beccka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char    *ft_strlowcase(char *str)
{
    int i;

    i = 0;

    while(str[i])
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        i++;
    }
    return (str);
}

/*int main(void)
{
    char str[] = "Af ds Bfwd BJHH-SS";
    printf("%s\n", ft_strlowcase(str));
}
*/