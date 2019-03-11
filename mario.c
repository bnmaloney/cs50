#include <stdio.h>
#include <cs50.h>

int main (void)

{
    int height;

    do
    {
        printf("Height: ");
        height = get_int();
    }
    
    while (height < 0 || height > 23);
    
//     height - 1 in spaces 2 hashes\n
//     height - 2 in spaces 3 hashes
//     height - 3 in spaces 4 hashes
//     height - 4 in spaces 5 hashes
// end height - height in spaces 9 hashes 
    
    
//   ##
//  ###  
// ####
//#####


  for (int y = 0; y < height; y++)
  
    {
        for (int i = 0; i < (height - (y+1)); i++)
        {
             printf(" ");
        }
     
        for (int i = 0; i < (y+2); i++)
        {
             printf("#");
        }
        
         printf("\n");
    }   
     
     
     
     
    // for (int i = 0; i < (height -2); i++)
    // {
    //     printf(" ");
    // }
    
    //  for (int i = 0; i < (height-1); i++)
    //  {
    //      printf("#");
    //  }
     
    //  printf("\n");    
     
     
}
