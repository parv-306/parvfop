#include <stdio.h>
#include <string.h>

int main() {

    char str1[100];
    char str2[100];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    int result = strcmp(str1, str2);

    if(result == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");

    return 0;
}