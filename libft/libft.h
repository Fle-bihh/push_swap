/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-biha <fle-biha@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 11:49:57 by fle-biha          #+#    #+#             */
/*   Updated: 2021/05/25 15:22:49 by fle-biha         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_list_int
{
	int					content;
	struct s_list_int	*next;
}					t_list_int;

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

void				ft_bzero(void *s, size_t n);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
void				*ft_memchr(const void *s, int c, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memset(void *b, int c, size_t len);
size_t				ft_strlen(const char *s);
int					ft_toupper(int c);
void				*ft_memccpy(void *dest, const void *src, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
char				*ft_strrchr(const char *s, int c);
size_t				ft_strlcat(char *dest, const char *src, size_t size);
int					ft_isalpha(int c);
int					ft_tolower(int c);
char				*ft_strchr(const char *s, int c);
int					ft_atoi(const char *str);
void				*ft_calloc(size_t count, size_t size);
char				*ft_strdup(const char *s1);
size_t				ft_strlcpy(char *dst, const char *src, size_t dstsize);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strnstr(const char *s1, const char *s2, size_t len);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s1, char const *set);
char				**ft_split(char const *s, char set);
char				*ft_itoa(int n);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
t_list				*ft_lstnew(void *content);
void				ft_lstadd_front(t_list **alst, t_list *new);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstadd_back(t_list **alst, t_list *new);
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *), \
					void (*del)(void *));
void				ft_dellst_back_int(t_list_int **list);
void				ft_dellst_front_int(t_list_int **list);
void				ft_dellst_one_int(t_list_int **list, int i);
void				ft_lstadd_back_int(t_list_int **list, int valeur);
void				ft_lstadd_front_int(t_list_int **list, int valeur);
void				ft_lstaff_int(t_list_int *list);
void				ft_lstaff_color_int(t_list_int *list, char *color);
void				ft_lstclear_int(t_list_int **list);
t_list_int			*ft_lstlast_int(t_list_int *lst);
t_list_int			*ft_lstn_int(t_list_int *lst, int n);
int					ft_lstsize_int(t_list_int *lst);
long				ft_atol(const char *str);

#endif
