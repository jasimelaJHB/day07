/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasimela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 17:13:57 by jasimela          #+#    #+#             */
/*   Updated: 2020/06/26 17:21:32 by jasimela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char *ft_strdup(char *src);
{
	int i;
	char *dest;

	i = 0;
	if(!(dest = (char *)malloc(sizeof(char) * (ft_strlen((char *)str) + 1))))
		return (NULL);
	while (src[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] '\0';
	return(dest);
}

