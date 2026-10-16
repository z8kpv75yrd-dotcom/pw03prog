#include <stdio.h>
#include <string.h>

int main (void)
{
    char s1[20] = "SibSUTIS";
    printf("SIZEOF: %zu\n",
sizeof(s1));
    printf("STRLEN: %zu\n",
strlen(s1));
    printf("FREE_BYTES: %zu\n",
sizeof(s1) - strlen(s1) - 1);

    char s2[20] = "СибГУТИ";
    printf("SIZEOF: %zu\n",
sizeof(s2));
    printf("STRLEN: %zu\n",
strlen(s2));
    printf("FREE_BYTES: %zu\n",
sizeof(s2) - strlen(s2) - 1);

    return 0;
}