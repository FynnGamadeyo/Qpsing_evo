#ifndef sema_HH
#define sema_HH 1

#include <semaphore.h>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
// Einkapselung der POSIX-Semaphoren.




class Sema {
sem_t semaa;
enum { RCODE_OK = 0 };
static void check(int rcode, char *s) {
if (rcode != 0) {
perror(s);
exit(255);
}
}
public:
Sema(int initial_count, int shared = 1) {
check(sem_init(&semaa, shared, initial_count), (char *)"sem_init");
}
~Sema(){
check(sem_destroy(&semaa), (char *)"sem_destroy");
}
void P() {
check(sem_wait(&semaa), (char *)"sem_wait");
}
void V() {
check(sem_post(&semaa), (char *)"sem_post");
}
};

#endif