/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beccka <beccka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 12:28:30 by beccka            #+#    #+#             */
/*   Updated: 2022/08/19 12:35:27 by beccka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int ft_str_is_uppercase(char *str)
{
    int is_uc;
    int i;

    is_uc = 1;
    i = 0;

    while (is_uc == 1 && str[i]){
        if (str[i] < 'A' || str[i] > 'Z')
        {
            is_uc = 0;
        }
        i++;
    }
    return (is_uc);
}

/*int main(void)
{
    char str[] = "AAA";

    printf("%d\n", ft_str_is_uppercase(str));
}
*/