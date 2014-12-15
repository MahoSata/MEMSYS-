#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int data[SIZE];
int n,i,w,m;

int main(){
printf("before\n");
 srand((unsigned) time(NULL));
 for(n=0;n<SIZE;n++){
 data[n] = rand()%100+1;
 printf("%d\t", data[n]);
 }
 printf("\n");

for(m=(SIZE-1)^2;m>1;m--){
 for(i=0;i<SIZE-1; i++){
  if(data[i]>data[i+1]){
   w = data[i];
   data[i] = data[i+1];
   data[i+1] = w;
  }
 }
 }
 printf("after\n");
  for(i=0;i<10;i++){
   printf("%d\t", data[i]);
  }
printf("\n");
}
