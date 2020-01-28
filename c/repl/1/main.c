#include<stdio.h>
#include<string.h>
int main(int argc,char**argv){
char b[1024];
do{
  fscanf(stdin,"%s",b); 
  fprintf(stdout,"%s\n",b);
}while(strcmp(b,"quit")!=0);
return 0;
}:
