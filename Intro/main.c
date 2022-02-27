#include <stdio.h>
#include <math.h>

void int_remainder(int first, int second);
void digits(unsigned number);
void digitslg(unsigned long number);
int main() {
    digitslg(123);
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

void digitslg(unsigned long number) {
    double digits = 0;
    for (unsigned long i = 1; i <= number; i++) {
        digits += log10(i);
    }
    printf("Digits number of %lu! e %lu.\n", number,(unsigned long)digits+1);

}





