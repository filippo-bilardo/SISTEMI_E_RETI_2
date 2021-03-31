//==========================================================================================
//
// Project:  th01-helloworld.c
// Date:     29/12/16
// Author:   Filippo Bilardo
//
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//
//  Creazione di un semplice thread.
//  gcc -pthread th01-helloworld.c
//
// Ver   Date        Comment
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// 1.0   29/12/16     Versione iniziale
// 1.1   24/04/19     Aggiunta commenti
// 
//==========================================================================================
#include <stdio.h>    // printf
#include <pthread.h>  // thread	

//------------------------------------------------------------------------------------------
void *thread01(void *vargp);

//------------------------------------------------------------------------------------------
int main() 
{
  pthread_t tid;
  pthread_create(&tid, NULL, thread01, NULL);
  printf("main thread - creato thread01 tid=%d\n",tid);
}

//------------------------------------------------------------------------------------------
void *thread01(void *vargp) 
{
  printf("thread 01 - Hello, world!...\n");
}
