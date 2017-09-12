#include <stdio.h>
#define NL 10
#define GRACE "#include <stdio.h>%c#define NL 10%c#define GRACE %c%s%c%c#define FT(x,y) int main(){fprintf(fopen(%cGrace_kid.c%c, %cw%c),GRACE,x,x,y,GRACE,y,x,y,y,y,y,x,x,x,x,x);return(0);}%c/*%cLa fleur en bouquet fane, et jamais ne renaît !%c*/%cFT(NL,34)%c"
#define FT(x,y) int main(){fprintf(fopen("Grace_kid.c", "w"),GRACE,x,x,y,GRACE,y,x,y,y,y,y,x,x,x,x,x);return(0);}
/*
La fleur en bouquet fane, et jamais ne renaît !
*/
FT(NL,34)
