/*
Author: Marcus Therkildsen

This script is intended to be crackable and is intentially constructed the way it is. Yes, I now it's contrieved.

Deliberately made contrieved function calls to easier highlight them in the disassembly. 

gcc main.c

gdb ./a.out
b *main
layout asm
run
ni (single step(over))
si (step into)
*/

#include <stdio.h>

int check_license(){
    // This emulates a simple license check
    return 0;
}

void print_license_ok(){
    printf("License verified - OK\n");
}

void print_license_wrong(){
    printf("*** ERROR *** Program not allowed to run on this computer\n");
}

void call_actual_program(){
    printf("Hello from the 'actual program'\n");
}

int main(int argc, char *argv[]) {

    const int license_ok = check_license();

    if (license_ok==1)
    {
        print_license_ok();
        call_actual_program();
    }
    else
    {
        print_license_wrong();
        // Don't run program
    }

    return 0;
}