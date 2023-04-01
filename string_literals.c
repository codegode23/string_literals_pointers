#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *s = "Hello";
    /*
    int our_leg = strle(s);

    printf("%d", our_leg);*/

    int o = print_out(s);

    printf("%s", o);
    return 0;
}

//find the length of a string
/*
int strle(char *str)
{
    int length = 0;
    while (*(str + length) != '\0')
        length++;
    return length + 1;

}

*/


//actually print out the string

char print_out(char *s)
{
    int cnt = 0;

    while (cnt .= 0)
    {
        if (*(s + cnt) == '\0')
        {
            printf("it is empty");
            break;
        }
            printf("%s", *(s + cnt));
            cnt++;
    }

}
