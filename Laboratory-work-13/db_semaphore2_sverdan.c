#include <fcntl.h>
#include <pthread.h>
#include <semaphore.h>
#include <stdio.h>
#include <unistd.h>

#define SEMAPHORE_NAME "/sverdan"

struct calculator {
    int cr_id;
    char model[20];
    int year;
};
struct calculator calculator[2] = { { 1, "calculator", 2049 } };

int main(int argc, char ** argv) {
    sem_t *sem;
    pthread_t T1_thread, T2_thread;
    void *T1(), *T2();
    if ((sem = sem_open(SEMAPHORE_NAME, O_CREAT, 0660, 1)) == SEM_FAILED) {
        fprintf(stderr, "sem_open error");
        return 1;
    }
    pthread_create(&T1_thread, NULL, T1, sem);
    pthread_create(&T2_thread, NULL, T2, sem);
    pthread_join(T1_thread, NULL);
    pthread_join(T2_thread, NULL);
    if (sem_close(sem) < 0) {
       fprintf(stderr, "sem_close error");
       return 1;
    }
    return 0;
}

void *T1(sem_t *sem) {
    for (int i = 1; i <= 5; i++) {
        if (sem_wait(sem) != 0) {
           fprintf(stderr, "T1: sem_wait error!\n");
        }
        printf("T1: Critical Region.\n");
        sleep(1);
        printf("T1: Read[year] = %d\n", calculator[0].year);
        sleep(1);
        calculator[0].year = 2077;
        printf("T1: Write[year] = %d\n", calculator[0].year);
        sleep(1);
        if (sem_post(sem) != 0) {
           fprintf(stderr, "T1: sem_post error!\n");
        }
        printf("T1: Noncritical Region.\n");
        sleep(1);
   }
}

void *T2(sem_t *sem) {
    sleep(1);
    for (int i = 1; i <= 5; i++) {
        if (sem_wait(sem) != 0) {
           fprintf(stderr, "T2: sem_wait error!\n");
        }
        printf("T2: Critical Region.\n");
        sleep(1);
        printf("T2: Read[year] = %d\n", calculator[0].year);
        sleep(1);
        calculator[0].year = 2098;
        printf("T2: Write[year] = %d\n", calculator[0].year);
        sleep(1);
        if (sem_post(sem) != 0) {
           fprintf(stderr, "T2: sem_post error!\n");
        }
        printf("T2: Noncritical Region.\n");
        sleep(1);
    }
}


