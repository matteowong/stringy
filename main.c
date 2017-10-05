#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mystr_headers.h"

int main(){
  char *s1 = "ab";
  char *s2 = "abc";
  char c = 'c';
  
  // testing mystrlen
  printf("Testing mystrlen(char *s1)\n");
  printf("s1 = [%s]\n", s1);
  printf("default value: %zd\n", strlen(s1));
  printf("my value: %d\n\n", mystrlen(s1));

  // testing mystrcmp
  printf("Testing mystrcmp(char *s1, char *s2)\n");
  printf("s1 = [%s]  s2 = [%s]\n", s1, s2);
  printf("default value: %d\n", strcmp(s1, s2));
  printf("my value: %d\n\n", mystrcmp(s1, s2));
  
  printf("Testing mystrcmp(char *s1, char *s2)\n");
  printf("s1 = [%s]  s2 = [%s]\n", s2, s1);
  printf("default value: %d\n", strcmp(s2, s1));
  printf("my value: %d\n\n", mystrcmp(s2, s1));
  
  printf("Testing mystrcmp(char *s1, char *s2)\n");
  printf("s1 = [%s]  s2 = [%s]\n", s1, s1);
  printf("default value: %d\n", strcmp(s1, s1));
  printf("my value: %d\n\n", mystrcmp(s1, s1));
  
  // testing mystrchr
  printf("Testing mystrchr(char *s, char c)\n");
  printf("s1 = [%s]  c = [%c]\n", s1, c);
  printf("default value: %p\n", strchr(s1, c));
  printf("my value: %p\n\n", mystrchr(s1, c));

  printf("Testing mystrchr(char *s, char c)\n");
  printf("s1 = [%s]  c = [%c]\n", s2, c);
  printf("default value: %p\n", strchr(s2, c));
  printf("my value: %p\n\n", mystrchr(s2, c));

  // testing mystrstr
  printf("Testing mystrstr(char *s1, char * s2)\n");
  printf("s1 = [%s]  s2 = [%s]\n", s2, s1);
  printf("default value: %p\n", strstr(s2, s1));
  printf("my value: %p\n\n", mystrstr(s2, s1));

  printf("Testing mystrstr(char *s1, char * s2)\n");
  printf("s1 = [%s]  s2 = [%s]\n", s1, s2);
  printf("default value: %p\n", strstr(s1, s2));
  printf("my value: %p\n\n", mystrstr(s1, s2));

  char arr[70]="aloha";
  char * s3=arr;
  char * s4="ciao";
  
  printf("Testing mystrcpy(char *s3, char * s4)\n");
  printf("s3 = [%s]  s4 = [%s]\n", s3, s4);
  printf("default value: %s\n", strcpy(s3, s4));
  s3[0] = 0;
  printf("my value: %s\n\n", mystrcpy(s3, s4));
  
  printf("Testing mystrncpy(char *s3, char * s4, int n)\n");
  printf("s3 = [%s]  [%s]  n = 4\n", s3, "archipelago");
  printf("default value: %s\n", strncpy(s3, "archipelago", 4));
  s3[0] = 0;
  printf("my value: %s\n\n", mystrncpy(s3, "archipelago", 4));

  printf("Testing mystrcat(char *s3, char * s4)\n");
  printf("s3 = [%s]  s4 = [%s]\n", s3, s4);
  printf("default value: %s\n", strcat(s3, s4));
  s3[4]=0;
  printf("my value: %s\n\n", mystrcat(s3, s4));
  
  printf("Testing mystrncat(char *s3, char * s4, int n)\n");
  printf("s3 = [%s]  s4 = [%s]  n = 3\n", s3, s4);
  printf("default value: %s\n", strncat(s3, s4, 3));
  s3[8]=0;
  printf("my value: %s\n\n", mystrncat(s3, s4, 3));

  return 0;
}
