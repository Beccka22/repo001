/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beccka <beccka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 12:03:58 by beccka            #+#    #+#             */
/*   Updated: 2022/08/19 12:25:50 by beccka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int ft_str_is_lowercase(char *str)
{
    int i;
    int is_lc;

    i = 0;
    is_lc = 1;
    while (is_lc == 1 && str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			is_lc = 0;
		}
		i++;
	}
    return(is_lc);
}

/*int main(void)
{
    char *str = "olff a";

    printf("%d\n", ft_str_is_lowercase(str));
}
*/