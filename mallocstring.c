#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<cs50.h>

int main(void)
{
    char *s = get_string("s: ");

    char *t = malloc(strlen(s) + 1);

    strcpy(t, s);

    t[0] = toupper(t[0]);

    printf("s: %s\n", s);
    printf("t: %s\n", t);
}