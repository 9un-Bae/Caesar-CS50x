#include <cs50.h>
#include <stdio.h>
#include  <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    //check for one command line argument
    if (argc ! = 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    //define key
    string key = argv[1];

    //check input is digit
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key");
            return 1;
        }
    }

    //prompt user for text
    string plaintext = get_string("plaintext: ");

    //convert key into an integer
    int k = atoi(key);
    printf("ciphertext: ");

    //get ciphertext
    for (int i = 0; i < strlen(plaintext); i++)
    {
        if (isupper(plaintext[i]))
        {
            printf("%c", (((plaintext[i] - 65) + k) % 26) + 65);
        }
        else if (islower(plaintext[i]))
        {
            printf("%c", (((plaintext[i] - 97) + k) % 26) + 97);
        }
        else
        {
            printf("%c", plaintext[i]);
        }
    }
    printf("\n");
}