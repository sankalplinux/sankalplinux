
#include<stdio.h>
#include<unistd.h>

int main(void){
	printf("my Process pid =%d\n", getpid());  //getpid will give PID of 							current process
	printf("my parent pid=%d\n", getppid());//getppid will give parent 			PID...bash shell  Bourne 							
	printf("linux kernel\n");	
	while(1);//waiting...infi loop  w/o terminating
	return 0;//  normal termination  (ctrl + c)
		 // abnormal termination===  
} 


	//$ gcc 1.c   -0     1 
	//ex file 1
	//$./1	ne 		shall  pro  == bash  bourne again shall process
	//shell Bash--$./1 -----process====>parent pro 1===bash pid
	//init process pid=1//parent 
	//$ ps -elf      all current process


	//   getpid();===>  calling //current pro id
	//   getppid();==> curr pro parent id

	//(bash)pid$  ./one



