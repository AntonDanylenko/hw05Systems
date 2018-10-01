#include <stdio.h>
#include <string.h>
#include "strfunc.h"

int main(){
  char uno[100] = "rasca";
  char dos[100] = "cielos";
  printf("string uno: %s\n", uno);
  printf("string dos: %s\n", dos);
  printf("[mine]length of uno: %d\n", mystrlen(uno));
  printf("[mine]length of dos: %d\n", mystrlen(dos));
  printf("[standard]length of uno: %ld\n", strlen(uno));
  printf("[standard]length of dos: %ld\n", strlen(dos));
  printf("[mine]uno + 4 byte of dos: %s\n", mystrncat(uno, dos, 4));
  printf("[standard]uno + 4 (more) byte of dos: %s\n", strncat(uno, dos, 4));
  printf("string uno: %s\n", uno);
  printf("string dos: %s\n", dos);
  printf("[mine]uno + 2 bytes of dos: %s\n", mystrncat(uno, dos, 2));
  printf("[standard]uno + 2 (more) bytes of dos: %s\n", strncat(uno, dos, 2));

  char tres[100] = "hola";
  char cuatro[100] = "adios";
  char tres2[100] = "hola";
  char cuatro2[100] = "adios";
  printf("string tres: %s\n", tres);
  printf("string cuatro: %s\n", cuatro);
  printf("[mine]copy tres into cuatro: %s\n", mystrcpy(cuatro, tres));
  printf("[standard]copy tres2 into cuatro2: %s\n", strcpy(cuatro2, tres2));
  printf("string cuatro: %s\n", cuatro);
  printf("string cuatro2: %s\n", cuatro2);

  char cinco[100] = "hello";
  char seis[100] = "adios";
  printf("string cinco: %s\n", cinco);
  printf("string seis: %s\n", seis);
  printf("[mine]compare cinco to seis: %d\n", mystrcmp(cinco, seis));
  printf("[standard]compare cinco to seis: %d\n", strcmp(cinco, seis));
  return 0;
}
