#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("How many minutes do you shower?: \n");
    int shower_length = GetInt();
    
    int bottles = (shower_length*192)/16;
    
    printf("minutes: %i\n", shower_length);
    printf("bottles: %i\n", bottles);
}