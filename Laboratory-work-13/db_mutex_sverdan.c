#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <errno.h>

static pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

struct calculator {
    int cr_id;
    char model[20];
    int year;
};

struct calculator calculator[2] = { { 1, "calculator", 2049 } };

void main(void) {
    pthread_t T1_thread, T2_thread;
    void *T1(), *T2();
    pthread_create(&T1_thread, NULL, T1, NULL);
    pthread_create(&T2_thread, NULL, T2, NULL);
    pthread_join(T1_thread, NULL);
    pthread_join(T2_thread, NULL);
}

void *T1() {
    for (int i = 1; i <= 3; i++) {
        pthread_mutex_lock(&mutex);
        printf("T1: Critical Region\n");
        printf("T1: Read[year] = %d\n", calculator[0].year);
        sleep(1);
        calculator[0].year = 2077;
        printf("T1: Write[year] = %d\n", calculator[0].year);
        pthread_mutex_unlock(&mutex);
        printf("T1: Noncritical Region\n");
        sleep(1);
    }
}

void *T2() {
    sleep(1);
    for (int i = 1; i <= 3; i++) {
        pthread_mutex_lock(&mutex);
        printf("T2: Critical Region\n");
        printf("T2: Read[year] = %d\n", calculator[0].year);
        sleep(1);
        calculator[0].year = 2098;
        printf("T2: Write[year] = %d\n", calculator[0].year);
        pthread_mutex_unlock(&mutex);
        printf("T2: Noncritical Region\n");
        sleep(1);
    }
}


