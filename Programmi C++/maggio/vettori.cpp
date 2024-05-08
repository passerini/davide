
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

char oggetti[4][25] = {"WINDOWS 2000        ", "LOGITECH            ", "SENNAISER           ", "ACER                "};
int prezzi[4] = {100, 200,150,300};

int main(){
    
    for ( int i = 0; i < 4; i++)
    {
       printf("L'oggetto %s costa .................................... %d € \n", oggetti[i], prezzi[i]);
       
    }
}