/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 12:48:27 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/05/11 19:53:49 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/* 
#include <stdio.h>

int main() {
    char str1[] = "hello";
    char str2[] = "hello";
    char str3[] = "world";
    char str4[] = "hi";
    
    printf("%d\n", ft_strcmp(str1, str2));
    printf("%d\n", ft_strcmp(str1, str3));
    printf("%d\n", ft_strcmp(str1, str4));

    return 0;
}
*/
