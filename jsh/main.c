//prueba
#include<string.h>
#include "read_cmd.h"
#include "execute.h"
int main()
{
const char*c;
while(strcmp(c=read_cmd(),"exit")!=0)
 {
 execute(c);
 }
return 0;
}

