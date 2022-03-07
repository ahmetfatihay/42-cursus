/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aay <42istanbul.com.tr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 15:59:33 by aay               #+#    #+#             */
/*   Updated: 2022/02/02 15:59:35 by aay              ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	pos;

	pos = ft_strlen(s);
	if (s)
	{
		while (s[pos] != (char)c && pos >= 0)
			pos--;
		if (s[pos] == (char)c)
			return ((char *)&s[pos]);
		else
			return (NULL);
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int main( void )
{
    const char cdizi[] = "Bilgisayar";
    char cd = 'i';
    char *ret;

    ret = strrchr(cdizi, cd);

    printf("Bulunan son %c karakterinden itibaren dizi içeriği: %s", cd, ret);

    return 0;
}
*/
