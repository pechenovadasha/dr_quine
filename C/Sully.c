#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define NAME "Sully_%d.c"
#define START "/usr/bin/cc -Wall -Werror -Wextra -I /usr/include -o Sully_%d Sully_%d.c && ./Sully_%d"
#define PROGRAM "#include <unistd.h>%c#include <stdio.h>%c#include <stdlib.h>%c%c#define NAME %c%s%c%c#define START %c%s%c%c#define PROGRAM %c%s%c%c%cint main()%c{%c	int i = %d;%c	char name[10];%c	char command[100];%c	FILE *fd;%c%c	if (i > 0)%c	{%c		i--;%c		sprintf(name, NAME, i);%c		sprintf(command, START, i, i, i);%c		fd = fopen(name, %cw%c);%c		if (fd == NULL)%c			return (0);%c		fprintf(fd, PROGRAM, 10, 10, 10, 10, 34, NAME, 34, 10, 34, START, 34, 10, 34, PROGRAM, 34, 10, 10, 10, 10, i, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 34, 34, 10, 10, 10, 10, 10, 10, 10, 10);%c		fclose(fd);%c		system(command);%c	}%c	return(0);%c}"

int main()
{
	int i = 5;
	char name[10];
	char command[100];
	FILE *fd;

	if (i > 0)
	{
		i--;
		sprintf(name, NAME, i);
		sprintf(command, START, i, i, i);
		fd = fopen(name, "w");
		if (fd == NULL)
			return (0);
		fprintf(fd, PROGRAM, 10, 10, 10, 10, 34, NAME, 34, 10, 34, START, 34, 10, 34, PROGRAM, 34, 10, 10, 10, 10, i, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 34, 34, 10, 10, 10, 10, 10, 10, 10, 10);
		fclose(fd);
		system(command);
	}
	return(0);
}