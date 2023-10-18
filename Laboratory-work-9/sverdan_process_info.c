#include <stdio.h>
#include <unistd.h>

int main(void) {
	printf("Group PID=%d\n", getpgrp());
	printf("PID=%d\n", getpid());
	printf("PPID=%d\n", getppid());
	printf("User ID=%d\n", getuid());
	printf("Group ID=%d\n", getgid());

	return 0;
}
