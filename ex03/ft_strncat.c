/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 15:03:56 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/05/11 19:54:14 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && nb > 0)
	{
		dest[i] = src[j];
		i++;
		j++;
		nb--;
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
