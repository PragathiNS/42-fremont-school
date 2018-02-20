/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 14:06:18 by pnarayan          #+#    #+#             */
/*   Updated: 2018/02/20 15:11:29 by pnarayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <string.h>
/*
 * Basic String Functions
 */
int		ft_strlen(char *str);
char	*ft_strdup(char *str);
char	*ft_strcpy(char *dst, const char *src, size_t len);

int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2);


#endif
