/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beccka <beccka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 13:07:44 by beccka            #+#    #+#             */
/*   Updated: 2022/08/20 13:14:38 by beccka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strcmp(char *str1, char *str2)
{
    int i;

	i = 0;
	while (str1[i] && str2[i] && str1[i] == str2[i])
	{
		i++;
	}
	return (str1[i] - str2[i]);
}

/*int	main(void)
{
	char	*str1 = {"This is the str1 string!"};
	char	*str2 = {"This is the s"};

	printf("the result of ft_strcmp = %i\n", ft_strcmp(str1, str2));
	printf("the result of ft_strcmp = %i\n", ft_strcmp(str1, str1));
	printf("the result of ft_strcmp = %i\n", ft_strcmp(str2, str1));
	printf("the result of ft_strcmp = %i\n", ft_strcmp(str2, str2));
	return (0);
}
*/