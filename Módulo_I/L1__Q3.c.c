#include <stdio.h>

int a = 1, b = 1, c = 1, d = 0, e = 1;
int meio; 

int main(void) {

     if (a != b && a != c) printf("A");
else if (b != c && b != e) printf("B");
else if (c != a && c != b) printf("C");
else if (e != a && e != b) printf("E");
else if (d != a && d != b) printf("D");
} //main