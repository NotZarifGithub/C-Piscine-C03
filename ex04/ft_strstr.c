/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 14:06:44 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/05/11 20:02:14 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	y;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		y = 0;
		while (str[i + y] == to_find[y] && to_find[y] != '\0')
			y++;
		if (to_find[y] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}

/*
#include <stdio.h> 

int main() {

    char str1[] = "Kanye West";
    char to_find1[] = "West";
    char str2[] = "This is a Kanye West";
    char to_find2[] = "Kanye";
    char str3[] = "Kanye West";
    char to_find3[] = "West";
    
    printf("1.%s\n", ft_strstr(str1, to_find1));
    printf("2.%s\n", ft_strstr(str2, to_find2));
    printf("3.%s\n", ft_strstr(str3, to_find3));

    return 0;
}
*/
