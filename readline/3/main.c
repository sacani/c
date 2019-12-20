#include<stdio.h>
#include "readline.h"
int main(int a,char**v){
FILE*i;
char ch;
char s[1024];
int x=0;
switch(a){
case 1:i=stdin;break;
case 2:i=fopen(v[1],"r");break;
}
readline(i,s);
fprintf(stdout,"%s\n",s);
return 0;
}
