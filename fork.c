#include<stdio.h>
#include<unistd.h>

int main(void){
	int pid_1;

	//pid_t fork(void);

	printf("current process pid = %d\n", getpid());
	
	pid_1 = fork();//  child id sent parent
			// 0 return child pro
	
	if(pid_1==0){
		
		//sleep(5);
		printf("new child Process pid =%d\n", getpid());
		printf("new child parent Process ppid =%d\n", getppid());
	}
	else {
		//sleep(3);
		printf("parent process pid = %d\n", getpid());
		printf("parents parent process ppid = %d\n", getppid());//bash
	}
	//while(1);
	return 0;
}
	// which process child or parent ====>  schldr and load on system
	//   schdlr parent exec  firsdt===>  diff schdle on emd dev 

		//parent(suspended---till child executes and termnates--parent is 			//resumed) and child


