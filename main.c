#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int number;
    
    printf("input a number :");
    scanf("%d", &number);
    
    if ( number > 0 )
    {
	  printf("positive\n");
    }
    else if ( number < 0 )
    {
      printf("negative\n");
    }
    else
    {
      printf("zero\n");
    }
	  
	return 0;
}
