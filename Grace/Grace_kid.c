#include <stdio.h>
#include <fcntl.h>
#define NL 10
#define GRACE "#include <stdio.h>%c#include <fcntl.h>%c#define NL 10%c#define GRACE %c%s%c%c#define FT(x,y) int main(){int fd=open(%cGrace_kid.c%c,O_WRONLY|O_CREAT|O_TRUNC,S_IRWXU);dprintf(fd,GRACE,x,x,x,y,GRACE,y,x,y,y,x,x,x,x,x);return(0);}%c/*%cLa fleur en bouquet fane, et jamais ne renaît !%c*/%cFT(NL,34)%c"
#define FT(x,y) int main(){int fd=open("Grace_kid.c",O_WRONLY|O_CREAT|O_TRUNC,S_IRWXU);dprintf(fd,GRACE,x,x,x,y,GRACE,y,x,y,y,x,x,x,x,x);return(0);}
/*
La fleur en bouquet fane, et jamais ne renaît !
*/
FT(NL,34)
