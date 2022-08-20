/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beccka <beccka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 13:11:00 by beccka            #+#    #+#             */
/*   Updated: 2022/08/20 13:18:46 by beccka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    int i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*int	main(void)
{
	char	*s1 = {"This is the s1 string!"};
	char	*s2 = {"This is the s"};
    int     n = 13;
	printf("the result of ft_strncmp = %i\n", ft_strncmp(s1, s2, n));
	printf("the result of ft_strncmp = %i\n", ft_strncmp(s1, s1, n));
	printf("the result of ft_strncmp = %i\n", ft_strncmp(s2, s1, n));
	printf("the result of ft_strncmp = %i\n", ft_strncmp(s2, s2, n));
	return (0);
}
*/