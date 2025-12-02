// vowel or consonant
#include <stdio.h>
int main()
{
    char check;
    printf("Enter a character : ");
    scanf("%c", &check);
    if (check == 'a' || check == 'e' || check == 'i' || check == 'o' || check == 'u' ||
        check == 'A' || check == 'E' || check == 'I' || check == 'O' || check == 'U')
    {
        printf("vowel");
    }
    else
    {
        printf("consonant");
    }
    return 0;
}