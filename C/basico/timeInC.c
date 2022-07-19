#include <stdio.h>
#include <time.h>

void repeat()
{
  for (long long int c = 0; c <= 1000000000; c++)
  {
    if (c == 1000000000)
    {
      printf("%lld \n", c);
    }
  }
}

int main()
{
  time_t tIni, tFim;

  tIni = time(NULL);
  repeat();
  tFim = time(NULL);
  printf("Tempo em segundos: %3.1f \n\n", difftime(tFim, tIni));

  return 0;
}