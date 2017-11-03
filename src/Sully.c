#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#define ARG fp,SULLY,10,10,10,10,10,34,SULLY,34,10,10,10,i,10,10,10,34,37,34,34,37,37,34,10,10,10,34,37,34,34,37,37,37,37,34,10,34,37,34,34,37,37,34,10,10,10,34,37,34,34,37,37,37,37,34,10,10,10
#define SULLY "#include <stdio.h>%c#include <stdlib.h>%c#include <unistd.h>%c#include <fcntl.h>%c#define ARG fp,SULLY,10,10,10,10,10,34,SULLY,34,10,10,10,i,10,10,10,34,37,34,34,37,37,34,10,10,10,34,37,34,34,37,37,37,37,34,10,34,37,34,34,37,37,34,10,10,10,34,37,34,34,37,37,37,37,34,10,10,10%c#define SULLY %c%s%c%cint main()%c{%cint i = %d;%cchar fname[16];char cmd[100];char bin[16];%cif(i<1)return(0);%csprintf(fname,%cSully_%cd.c%c,i);sprintf(cmd,%c[ -e %cs ] && rm -f %cs;%c,fname,fname);system(cmd);%cint fp=open(fname,O_WRONLY|O_CREAT|O_TRUNC,0777);%cdprintf(ARG);close(fp);%csprintf(bin,%cSully_%cd%c,i);sprintf(cmd,%c[ -e %cs ] && rm -f %cs;gcc %cs -o %cs%c,bin,bin,fname,bin);system(cmd);%csprintf(fname,%cSully_%cd.c%c,--i);sprintf(cmd,%c[ -e %cs ] && rm -f %cs;%c,fname,fname);system(cmd);%cfp=open(fname,O_WRONLY|O_CREAT|O_TRUNC,0777);%cdprintf(ARG);close(fp);%csprintf(bin,%cSully_%cd%c,i);sprintf(cmd,%c[ -e %cs ] && rm -f %cs;gcc %cs -o %cs%c,bin,bin,fname,bin);system(cmd);execv(bin,NULL);%creturn(0);%c}%c"
int main()
{
int i = 5;
char fname[16];char cmd[100];char bin[16];
if(i<1)return(0);
sprintf(fname,"Sully_%d.c",i);sprintf(cmd,"[ -e %s ] && rm -f %s;",fname,fname);system(cmd);
int fp=open(fname,O_WRONLY|O_CREAT|O_TRUNC,0777);
dprintf(ARG);close(fp);
sprintf(bin,"Sully_%d",i);sprintf(cmd,"[ -e %s ] && rm -f %s;gcc %s -o %s",bin,bin,fname,bin);system(cmd);
sprintf(fname,"Sully_%d.c",--i);sprintf(cmd,"[ -e %s ] && rm -f %s;",fname,fname);system(cmd);
fp=open(fname,O_WRONLY|O_CREAT|O_TRUNC,0777);
dprintf(ARG);close(fp);
sprintf(bin,"Sully_%d",i);sprintf(cmd,"[ -e %s ] && rm -f %s;gcc %s -o %s",bin,bin,fname,bin);system(cmd);execv(bin,NULL);
return(0);
}
