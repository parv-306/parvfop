
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
int main() {
    char str1[MAX], str2[MAX];
    int choice;
    while (1) {
        printf("\nMenu:\n");
        printf("1. Reverse a string\n");
        printf("2. Concatenate two strings\n");
        printf("3. Compare two strings\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");      
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter a string: ");
                scanf("%s", str1);
                reverseString(str1);
                printf("Reversed string: %s\n", str1);
                break;
            case 2:
                printf("Enter first string: ");
                scanf("%s", str1);
                printf("Enter second string: ");
                scanf("%s", str2);
                strcat(str1, str2);
                printf("Concatenated string: %s\n", str1);
                break;
            case 3:
                printf("Enter first string: ");
                scanf("%s", str1);
                printf("Enter second string: ");
                scanf("%s", str2);  
                if (strcmp(str1, str2) == 0) {
                    printf("Strings are equal.\n");
                } else {
                    printf("Strings are not equal.\n");
                }
                break;
            case 4:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}