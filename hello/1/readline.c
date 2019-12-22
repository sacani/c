#include<stdio.h>
int readline(FILE*i,char*b){
char ch;
int x=0;
while((ch=getc(i))!='\n'){
  b[x]=ch;
  x++;
}
b[x]='\0';
return 0;
}
