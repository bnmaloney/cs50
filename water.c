#include <cs50.h>
#include <stdio.h>

int main (void)

{
  
  int minutes;
  int bottles;

do 

{
  printf("Minutes: ");
  minutes = get_int ();
  
  
} 

while (minutes <= 0);
    
      bottles = 12 * minutes;
      printf("Bottles:%i\n", bottles);
}
