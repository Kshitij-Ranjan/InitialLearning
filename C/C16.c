<<<<<<< Updated upstream
#include <stdio.h>
#include <stdbool.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    int converter = (int)ch;
    printf("The ASCII value of '%c' is %d.\n", ch, converter);
    bool check = (converter >= 65 && converter <= 90) || (converter >= 97 && converter <= 122);
    int check2 = (int)check;
    switch (check2)
    {
    case 1:
        switch (converter)
        {
            case 97: case 101: case 105: case 111: case 117: case 65: case 69: case 73: case 79: case 85: 
                printf("%c is a vowel.\n", ch);
                break;
            default:
                printf("%c is a consonant.\n", ch);
                break;
        }
        break; 
    default:
        printf("%c is not a letter.\n", ch);
        break;
    }
    return 0;
}
=======
#include <stdio.h>
#include <stdbool.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    int converter = (int)ch;
    printf("The ASCII value of '%c' is %d.\n", ch, converter);
    bool check = (converter >= 65 && converter <= 90) || (converter >= 97 && converter <= 122);
    int check2 = (int)check;
    switch (check2)
    {
    case 1:
        switch (converter)
        {
            case 97: case 101: case 105: case 111: case 117: case 65: case 69: case 73: case 79: case 85: 
                printf("%c is a vowel.\n", ch);
                break;
            default:
                printf("%c is a consonant.\n", ch);
                break;
        }
        break; 
    default:
        printf("%c is not a letter.\n", ch);
        break;
    }
    return 0;
}
>>>>>>> Stashed changes
