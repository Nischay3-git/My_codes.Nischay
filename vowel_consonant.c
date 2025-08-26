//we have to identify whether the input character is a vowel or a consonant
#include <stdio.h>
int main(){
    char ch;
    printf("Enter the character:");
    scanf("%c",&ch);
// using ASCII values of the vowels
//A: 65 E: 69 I: 73 O: 79 U: 85 and a: 97 e: 101 i: 105 o: 111 u: 117
    char upCh = toupper(ch);//toggle case for shorter code
    if(ch==65 ||ch==69||ch==73||ch==79||ch==85)
    {
        printf("%c is a vowel",ch);
    }
    else
    {
        printf("%c is a consonant",ch);

    }
    return 0;
}