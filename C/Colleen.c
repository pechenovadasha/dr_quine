#include <stdio.h>
/*
	the comments outside of the program
*/
#define LINE "#include <stdio.h>%c/*%c	the comments outside of the program%c*/%c#define LINE %c%s%c%c%cvoid colleen()%c{%c	printf(LINE, 10,10,10,10,34,LINE, 34,10,10,10,10,10,10,10,10,10,10,10,10,10,10);%c}%c%cint main()%c{%c/*%c	comment inside main%c*/%c	colleen();%c	return(0);%c}"

void colleen()
{
	printf(LINE, 10,10,10,10,34,LINE, 34,10,10,10,10,10,10,10,10,10,10,10,10,10,10);
}

int main()
{
/*
	comment inside main
*/
	colleen();
	return(0);
}