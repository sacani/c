#include<stdio.h>
void help(){
fprintf(stdout,"quit: exit\n");
fprintf(stdout,"+ a b ...:add a, b, ...\n");
fprintf(stdout,"* a b ...:multiply a, b, ...\n");
fprintf(stdout,"/ a b ...:split a, b, ...\n");
fprintf(stdout,"^ a b ...:a exp b exp ...\n");
}
