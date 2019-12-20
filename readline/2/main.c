#include<stdio.h>
int main(int a,char**v){
FILE*i;
char ch;
char s[1024];
int x=0;
switch(a){
case 1:i=stdin;break;
case 2:i=fopen(v[1],"r");break;
}
while((ch=getc(i))!='\n'){
  s[x]=ch; 
  x++;
}
s[x]='\0';
fprintf(stdout,"%s\n",s);
return 0;
}
