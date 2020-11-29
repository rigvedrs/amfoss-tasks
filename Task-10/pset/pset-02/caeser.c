#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    int k = get_int("Enter k = ");
   
     k = k % 26;       
     
        if (k == 0)
        {
            printf("Invalid key. Try again\n");
            return 1;
        }
     
        string plntxt = get_string("plaintext: ");
        
        printf("\n");
        
        printf("ciphertext: ");
        if (plntxt != NULL)
        {
            int len = strlen(plntxt);
            
            for (int i = 0; i < len; i++)
            {
                int c = 0;    
                if (isupper(plntxt[i]))
                {
                   
                    c = (((int)plntxt[i] - 65 + k) % 26) + 65;
                    printf("%c", (char) c);
                }
                else if (islower(plntxt[i]))
                {
                    
                    c = (((int)plntxt[i] - 97 + k) % 26) + 97;
                    printf("%c", (char) c);
                }
                else
                {
                    printf("%c", plntxt[i]);
                }
            }
            printf("\n");
            return 0;
        }
    
}
