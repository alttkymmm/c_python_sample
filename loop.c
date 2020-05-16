#include <stdio.h>
#include <stdlib.h>

/**
 * argv[1] : output string
 * argv[2] : output count
 */
int main(int argc, char *argv[])
{
  // check the number of arguments.
  if (argc != 3)
  {
    fprintf(stderr, "wrong argument.\n");
    return EXIT_FAILURE;
  }

  // convert string to integer

  int n;

  if ((n = atoi(argv[2])) == 0)
  {
    fprintf(stderr, "fail to convert integer.\n");
    return EXIT_FAILURE;
  }

  // output string to the screen repeatedly

  for (int i = 0; i < n; i++)
  {
    printf("%s\n", argv[1]);
  }

  return EXIT_SUCCESS;
}