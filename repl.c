#include <stdio.h>
#include <stdlib.h>
#include <editline/readline.h>


int main(int argc, char** argv) {

    puts("YAL Version 0.0.0.0.1");
    puts("Yet Another Lisp");
    puts("Press Ctl+C to Exit\n");

    while (1) {
        char* input = readline("yal> ");
        add_history(input);
        printf("No you're a %s\n", input);
        free(input);
    }

    return 0;
}
