#include <unistd.h>
#include <stdio.h>
/*
	one comment
*/

#define FILE_NAME "Grace_kid.c"
#define PROGRAM "#include <unistd.h>%c#include <stdio.h>%c/*%c	one comment%c*/%c%c#define FILE_NAME %cGrace_kid.c%c%c#define PROGRAM %c%s%c%c#define BEGIN(name)int main(){ FILE *fd; fd = fopen(name, %cw%c); if(fd == NULL){return(0);} fprintf(fd, PROGRAM, 10, 10, 10, 10, 10, 10, 34, 34, 10, 34, PROGRAM, 34, 10, 34, 34,10, 10); fclose(fd); return(0);}%c%cBEGIN(FILE_NAME)"
#define BEGIN(name)int main(){ FILE *fd; fd = fopen(name, "w"); if(fd == NULL){return(0);} fprintf(fd, PROGRAM, 10, 10, 10, 10, 10, 10, 34, 34, 10, 34, PROGRAM, 34, 10, 34, 34,10, 10); fclose(fd); return(0);}

BEGIN(FILE_NAME)