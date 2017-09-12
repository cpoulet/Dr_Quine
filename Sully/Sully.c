#include <stdio.h>
#include <unistd.h>
#define SULLY "#include <stdio.h>%c#include <unistd.h>%c#define SULLY %c%s%c%cint main()%c{%cint i = %d;%cchar str[16];%cif(i<=0)return(0);%csprintf(str,%cSully_%cd.c%c,--i);%cfprintf(fopen(str,%cw%c),SULLY,10,10,34,SULLY,34,10,10,10,i,10,10,10,34,37,34,10,34,34,10,10,10);%creturn(0);%c}%c"
int main()
{
int i = 1;
char str[16];
if(i<=0)return(0);
sprintf(str,"Sully_%d.c",--i);
FILE *fp;
fp = fopen(str,"w");
fprintf(fp,SULLY,10,10,34,SULLY,34,10,10,10,i,10,10,10,34,37,34,10,34,34,10,10,10);
fclose(fp);
char *args[] = {"gcc",str,"-o","test",0};
execv("/usr/bin/gcc", args);
printf("HELLO WORLD\n");
return(0);
}
