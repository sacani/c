#include<stdio.h>
int help(FILE*o){
fprintf(o,"help: this help\n");
fprintf(o,"quit: exit\n");
fprintf(o,"hello: say hello\n");
return 0;
}
