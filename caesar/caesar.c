#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])

//This is to make sure there is more than one entered argument

{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

//denition of user entered key

    string key = argv[1];

//this is to make sure the user inputted a digit

    for (int i = 0; i < strlen(argv[1]); i++)

    {
//Checking to see if the argument entered is a digit
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
//Asking the user to entered the plain text
    string plaintext = get_string("Plaintext: ");

//convert the entered key to an interger since i am using the ascci table
    int key_input = atoi(key);
    printf("ciphertext: ");

  //Going through each letter to check for lower or capital letters

    for (int i = 0; i < strlen(plaintext); i++)
    {

        if (isupper(plaintext[i]))
        {
            printf("%c", (((plaintext[i] - 65) + key_input) % 26) + 65);
        }
        else if (islower(plaintext[i]))
        {
            printf("%c", (((plaintext[i] - 97) + key_input) % 26) + 97);
        }
//if it is thing liek such as a punctiation print this
        else
        {
            printf("%c", plaintext[i]);
        }
    }
//Break line after receving ciphertext
    printf("\n");
}

