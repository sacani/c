#include<stdio.h>
int main(int c,char**v){
char ch;
char s[1024];
int i=0;
while((ch=getc(stdin))!='\n'){
  s[i]=ch;
  i++;
}
s[i]='\0';
fprintf(stdout,"%s\n",s);
return 0;
}
