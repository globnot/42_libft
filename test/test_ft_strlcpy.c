/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 21:01:24 by aborda            #+#    #+#             */
/*   Updated: 2025/08/04 21:01:59 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

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
