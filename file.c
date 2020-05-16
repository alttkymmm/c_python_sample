#include <stdio.h>
#include <stdlib.h>

// function to compute the factorial
long long factorial(long long n)
{
  if (n == 0)
  {
    return 1;
  }
  else
  {
    return n * factorial(n - 1);
  }
}

/**
 * argv[1] : filename
 * argv[2] : number to compute the factorial
 */
int main(int argc, char *argv[])
{
  // check the number of arguments.
  if (argc != 3)
  {
    fprintf(stderr, "wrong argument.\n");
    return EXIT_FAILURE;
  }

  // open file to be written.

  FILE *fp;

  if ((fp = fopen(argv[1], "w")) == NULL)
  {
    fprintf(stderr, "fail to open file %s.\n", argv[1]);
    return EXIT_FAILURE;
  }

  // convert string to integer

  int n;

  if ((n = atoi(argv[2])) == 0)
  {
    fprintf(stderr, "fail to convert integer.\n");
    return EXIT_FAILURE;
  }

  // Output a factorial to file

  fprintf(fp, "%lld\n", factorial(n));

  return EXIT_SUCCESS;
}