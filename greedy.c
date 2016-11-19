#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float input = 0;
    int total_coins = 0;
    int owed;

    // This requests change due
    do
    {
        printf("How much is owed?: ");
        input = GetFloat();
    } while (input <= 0);
    
    // Converts from float to int
    
    owed = (int)round(input*100);
    
   
    // This is greedy
    while (owed >= 25)
    {
        total_coins++;
        owed -= 25;
    }
    while (owed >= 10)
    {
      total_coins++;
      owed -= 10;
    }
    while (owed >= 5)
    {
        total_coins++;
        owed -= 5;
    }
    while (owed >=1)
    {
        total_coins++;
        owed -= 1;
    }
    printf("%i\n", total_coins);
    
    return 0;
}