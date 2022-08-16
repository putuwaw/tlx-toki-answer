#include <stdio.h>
#include <string.h>

int main()
{
  char S[101], T[101];
  scanf("%s %s", S, T);
  size_t len = strlen(T);
  char *p;
  while ((p = strstr(S, T)) != NULL)
  {
    memmove(p, p + len, strlen(p + len) + 1);
  }
  printf("%s\n", S);
  return 0;
}