/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beccka <beccka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 12:44:52 by beccka            #+#    #+#             */
/*   Updated: 2022/08/19 12:54:27 by beccka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int ft_str_is_printable(char *str)
{
    int is_pt;
    int i;

    is_pt = 1;
    i = 0;
    while (is_pt == 1 && str[i])
    {
        if (str[i] < ' ' || str[i] >  '~')
        {
            is_pt = 0;
        }
        i++;
    }
    return (is_pt);
}

/*int main(void)
{
    char str[] = "";

    printf("%d\n", ft_str_is_printable(str));
    return (0);
}
*/