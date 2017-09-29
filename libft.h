/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <fpolyans@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 17:14:26 by fpolyans          #+#    #+#             */
/*   Updated: 2017/09/28 18:53:29 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

void	ft_putstr(char const *str);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl(char const *s);
void	ft_putendl_fd(char const *s, int fd);
int		ft_strequ(char const *s1, char const *s2);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
int		ft_strcontains(char *str, char c);
int		ft_atoi(char *str);
int		ft_isalpha(int c);
int		ft_isdigit(int c);

char	*ft_skipblanks(char *str);
char	*ft_skipneg(char *str);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s);
char	*ft_stricut(const char *src, size_t strt, size_t end);
char	*ft_strncpy(char *dest, char *src, size_t len);
size_t	ft_strlen(const char *str);

#endif
