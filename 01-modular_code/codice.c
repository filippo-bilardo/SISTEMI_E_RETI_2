/* reverse.h */
void reverse (char *, char *); /* Prototipo della funzione reverse */

/* reverse.c */
#include <stdio.h> 
#include <string.h>
#include "reverse.h"

void reverse ( char *before, char *after ) {
  /* before: puntatore alla stringa originaria */
  /* after: puntatore alla stringa invertita */
  int i, j, len;
  len = strlen (before);

  for (j=len-1, i=0; j>=0; j--, i++) /* Ciclo */
    after[i] = before[j];

  after[len] = '\0'; /* \0 termina la stringa invertita */
}

/* usaReverse.c */

#include <stdio.h>	//printf
#include <string.h>	//strlen
#include "reverse.h"

int main (int argc, char *argv[]) {
  char str [strlen(argv[1])+1]; /* Buffer per la stringa invertita */
  reverse (argv[1], str); /* Inverte la stringa in ingresso */
  printf ("reverse (\"%s\") = %s\n", argv[1], str); /* Mostra il risultato */
  return 0;
}

/* palindroma.h */
int palindroma (char *);

/* palindroma.c */
#include <string.h>
#include "reverse.h"
#include "palindroma.h"

int palindroma(char *str) {

	char revstr[strlen(str)+1];
	reverse (str,revstr);
	return !strcmp(str, revstr);

}

/* usaPal.c */
#include <stdio.h>
#include "palindroma.h"

int main(int argc, char *argv[]) {
  if(palindroma(argv[1]))
    printf("la stringa \"%s\" e' palindroma.\n", argv[1]);
  else
    printf("la stringa \"%s\" non e' palindroma.\n", argv[1]);
}

