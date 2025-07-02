#include <stdio.h>
#include<ctype.h>
int main()
{
     char ch;
     printf("enter a Alphabet");
     scanf("%c", &ch);

     ch = tolower(ch);

     switch(ch)
     {
     case 'a' :
     case 'e' :
     case 'i' :
     case 'o' :
     case 'u' :
        printf("vowels");
         break;
          default:
           printf("not vowel !!");

     }
     return 0;
}