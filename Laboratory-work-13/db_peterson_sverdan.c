#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

int flag[2];
int turn;

struct calculator {
    int cr_id;
    char model[20];
    int year;
};

struct calculator calculator[2] = { { 1, "calculator", 2049 } };

int main(void) {
    pthread_t T1_thread, T2_thread;
    void *T1(), *T2();
    pthread_create(&T1_thread, NULL, T1, NULL);
    pthread_create(&T2_thread, NULL, T2, NULL);
    pthread_join(T1_thread, NULL);
    pthread_join(T2_thread, NULL);
    return 0;
}

void *T1() {
    for(int i = 1; i <= 3; i++) {
        flag[0] = 1;
        turn = 1;
        while (flag[1] == 1 && turn == 1);
        sleep(2);
        printf("T1: Critical Region.\n");
        printf("T1: Read[year] = %d\n", calculator[0].year);
        calculator[0].year = 2077;
        printf("T1: Write[year] = %d\n", calculator[0].year);
        flag[0] = 0;
        printf("T1: Noncritical Region.\n");
    }
}

void *T2() {
    for(int i = 1; i <= 3; i++) {
        sleep(1);
        flag[1] = 1;
        turn = 0;
        while (flag[0] == 1 && turn == 0);
        sleep(3);
        printf("T2: Critical Region.\n");
        printf("T2: Read[year] = %d\n", calculator[0].year);
        calculator[0].year = 2098;
        printf("T2: Write[year] = %d\n", calculator[0].year);
        flag[1] = 0;
        printf("T2: Noncritical Region.\n");
   }
}


