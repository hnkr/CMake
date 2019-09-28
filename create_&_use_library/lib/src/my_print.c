#include "my_print.h"
#include <stdio.h>

void my_print(const char * buf_)
{
    if (!buf_) return;
    printf("mylib_print:%s\r\n", buf_);

}




