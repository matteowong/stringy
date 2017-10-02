#include <stdio.h>
#include <string.h>


int mystrlen(char *a){
    int output = 0;
    while (*(a++)){
        output++;
    }
    return output;
}

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

int main(){
    char *s1 = "ab";
    char *s2 = "abc";
    int real = strcmp(s1, s2);
    int my = mystrcmp(s1, s2);
    printf("real: %d\nmine: %d", real, my); 
}
