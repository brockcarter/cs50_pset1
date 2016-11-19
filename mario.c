#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int i = 0;
    int input_height = 0;

    // This requests height
    do
    {
        printf("Height: ");
        input_height = GetInt();
    } while (input_height < 0 || input_height > 23);

    
    // This will create our rows of # 
    for (i = 1; i <= input_height; i++)
    {
        // This creates our spaces, per row
        for(int sp = input_height-i; sp > 0; sp--)
        {
        printf(" ");
        }    
        // This creates our #, per row 
        for (int x = 0; x < i+1; x++)
        {
            printf("#");
        }
        // This creates our next line, per row
        printf("\n");
    }

    return 0;
}