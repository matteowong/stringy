#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mystr_headers.h"

int main(){
  char *s1 = "ab";
  char *s2 = "abc";
  char c = 'c';

  // testing mystrcmp
  printf("Testing mystrcmp(char *s1, char *s2)\n");
  printf("s1 = [%s]  s2 = [%s]\n", s1, s2);
  printf("default value: %d\n", strcmp(s1, s2));
  printf("my value: %d\n", mystrcmp(s1, s2));
  
  printf("\n");
  // testing mystrchr
  printf("Testing mystrchr(char *s, char c)\n");
  printf("s1 = [%s]  c = [%c]\n", s1, c);
  printf("default value: %p\n", strchr(s1, c));
  printf("my value: %p\n", mystrchr(s1, c));

  printf("\n");

  printf("Testing mystrchr(char *s, char c)\n");
  printf("s1 = [%s]  c = [%c]\n", s2, c);
  printf("default value: %p\n", strchr(s2, c));
  printf("my value: %p\n", mystrchr(s2, c));

  printf("\n");
  // testing mystrstr
  printf("Testing mystrstr(char *s1, char * s2)\n");
  printf("s1 = [%s]  s2 = [%s]\n", s2, s1);
  printf("default value: %p\n", strstr(s2, s1));
  printf("my value: %p\n", mystrstr(s2, s1));

  printf("\n");

  printf("Testing mystrstr(char *s1, char * s2)\n");
  printf("s1 = [%s]  s2 = [%s]\n", s1, s2);
  printf("default value: %p\n", strstr(s1, s2));
  printf("my value: %p\n\n", mystrstr(s1, s2));

  char arr[70]="aloha";
  char * s3=arr;
  char * s4="ciao";

  printf("s3: [%s]\ns4: [%s]\n",s3,s4);
  printf("Testing strcpy(s3,s4)\n");
  printf("strcpy: [%s]\n",strcpy(s3,s4));
  printf("mystrcpy: [%s]\n\n",mystrcpy(s3,s4));

  printf("s3: [%s]\ns4: [%s]\n",s3,s4);
  printf("Testing strncpy(s3,\"archipelago\",4)\n");
  printf("strncpy: [%s]\n",strncpy(s3,"archipelago",4));
  printf("mystrncpy: [%s]\n\n",mystrncpy(s3,"archipelago",4));

  printf("s3: [%s]\ns4: [%s]\n",s3,s4);
  printf("Testing strcat(s3,s4)\n");
  printf("strcat: [%s]\n",strcat(s3,s4));
  s3[8]=0;
  printf("mystrcat: [%s]\n\n",mystrcat(s3,s4));

  printf("s3: [%s]\ns4: [%s]\n",s3,s4);
  printf("Testing strncat(s3,s4,3)\n");
  printf("strncat: [%s]\n",strncat(s3,s4,3));
  s3[12]=0;
  printf("mystrncat: [%s]\n\n",mystrncat(s3,s4,3));
  return 0;
}
