#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mystr_headers.h"


int mystrlen(char *a){
  int output = 0;
  while (*(a++)){
    output++;
  }
  return output;
}


char * mystrcpy( char *dest, char *source ) {
  int src_count=0;
  while (source[src_count]) {
    dest[src_count]=source[src_count];
    src_count++;
  }
  dest[src_count]=0;
  return dest;
}

char * mystrncpy( char *dest, char *source, int n ) {
  int src_count=0;
  while (src_count<n) {
    dest[src_count]=source[src_count];
    src_count++;
  }
  return dest;
}

char * mystrcat(char * dest,char * source) {
  int src_count=0;
  int dest_len=mystrlen(dest);
  while (source[src_count]) {
    dest[dest_len+src_count]=source[src_count];
    src_count++;
  }
  dest[dest_len+src_count]=0;
  return dest;
}

char * mystrncat(char * dest,char * source, int n) {
  int src_count=0;
  int dest_len=mystrlen(dest);
  while (src_count<n) {
    dest[dest_len+src_count]=source[src_count];
    src_count++;
  }
  return dest;
}

// strcmp
int mystrcmp(char *s1, char *s2){
  int i = 0;
  while (s1[i] != 0 && s2[i] != 0){
    int diff = s1[i] - s2[i];
    if (diff == 0){
      i++;
    }
    else {
      return diff;
    }
  }
  if (mystrlen(s1) == mystrlen(s2)){
    return 0;
  }
  else {
    return (mystrlen(s1) - mystrlen(s2));
  }
}

// strchr
char * mystrchr(char *s, char c){
  char *output = s;
  while (*output){
    if (*output == c){
      return output;
    }
    output++;
  }
  return 0;
}

// strstr
char * mystrstr(char *s1, char * s2){
  char *output = mystrchr(s1, s2[0]);
  if (output){
    char *needleI = &s2[1];
    char *haystackI = output;
    haystackI++;
    while (*needleI && *haystackI){
      if (*haystackI != *needleI){
        return 0;
      }
      haystackI++;
      needleI++;
    }
    if (!*haystackI){
      return 0;
    }
    else {
      return output;
    }
  }
  else {
    return 0;
  }
}


