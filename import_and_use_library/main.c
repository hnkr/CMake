
#include "my_print.h"
#include "my_calcul.h"
#include <stdio.h>


int main(void)
{
    my_print("\r\n**** Import and Use Your Library ****");
    printf("3+2=%d\r\n", my_calcul(3,2));
    return 0;
}