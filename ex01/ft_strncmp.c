/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 13:46:57 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/05/11 19:39:13 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && n > i)
	{
		if (s1[i] < s2[i])
			return (-1);
		else if (s1[i] > s2[i])
			return (1);
		i++;
	}
	return (0);
}

/*
#include <stdio.h> 

int main() {
    char str1[] = "hello";
    char str2[] = "hello";
    char str3[] = "world";
    char str4[] = "hi";

    printf("%d\n", ft_strncmp(str1, str2, 3));
    printf("%d\n", ft_strncmp(str1, str3, 5));
    printf("%d\n", ft_strncmp(str1, str4, 3));

    return 0;
}
*/
