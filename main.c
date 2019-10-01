#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int number;
    
    printf("input a number :");
    scanf("%d", &number);
    
    if ( number > 0 )
      printf("|x|=%d\n", number);
    else
      printf("|x|=%d\n", -number);
	  
	return 0;
}
