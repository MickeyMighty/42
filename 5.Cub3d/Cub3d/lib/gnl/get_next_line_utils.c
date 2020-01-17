/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loamar <loamar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/02 15:57:22 by loamar            #+#    #+#             */
/*   Updated: 2020/01/14 18:21:26 by loamar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// char	*ft_strjoin(char *s1, char *s2)
// {
// 	int		len1;
// 	int		len2;
// 	char	*dest;
// 	int		i;
// 	int		j;
//
// 	i = 0;
// 	j = 0;
// 	len1 = ft_strlen(s1);
// 	len2 = ft_strlen(s2);
// 	if (!(dest = (char*)malloc(sizeof(char) * (len1 + len2 + 1))))
// 		return (NULL);
// 	while (s1 && s1[i])
// 		dest[j++] = s1[i++];
// 	i = 0;
// 	while (s2[i] && s2)
// 		dest[j++] = s2[i++];
// 	dest[j] = '\0';
// 	return (dest);
// }
//
// int		ft_strlen(const char *str)
// {
// 	int		i;
//
// 	if (!str)
// 		return (0);
// 	i = 0;
// 	while (str[i])
// 		i++;
// 	return (i);
// }
//
// char	*ft_strchr(const char *s, int c)
// {
// 	int		i;
//
// 	i = -1;
// 	if (!s)
// 		return (NULL);
// 	while (s[++i])
// 		if (s[i] == c)
// 			return ((char*)s + i);
// 	if (c == '\0')
// 		return ((char*)s + i);
// 	return (NULL);
// }

// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	size_t	i;
// 	char	*str;
//
// 	if (!s)
// 		return (NULL);
// 	if (!len || (unsigned int)ft_strlen(s) < start)
// 	{
// 		if (!(str = (char*)malloc(sizeof(char))))
// 			return (NULL);
// 		str[0] = '\0';
// 		return (str);
// 	}
// 	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
// 		return (NULL);
// 	i = 0;
// 	while (i < len && s[start] != '\0')
// 		str[i++] = s[start++];
// 	str[i] = '\0';
// 	return (str);
// }

// char	*ft_strdup(const char *s1)
// {
// 	size_t	len;
// 	size_t	i;
// 	char	*dest;
//
// 	len = ft_strlen(s1);
// 	if (!(dest = (char*)malloc(sizeof(char) * (len + 1))))
// 		return (NULL);
// 	dest[len] = '\0';
// 	i = -1;
// 	while (s1 && s1[++i])
// 		dest[i] = s1[i];
// 	return (dest);
// }
