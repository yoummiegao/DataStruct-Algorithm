#include "pthread.h"

typedef struct {
// User defined data may be declared here.
pthread_mutex_t first_lock;
pthread_mutex_t next_lock;

} Foo;

Foo* fooCreate() {
Foo* obj = (Foo*) malloc(sizeof(Foo));
pthread_mutex_init(&obj->first_lock,NULL);
pthread_mutex_init(&obj->next_lock,NULL);
pthread_mutex_lock(&obj->first_lock);
pthread_mutex_lock(&obj->next_lock);
// Initialize user defined data here.
return obj;
}

void first(Foo* obj) {

// printFirst() outputs "first". Do not change or remove this line.
printFirst();
pthread_mutex_unlock(&obj->first_lock);
}

void second(Foo* obj) {
pthread_mutex_lock(&obj->first_lock);
// printSecond() outputs "second". Do not change or remove this line.
printSecond();
pthread_mutex_unlock(&obj->next_lock);
}

void third(Foo* obj) {
pthread_mutex_lock(&obj->next_lock);
// printThird() outputs "third". Do not change or remove this line.
printThird();
}

void fooFree(Foo* obj) {
// User defined data may be cleaned up here.
free(obj);
}