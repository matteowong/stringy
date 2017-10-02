#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mystrlen(char * s) {
  int ret=0;
  while (s[ret]){
    ret++;
  }
  return ret;
}

char * mystrcpy( char *dest, char *source ) {
  int src_count=0;
  while (source[src_count])
    dest[src_count]=source[src_count++];
  dest[src_count]=0;
  return dest;
}

char * mystrcat(char * dest,char * source) {
  int src_count=0;
  int dest_len=mystrlen(dest);
  while (source[src_count])
    dest[dest_len+src_count]=source[src_count++];
  dest[dest_len+src_count]=0;
  return dest;
}

char * strreset(char * s1){
  s1[0]='a';
  s1[1]='l';
  s1[2]='o';
  s1[3]='h';
  s1[4]='a';
  s1[5]=0;
  return s1;
}

int main() {

  char arr[70]="aloha";
  char * s1=arr;
  char * s2="ciao";

  printf("s1: [aloha]\ns2: [ciao]\n\n");

  printf("Testing strcpy(s1,s2)\n");
  printf("strcpy: [%s]\n",strcpy(s1,s2));
  strreset(s1);
  printf("mystrcpy: [%s]\n\n",mystrcpy(s1,s2));

  strreset(s1);
  printf("Testing strcat(s1,s2)\n");
  printf("strcat: [%s]\n",strcat(s1,s2));
  printf("mystrcat: [%s]\n",mystrcat(s1,s2));

  return 0;
}
