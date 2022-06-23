#include <cs50.h>
#include <stdio.h>


int main(void)
{
          int altura;
        
     do
     {
          altura = get_int ("Altura: ");
     }
     while (altura < 1 || altura > 8);
     

     
     // Imprima a #
     
    for(int i = 1; i <= altura; i++)
    {
	    for(int j = altura -i; j >= 1; j--)
	    printf ( " " );
	    
	    for (int j = 1; j <= i ; j++)
    	{
         		printf("#"); 
    	}
    	printf("\n"); 
    }
          
     }
