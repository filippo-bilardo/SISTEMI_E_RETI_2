//==========================================================================================
//
// Project:  th05-arg_int.c
// Date:     31/03/21
// Author:   Filippo Bilardo
//
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//
//  I parametri vengono passati come puntatori a void (void* par)
//  Quindi prima di passarli al thread da creare va fatto l'opportuno casting.
//  gcc -pthread th05-arg_int.c
//
// Ver   Date        Comment
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// 1.0   31/03/21     Versione iniziale
// 
//==========================================================================================
#include <stdio.h>    // printf
#include <pthread.h>  // thread	
 
//------------------------------------------------------------------------------------------
void* threadFunc(void* par);

//------------------------------------------------------------------------------------------
int main() {
  
  pthread_t tid1, tid2, tid3; // Thread id

  // Data to pass to the thread function
  int data = 123;
  void* arg = (void*)data;  // Converts to void*

  // Creates the thread
  pthread_create(&tid1, NULL, threadFunc, arg);
  // Creates the thread
  pthread_create(&tid2, NULL, threadFunc, (void*)233);
  // Creates the thread
  pthread_create(&tid3, NULL, threadFunc, (void*)'a');
  
  // Attendo la terminazione dei threads
  pthread_join(tid1, NULL);
  pthread_join(tid2, NULL);
  pthread_join(tid3, NULL);
}

//------------------------------------------------------------------------------------------
void* threadFunc(void* par) {
  
  // Catches the "int" argument. Must know that it is an integer. Type checking is broken
  int value = (int)par;
  
  // Uses value as an integer
  printf("value = %d\n", value);
  
  // Terminates
  return (void*)0;
}
