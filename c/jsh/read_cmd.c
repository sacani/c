#include<stdio.h>
const char* read_cmd()
{
static char c[1024];
fscanf(stdin,"%s",&c);
return c;
}
