#include <stdio.h>
void int_remainder(int first, int second);
void digits(unsigned number);
int main() {
    digits(76534);
    return 0;
}

void int_remainder(int first, int second){
    int integer = first/second;
    int remainder = first%second;
    printf("Integer Part: %d, Remainder: %d\n", integer, remainder);
}

void digits(unsigned number){
    unsigned temp = number;
    unsigned digits;
    for(digits=0; temp>0;temp/=10, digits++);
    printf("Digits number in %u is %u\n", number, digits);
}



