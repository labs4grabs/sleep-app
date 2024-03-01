// sleep.c
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    if (argc != 2) {
        return 1;
    }
    unsigned int seconds = atoi(argv[1]);
    sleep(seconds);
    return 0;
}
