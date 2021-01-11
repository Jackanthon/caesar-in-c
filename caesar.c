#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if(argc == 2)
    {
        //printf("Success");
        //printf(" %s\n", argv[1]);
        bool validkey = false;
        int s = strlen(argv[1]);
        //trying to get length of user's string
        for (int i = 0; i < s; i++)
        {
            if(isdigit(argv[1][i]))
            {
                validkey = true;
            }
            else
            {
                printf("Usage ./caesar key\n");
                return 1;
            }
        }
    }
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    printf("Success\n");
    const int k = atoi(argv[1]);
    string plain = get_string("plaintext: ");
    
    //getCipher(plain, k);

    //for (int i = 0; i < strlen(plain); i++)
    //{
    //    printf("%c", plain[i]);
    //}

        char encrypt[100];  //empty string will be output
        for(int i=0; i < strlen(plain);i++){//for loop goes through each char in string
            char x = plain[i];
            //int end = x + k;//overdraft of alphabet
            if (islower(x))
            {
                x = x + k;
                if(x > 'z')
                {
                    x = x - 'z' + 'a' - 1;
                }
                plain[i] = (char) x;
            }
            else if (isupper(x))
            {
                x = x + k;
                if(x > 'Z')
                {
                    x = x - 'Z' + 'A' - 1;
                }
                plain[i] = (char) x;
            } 
        }   printf("ciphertext: %s\n", plain);
}

/*1. Take string plain text in
2. iterate through each character of the string
increment ascii character value by key
if ascii value + key > Ascii of z or Z, reset to a, add remaining key

finish the code
*/

