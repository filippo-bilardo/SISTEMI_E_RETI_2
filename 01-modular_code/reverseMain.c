/* REVERSE.C */
#include <stdio.h>	//printf
#include <string.h>	//strlen

/* Function Prototype */
void reverse ( char *, char * );

/*********************************************************/
int main (int argc, char *argv[]) {
  char str [strlen(argv[1])+1]; /* Buffer per la stringa invertita */
  reverse (argv[1], str); /* Inverte la stringa in ingresso */
  printf ("reverse (\"%s\") = %s\n", argv[1], str); /* Mostra il risultato */
  return 0;
}

void reverse ( char *before, char *after ) {
  /* before: puntatore alla stringa originaria */
  /* after: puntatore alla stringa invertita */
  int i, j, len;
  len = strlen (before);

  for (j=len-1, i=0; j>=0; j--, i++) /* Ciclo */
    after[i] = before[j];

  after[len] = '\0'; /* \0 termina la stringa invertita */
}
