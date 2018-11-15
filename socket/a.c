#include<sys/socket.h>
#include<unistd.h>
#include<arpa/inet.h>
#include<string.h>
main()
{
int o;
o=socket(PF_INET,SOCK_STREAM,0);
struct sockaddr_in s;
s.sin_family=AF_INET;
inet_pton(AF_INET,"127.0.0.1",&s.sin_addr);
s.sin_port=htons(8888);
connect(o,(struct sockaddr*)&s,sizeof(s));
send(o,"hello",strlen("hello"),0);
close(o);
}
