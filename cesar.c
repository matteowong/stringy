#include <stdio.h>
#include <string.h>


int mystrlen(char *a){
  int output = 0;
  while (*(a++)){
    output++;
  }
  return output;
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
  printf("my value: %p\n", mystrstr(s1, s2));
}
