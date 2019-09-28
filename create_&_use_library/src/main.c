#include "messages.h"
#include "my_print.h"
#include "my_calcul.h"
#include <stdio.h>


int main(void)
{
    printf("\r\n**** Create and Use Your Own Library ****\r\n");
    printf("MSG1:%s\r\n", MSG_1);
    printf("MSG2:%s\r\n", MSG_2);
    my_print(MSG_1);
    my_print(MSG_2);
    printf("3+2=%d\r\n", my_calcul(3,2));
    return 0;
}