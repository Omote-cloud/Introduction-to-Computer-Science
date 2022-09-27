#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main(void)
{
    char *s = get_string("S: ");
    char *t = get_string("T: ");

    printf("%p\n", s);
    printf("%p\n", t);
}