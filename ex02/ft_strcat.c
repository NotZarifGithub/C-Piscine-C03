/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 14:06:52 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/05/11 19:53:08 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include <stdio.h> 

int main() {

    char dest1[20] = "Kanye ";
    char src1[] = "West";
    char dest2[20] = "This is Kanye ";
    char src2[] = "West.";
    
    printf("%s\n", ft_strcat(dest1, src1));
    printf("%s\n", ft_strcat(dest2, src2));

    return 0;
}
*/
