#include <stdio.h>

void biggest() {
    int a, b, c;
    printf("\n Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c) {
        printf("The largest number is: \n%d", a);
    } else if (b >= a && b >= c) {
        printf("The largest number is: \n%d", b);
    } else {
        printf("The largest number is: %d \n", c);
    }

 //   return 0;
}
