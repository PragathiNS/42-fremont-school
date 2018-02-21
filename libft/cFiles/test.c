/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 10:50:30 by pnarayan          #+#    #+#             */
/*   Updated: 2018/02/20 16:31:57 by pnarayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main()
{
	// CASE 1 : s1 > s2
	// CASE 2 : s1 < s2
	// CASE 3 : s1 == s2
	// CASE 4 : "" and s2
	// CASE 5 : "" and ""
	// CASE 6 : s1 and ""
	const char *s1[6] = {"zac", "abc", "ijk", "", "", "aa"};
	const char *s2[6] = {"abc", "zac", "ijk", "aa", "", ""};
	int i;
	int case_no;

	switch (case_no)
	{
		case 1:
			printf("--- strlen ---\n");
			printf("String %s has length %d\n", s1, ft_strlen(s1[2]));
			printf("String %s has length %d\n", s2, ft_strlen(s2[4]));
			break;
		case 2:
			printf("--- strdup ---\n");

		case 3:
			printf("--- strcpy, strncpy ---\n");
		case 4:
			printf("--- strcat, strncat, strlcat ---\n");
		case 5:
			printf("--- strchr, strrchr ---\n");
		case 6:
			printf("--- strstr, strnstr ---\n");
		case 7:
			printf("--- strcmp, strncmp ---\n");
			i = 0;
			while (i <= 5)
			{
				printf("s1 = %s, s2 = %s\nstrcmp = %d, ft_strcmp = %d\n\n",
				s1[i], s2[i], strcmp(s1[i], s2[i]), ft_strcmp(s1[i], s2[i]));
				printf("s1 = %s, s2 = %s\nstrncmp = %d, ft_strncmp = %d\n\n",
				s1[i], s2[i], strncmp(s1[i], s2[i]), ft_strncmp(s1[i], s2[i]));
				i++;
			}
			break;
		default:
			printf("Thank you for testing these functions\n");
	}
	return 0;
}
