#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#define SULLY "#include <stdio.h>%c#include <stdlib.h>%c#include <unistd.h>%c#include <fcntl.h>%c#define SULLY %c%s%c%cint main()%c{%cint i = %d;%cchar str[16];char cmd[100];%cif(i<=0)return(0);%csprintf(str,%cSully_%cd.c%c,--i);sprintf(cmd,%c[ -e %cs ] && rm -f %cs;%c,str,str);system(cmd);%cint fp=open(str,O_WRONLY|O_CREAT|O_TRUNC,0777);%cdprintf(fp,SULLY,10,10,10,10,34,SULLY,34,10,10,10,i,10,10,10,34,37,34,34,37,37,34,10,10,10,10,34,37,34,34,37,37,37,37,34,10,10,10,10);close(fp);%cchar bin[16];%csprintf(bin,%cSully_%cd%c,i);sprintf(cmd,%c[ -e %cs ] && rm -f %cs;gcc %cs -o %cs%c,bin,bin,str,bin);%csystem(cmd);execv(bin,NULL);%creturn(0);%c}%c"
int main()
{
int i = 5;
char str[16];char cmd[100];
if(i<=0)return(0);
sprintf(str,"Sully_%d.c",--i);sprintf(cmd,"[ -e %s ] && rm -f %s;",str,str);system(cmd);
int fp=open(str,O_WRONLY|O_CREAT|O_TRUNC,0777);
dprintf(fp,SULLY,10,10,10,10,34,SULLY,34,10,10,10,i,10,10,10,34,37,34,34,37,37,34,10,10,10,10,34,37,34,34,37,37,37,37,34,10,10,10,10);close(fp);
char bin[16];
sprintf(bin,"Sully_%d",i);sprintf(cmd,"[ -e %s ] && rm -f %s;gcc %s -o %s",bin,bin,str,bin);
system(cmd);execv(bin,NULL);
return(0);
}
