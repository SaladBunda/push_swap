/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util_func2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maaz <ael-maaz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 22:26:52 by ael-maaz          #+#    #+#             */
/*   Updated: 2024/04/07 22:38:21 by ael-maaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strlen(char *s)
{
	int	count;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}

int	fcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0'))
	{
		if ((unsigned char)s1[i] > (unsigned char)s2[i])
			return (1);
		else if ((unsigned char)s1[i] < (unsigned char)s2[i])
			return (-1);
		i++;
	}
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	count;

	i = 0;
	count = ft_strlen((char *)needle);
	if (!haystack && len == 0 && needle)
		return (NULL);
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (needle[j] == haystack[i + j] && i + j < len)
		{
			if (j == count - 1 && needle[j] == haystack[i + j]
				&& haystack[i + j] != '\0')
				return ((char *)haystack + i);
			j++;
		}
		i++;
	}
	return (NULL);
}

int	get_range(int size)
{
	int	range;

	range = 0.045 * size + 10.5;
	return (range);
}

int	ft_atoi(char *s, int *error)
{
	int					i;
	int					sign;
	long long			num;

	i = 0;
	if (fcmp(s, "-0") == 0 || fcmp(s, "+0") == 0 || fcmp(s, "0") == 0)
		return (0);
	num = 0;
	sign = 1;
	while ((s[i] >= 9 && s[i] <= 13) || s[i] == 32)
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i++] == '-')
			sign = -1;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		num = num * 10 +(s[i++] - 48);
	}
	if (s[i] != '\0' || num == 0 || num > 2147483647 || num < -2147483648)
		*error = -1; 
	return (num * sign);
}
