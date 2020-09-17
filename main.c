// Author: Kyle Chen kvc5823@psu.edu
#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>
#include <math.h>

int digit_sum(int n)
{
  if (n > 0)
    return n%10 + digit_sum(n/10);
  else 
    return 0;
}

int main(void) {
  int n = atoi(readline("Enter an int: "));
  printf("sum of digits of %d is %d.\n", n , digit_sum(n));
  return 0;
}