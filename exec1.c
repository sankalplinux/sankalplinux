#include<stdio.h>
#include<unistd.h>

int main()
{
	//int ret;	
	printf("I am going to execute  an 'ls' program\n");
	
	execl("/bin/ls","ls","-lh", 0);// ls OS defined pg,
					// final arg 0 indicates end of string..

	printf("i executed ls program ");
	printf("i executed ls program ");
	printf("i executed ls program ");
}



	// execl("path of new pg to be loaded",  agrments as list of string, NULL);

	//execl()

	//success retuen 0   and on failure return -1
