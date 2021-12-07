/* str07_strcpy.c - © FB - 08/12/20
 * Copia di una stringa
 */
#include <stdio.h>   //printf
#include <string.h>  //strcpy

main(int argc, char *argv[]) {

  //Dichiariamo un vettore di 30 char
  char dest[30];
  //Inseriamo una stringa nel vettore dest, scrivendo ogni
  //singolo elemento e inserendo lo 0 finale
  dest[0]='C';
  dest[1]='i';
  dest[2]='a';
  dest[3]='o';
  dest[4]='\0';
  printf("dest[30]=%s\n", dest);

  //Utilizziamo la funzione strcpy della libreria string.h
  //per copiare la stringa ""Ciao ragazzi!" nella stringa dest, 
  //incluso il carattere terminatore '\0'
  strcpy(dest, "Ciao ragazzi!");
  printf("dest[30]=%s\n", dest);  

  return 0;
} 

