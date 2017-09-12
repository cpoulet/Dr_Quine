#include <stdio.h>

//This is an outside nice comment

char *s="#include <stdio.h>%c%c//This is an outside nice comment%c%cchar *s=%c%s%c;%c%cint magic()%c{%creturn(34);%c}%c%cint main()%c{%c//This is an inside nice comment%cprintf(s,10,10,10,10,magic(),s,magic(),10,10,10,10,10,10,10,10,10,10,10,10,10);%creturn (0);%c}%c";

int magic()
{
return(34);
}

int main()
{
//This is an inside nice comment
printf(s,10,10,10,10,magic(),s,magic(),10,10,10,10,10,10,10,10,10,10,10,10,10);
return (0);
}
