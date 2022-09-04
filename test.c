#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char string[] = "Praveen is Praveen is Praveen Nano Nano Raju Raju the the sameer sameer";
    char words[200][100];
    int i = 0, j = 0, k,z=0, length, count=1;

    for (k = 0; string[k] != '\0'; k++)
    {

        if (string[k] != ' ' && string[k] != '\0')
        {

            words[i][j++] = tolower(string[k]);
        }
        else
        {
            words[i][j] = '\0';

            i++;

            j = 0;
        }
    }

    length = i + 1;

    printf("Duplicate words in the given the string: \n");
    for (i = 0; i < length; i++)
    {
        count = 0;
        while (count<3)
        {
             for (j = i + 1; j < length; j++)
        {
            if (strcmp(words[i], words[j]) == 0 && (strcmp(words[j], "0") != 0) && (strcmp(words[i], "the") != 0))
            {
                
                count++;
                strcpy(words[j], "0");
                
            }
        } 
        }
        
      
        if (count > 1)
        {
                
                printf("%s\n", words[i]);
                
        }
    
        
        
    }

    return 0;
}