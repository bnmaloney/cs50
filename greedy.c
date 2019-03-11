#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)

{
    
    float dollars;
    int cents;
    int coins = 0;

    do
    {
        printf("O hai! How much change is owed?\n");
        dollars = get_float();
    }
    
    while (dollars<0.009);
    
    cents = round(dollars * 100);
    
    while (cents>=25)
        {
            coins = coins + (cents / 25);
            cents = cents % 25; 
        }
        
    while (cents>=10)
        {
            coins = coins + (cents / 10);
            cents = cents % 10;
        }
        
    while (cents>=5)
        {
            coins = coins + (cents / 5);
            cents = cents % 5;
        }
        
    while (cents>=1)
        {
            coins = coins + (cents / 1);
            cents = cents % 1;
        }
        
    printf("%i\n", coins);
}


