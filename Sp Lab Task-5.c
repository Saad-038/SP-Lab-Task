//Write a program to check if a character is a vowel or a consonant using the switch-case statement.

#include<stdio.h>
int main()
{
    char vowelCons;

    printf("enter a single character= ");
    scanf("%c",&vowelCons);

    switch(vowelCons)
    {
    case 'a':
    printf("This is a Vowel\n");

    case 'e':
    printf("This is a Vowel\n");

    case 'i':
    printf("This is a Vowel\n");
    break;

    case 'o':
    printf("This is a Vowel\n");
    break;

    case 'u':
    printf("This is a Vowel\n");
    break;

    case 'A':
    printf("This is a Vowel\n");

    case 'E':
    printf("This is a Vowel\n");

    case 'I':
    printf("This is a Vowel\n");
    break;

    case 'O':
    printf("This is a Vowel\n");
    break;

    case 'U':
    printf("This is a Vowel\n");
    break;

    default:
    printf("This is Consonant\n");

    }
    return 0;
}

