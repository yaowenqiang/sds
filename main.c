#include <stdio.h>
#include "sds.h"
#include "sds.c"
#include "sdsalloc.h"

void main() {
    sds mystring  = sdsnew("Hello world");
    printf("%s\n", mystring);
    printf("hello world");
}
