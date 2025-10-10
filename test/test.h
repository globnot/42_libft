/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 15:47:04 by aborda            #+#    #+#             */
/*   Updated: 2025/10/10 18:53:34 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H

# include "libft.h"
# include "assert.h"
# include <stdio.h>
# include <string.h>
# include <ctype.h>

typedef struct s_test_char
{
	const char	*actual;
	const char	*label;
}	t_test_char;

typedef struct s_test_int
{
	int			actual;
	const char	*label;
}	t_test_int;

typedef struct s_test_memset
{
	char		s[20];
	int			c;
	size_t		n;
	const char	*label_return;
	const char	*label_buffer;
}	t_test_memset;

typedef struct s_test_bzero
{
	char		s[20];
	size_t		n;
	const char	*label;
}	t_test_bzero;

typedef struct s_test_memcpy
{
	char		dest[20];
	const char	*src;
	size_t		n;
	const char	*label_return;
	const char	*label_buffer;
}	t_test_memcpy;

typedef struct s_test_memmove
{
	char		dest[20];
	size_t		n;
	const char	*label;
}	t_test_memmove;

typedef struct s_test_strlcpy
{
	char		dst[20];
	char const	*src;
	size_t		dsize;
	const char	*label_return;
	const char	*label_buffer;
}	t_test_strlcpy;

typedef struct s_test_strlcat
{
	char		dst[20];
	char const	*src;
	size_t		dsize;
	const char	*label_return;
	const char	*label_buffer;
}	t_test_strlcat;

void	test_ft_isalpha(void);
void	test_ft_isdigit(void);
void	test_ft_isalnum(void);
void	test_ft_isascii(void);
void	test_ft_isprint(void);
void	test_ft_strlen(void);
void	test_ft_memset(void);
void	test_ft_bzero(void);
void	test_ft_memcpy(void);
void	test_ft_memmove(void);
void	test_ft_strlcpy(void);
void	test_ft_strlcat(void);
void	test_ft_atoi(void);

#endif
