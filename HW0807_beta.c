#include <stdint.h>
#include <unistd.h>
#include <stdio.h>

static inline uintptr_t align_up(uintptr_t sz, size_t alignment)
{
    uintptr_t mask = alignment - 1;
    if ((alignment & mask) == 0) {  /* power of two? */
        return (sz + mask) & (~mask);
    }
    return (((sz + mask) / alignment) * alignment);
}

int main(int argc, const char * argv[]) {
    ///*
    //Beta
    printf("%lu\n", align_up(120, 8));
    printf("%lu\n", align_up(121, 8));
    printf("%lu\n", align_up(122, 8));
    printf("%lu\n", align_up(123, 8));
    printf("%lu\n", align_up(125, 8));
    printf("%lu\n", align_up(126, 8));
    printf("%lu\n", align_up(127, 8));
    printf("%lu\n", align_up(128, 8));
    printf("%lu\n", align_up(129, 8));
    //*/
    
    return 0;
}