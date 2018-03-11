/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 10:50:30 by pnarayan          #+#    #+#             */
/*   Updated: 2018/02/27 20:35:54 by pnarayan         ###   ########.fr       */
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

	printf("Enter the number for the action that you wanna perform\n");

	do
	{
		scanf("%d \n", &case_no);
		switch (case_no)
		{
			case 1:
				/* The strlen() function returns the number of characters that
				 * precede the terminating NUL character.  The strnlen() function
				 * returns either the same result as strlen() or maxlen, whichever
				 * is smaller. */
				// size_t strlen(const char *s);
				printf("--- strlen ---\n");
				// TODO : Unsigned long as the return type?
				printf("String %s has length %lu(lib) and %d\n", s1[2], strlen(s1[2]), ft_strlen(s1[2]));
				printf("String %s has length %lu(lib) and %d\n", s2[4], strlen(s2[4]), ft_strlen(s2[4]));
				break;
			case 2:
				printf("--- strdup ---\n");
				printf("String %s is saved in dup which is %s(lib) and %s\n", s2[4], strdup(s2[4]), ft_strdup(s2[4]));
				printf("String %s is saved in dup which is %s(lib) and %s\n", s1[2], strdup(s1[2]), ft_strdup(s1[2]));
				break;
			case 3:
				// TODO : Why is this difficult???
				printf("--- strcpy, strncpy ---\n");
				char *s, *ft_s, *sn, *ft_sn;
				printf("%d\t%s\t%d\t%s\t%s(lib)\t%s", case_no, "strcpy", 1, s1[2], strcpy(s, s1[2]), ft_strcpy(ft_s, s1[2]));
				printf("%d\t%s\t%d\t%s\t%s(lib)\t%s", case_no, "strncpy", 2, s1[2], strncpy(sn, s1[2], 1), ft_strncpy(ft_sn, s1[2], 1));

				break;
			case 4:
				printf("--- strcat, strncat, strlcat ---\n");
				break;
			case 5:
				printf("--- strchr, strrchr ---\n");
				break;
			case 6:
				printf("--- strstr, strnstr ---\n");
				break;
			case 7:
				printf("--- strcmp, strncmp ---\n");
				i = 0;
				while (i <= 5)
				{
					printf("s1 = %s, s2 = %s\nstrcmp = %d, ft_strcmp = %d\n\n",
							s1[i], s2[i], strcmp(s1[i], s2[i]), ft_strcmp(s1[i], s2[i]));
					printf("s1 = %s, s2 = %s\nstrncmp = %d, ft_strncmp = %d\n\n",
							s1[i], s2[i], strncmp(s1[i], s2[i], 2), ft_strncmp(s1[i], s2[i], 2));
					i++;
				}
				break;
			case 8:
				printf("--- strstr ---\n");
				char *haystack = "hahabcdef";
				char *needle = "abc";
				printf("haystack %s, needle %s, result = %s\n", haystack, needle, ft_strstr(haystack, needle)); 
				break;
			case 50:
				printf("Thank you for testing these functions\n");
		}
	} while (case_no != 50);
	return (0);
}
