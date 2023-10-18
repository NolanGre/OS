#include <stdio.h>
#include <unistd.h>

int main(void) {
	char * tail_args[] = {"tail", "--line=3", "/etc/group", NULL};
	pid_t pid = fork();
	if ( pid != 0 ) {
		printf("Parent PID=%d, child PID= %d\n", getpgrp(), pid);
		sleep(1);
		execv("/bin/tail", tail_args);
		fprintf(stderr, "Command error\n");
	}
	else
	printf("Child PID=%d, Parent PID=%d\n", getpid(), getppid());

	return 0;
}
