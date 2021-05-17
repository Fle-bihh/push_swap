#include <stdio.h>
#include <stdlib.h>
#include "../incs/push_swap.h"

int main(int ac, char **av) {
  int i, n;

  printf("%d nombres aléatoires : \n", ft_atoi(av[1]));

  for (i = 1; i <= ft_atoi(av[1]); i++) {
    n = rand() % 100000 + 1;
    printf("%d ", n);
  }

  return 0;
}
