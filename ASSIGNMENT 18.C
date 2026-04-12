
#include <stdio.h>
#include <string.h>
#define MAX 100 
void reverseString(char str[]) {
    int len = strlen(str);
    char temp;
    for (int i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}
int isPalindrome(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return 0; // Not a palindrome
        }
    }
    return 1; // Is a palindrome
}
int main() {
    char str1[MAX], str2[MAX];
    printf("Enter a string: ");
    scanf("%s", str1);
    printf("Length of the string: %lu\n", strlen(str1));
    reverseString(str1);
    printf("Reversed string: %s\n", str1);
    printf("Enter another string for comparison: ");
    scanf("%s", str2);
    if (strcmp(str1, str2) == 0) {
        printf("Strings are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }
    if (isPalindrome(str1)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
    printf("Enter a substring to check: ");
    char substring[MAX];
    scanf("%s", substring);
    if (strstr(str1, substring) != NULL) {
        printf("The substring is present in the string.\n");
    } else {
        printf("The substring is not present in the string.\n");
    }
    return 0;
}