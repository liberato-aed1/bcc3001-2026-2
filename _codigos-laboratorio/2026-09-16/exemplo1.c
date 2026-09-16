#include <stdio.h>
#include <stdlib.h>

void dobra(int* x){
    *x = *x * 2;
    *x = 50 * 2;
    *x = 100;
}


int main(){
    int i = 20;
    
    int* p = malloc(sizeof *p);

    *p = 50;

    
    // printf("%d\n", i);
    // dobra(&i)
    // printf("%d\n", i);

    printf("%d \n", *p);
    dobra(p);
    printf("%d \n", *p);
    
     


 
}