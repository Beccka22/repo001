/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beccka <beccka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 11:29:10 by beccka            #+#    #+#             */
/*   Updated: 2022/08/19 11:54:41 by beccka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int ft_str_is_alpha (char *str)
{
    int i;
    int is_alpha;

    is_alpha = 1;
    i = 0;
    while (is_alpha == 1 && str[i])
    {
        if  ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
        {
            is_alpha = 0;
            return is_alpha;
        }else{

            is_alpha = 1;
        }
        i++;
    }
    return (is_alpha);
}
/*
int main(void)
{
    char *str= "fsd3asddsada";

    printf("%d\n", ft_str_is_alpha(str));

    return (0);
}
*/