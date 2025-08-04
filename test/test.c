/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 17:01:24 by aborda            #+#    #+#             */
/*   Updated: 2025/08/04 20:30:19 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

/*
	* test_ft_isalnum
*/
void	test_ft_isalnum(void)
{
	printf("\n========== Test de ft_isalnum ==========\n");
	assert_eq_int_logical(isalnum(' '), ft_isalnum(' '), "\' \'");
	assert_eq_int_logical(isalnum('0'), ft_isalnum('0'), "0");
	assert_eq_int_logical(isalnum('9'), ft_isalnum('9'), "9");
	assert_eq_int_logical(isalnum('a'), ft_isalnum('a'), "a");
	assert_eq_int_logical(isalnum('!'), ft_isalnum('!'), "!");
	assert_eq_int_logical(isalnum('\n'), ft_isalnum('\n'), "\\n");
	assert_eq_int_logical(isalnum(-1), ft_isalnum(-1), "-1");
	assert_eq_int_logical(isalnum(-42), ft_isalnum(-42), "-42");
}

/*
	* test_ft_isprint
*/
void	test_ft_isprint(void)
{
	printf("\n========== Test de ft_isprint ==========\n");
	assert_eq_int_logical(isprint(' '), ft_isprint(' '), "\' \'");
	assert_eq_int_logical(isprint(32), ft_isprint(32), "32");
	assert_eq_int_logical(isprint(0), ft_isprint(0), "0");
	assert_eq_int_logical(isprint(1), ft_isprint(1), "1");
	assert_eq_int_logical(isprint(126), ft_isprint(126), "126");
	assert_eq_int_logical(isprint(127), ft_isprint(127), "127");
	printf("----------------------------------------\n");
}

/*
	* test_ft_strlcpy
*/
void	test_ft_strlcpy(void)
{
	char	*src;
	size_t	destsize;
	char	*dest_std;
	char	*dest_ft;

	src = "42";
	destsize = 0;
	dest_std = "xxxxxxxxxx";
	dest_ft = "xxxxxxxxxx";
	printf("\n========== Test de ft_strlcpy ==========\n");
	printf("src: %s\ndestsize: %zu\n", src, destsize);
	assert_eq_int(strlcpy(dest_std, src, destsize),
		ft_strlcpy(dest_ft, src, destsize), "Return values std & ft");
	assert_eq_str(dest_std, dest_ft, "Buffer strlcpy");
	printf("----------------------------------------\n");
}

int	main(void)
{
	test_ft_isalpha();
	test_ft_isdigit();
	test_ft_isalnum();
	test_ft_isprint();
	test_ft_strlen();
	test_ft_strlcpy();
	test_ft_atoi();
}
