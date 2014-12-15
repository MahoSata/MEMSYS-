#include<stdio.h>

char make_cat(char* s1,const char*s2){
 char* ret = s1;
 while (*s1 != '\0'){
  s1++;
 }
 while (*s2 != '\0'){
  *s1 = *s2;
  s1++;
  s2++;
 }
  return ret;
}

int main(void){
 char s1[] = "thank";
 char s2[] = "you";

 make_cat(s1,s2);
 printf("%s\n", s1);

 return 0;
}

