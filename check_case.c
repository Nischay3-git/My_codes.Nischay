// this program checks whether a character entered is uppercase or lowercase
#include <stdio.h>
#include <ctype.h>
/* this header file includes important functions like
 isupper(), islower(), isalpha(), isdigit()
It gives boolean output.
*/
int main()
{
    char ch;

    printf("Enter the alphabet: ");
    scanf("%c", &ch);

    if (isupper(ch))
    {
        printf("%c is uppercase alphabet", ch);
    }
    else if (islower(ch))
    {
        printf("%c is lowercase alphabet", ch);
    }

    return 0;
}