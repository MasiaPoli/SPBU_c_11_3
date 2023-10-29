#include <stdio.h>
#include <stdlib.h>
#include "name_digits.h"
int main()
{
    printf("Write a number and a base, we will write its digits in right order twice\n");
    int x, p;
    scanf("%d%d", &x, &p);
    nd_order_i(x, p);
    nd_order_r(x, p, -1);
    printf("Write a number and a base, we will write its digits in right reverse order twice\n");
    scanf("%d%d", &x, &p);
    nd_antiorder_i(x, p);
    nd_antiorder_r(x, p);
    return 0;
}
