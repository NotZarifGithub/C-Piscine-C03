/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 14:06:44 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/05/11 15:07:24 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int y;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while(str[i] != '\0')
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
