#include <stdio.h>
#include <stdlib.h>
#include "../incs/push_swap.h"

int main(int ac, char **av) {
  int i, n, i2;
  int verif = 0;
  int tab[ft_atoi(av[1])];

  printf("%d nombres aléatoires : \n", ft_atoi(av[1]));

  for (i = 1; i <= ft_atoi(av[1]); i++) {
    n = rand() % 500 + 1;
    i2 = -1;
    while (i2++ < i)
    {
      if (tab[i2] == n)
      {
        verif = 1;
        i--;
      }
    }
    if (verif == 0)
    {
      printf("%d ", n);
      tab[i] = n;
    }
    verif = 0;
  }

  return 0;
}
