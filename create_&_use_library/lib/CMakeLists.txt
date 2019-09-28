

set(my_lib_SRCS
    src/my_print.c
    src/my_calcul.c
)

add_library(mylib STATIC ${my_lib_SRCS})
target_include_directories(mylib PUBLIC inc)





