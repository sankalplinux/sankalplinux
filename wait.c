#include<stdio.h>
#include<sys/types.h>
#include<sys/wait.h>

int main(void){
	pid_t pid1 ;// pid_t data types for PIDs (they internally interegr data 			types),      size_t/mode_t---int data types    
	pid1=fork();
	
	if(pid1==0) // child
	{
		sleep(5);
		printf("I am child with delay of 5 sec and my child pro pid=%d \n", 			getpid());
	}
	else{
		int pid2;//store return value from wait()
		printf("I am parent pro pid=%d \n",	getpid());	
		pid2  =  wait(0);//on return pid of the terminated child---exit 					status  of  termtd child
		//sleep(2);
		printf("parent saying..child %d exited/terminated normally\n",pid2);
		printf("I am parent process pro pid=%d \n",getpid());

	 }
	return 0;
}//  
