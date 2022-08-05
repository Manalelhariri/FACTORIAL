#include <stdio.h>
int main()
{
  int nbr;
  int i;
  long fact = 1;
  printf("Entrez un nombre pour calculer sa factorielle\n");
  scanf("%d", &nbr);
  for (i = 1; i <= nbr; i++)
    fact = fact * i;
  printf("%d! = %ld\n", nbr, fact);
 
}