#include<stdio.h>
void readline(FILE*i,char*b){
char ch;
int x=0;
while((ch=getc(i))!='\n')b[x++]=ch;
b[x]='\0';
}
