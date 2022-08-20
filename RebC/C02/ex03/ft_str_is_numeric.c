/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beccka <beccka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 11:56:16 by beccka            #+#    #+#             */
/*   Updated: 2022/08/19 12:26:59 by beccka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int ft_str_is_numeric(char *str)
{
    int i;
    int is_num;

    i = 0;
    is_num = 1;

    while(is_num == 1 && str[i])
    {
        if(str[i] > '0' && str[i] < '9')
        {
            is_num = 1;
        }else
        {
            is_num = 0;

            return (is_num);
        }
        i++;
    }

    return (is_num);
}

/*int main(void)
{
    char *str = "122";

    printf("%d\n", ft_str_is_numeric(str));
}
*/