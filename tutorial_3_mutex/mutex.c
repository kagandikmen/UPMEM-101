#include "defs.h"
#include "mutex.h"

#define UNDEFINED_VAL (-1)
int shared_variable = UNDEFINED_VAL;

MUTEX_INIT(my_mutex);

int main() {
    
    mutex_lock(my_mutex);

    if(shared_variable == UNDEFINED_VAL)
        shared_variable = 1 << me();

    mutex_unlock(my_mutex);

    return shared_variable;
}