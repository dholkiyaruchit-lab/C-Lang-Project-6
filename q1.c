#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100];
    int length = 0, Palindrome = 1;

    printf("Enter any string: ");
    scanf("%s", str1);

    for (int i = 0; str1[i] != '\0'; i++)
    {
        length++;
    }
    int i;
    for (i = 0; i < length / 2; i++)
    {
        if (str1[i] != str1[length - i - 1])
        {
            Palindrome = 0;
            break;
        }
    }
    if (Palindrome)
        printf("The given string is a Palindrome.\n");
    else
        printf("The given string is NOT a Palindrome.\n");

    return 0;
}