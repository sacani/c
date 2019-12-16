#include<stdio.h>
#include "repl.h"
int main(int argc,char**argv){
switch(argc){
  case 1:
    repl(stdin,stdout);
    break;
  case 2:
    repl(fopen(argv[1],"r"),stdout);
    break;
}
return 0;
}
