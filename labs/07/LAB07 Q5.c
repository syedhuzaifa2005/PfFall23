/*
Programmer: Syed Huzaifa Ali
Description: Printing pattern using loops and functions
*/


#include <stdio.h>

//2 function declaration
void Star(int n);
void Space(int n);



//Calling function using main 
int main() {
//UPPER PART
    for (int i = 0; i < 3; i++){
        Space(4);
        Star(5);
        printf("\n");
    }//End for
    
    Space(1);
    Star(11);
    printf("\n");
    
    Space(4);
    Star(1);
    Space(3);
    Star(1);
    
    printf("\n");
    Space(6);
    printf("|");
    Space(2);
    
    printf("\n");
    Space(5);
    printf("\\_/");
    Space(1);
    printf("\n");
    
    printf("\n");
    Space(5);
    printf("|");
    Space(1);
    printf("|");
    
    
//MIDDLE PART
    printf("\n");
    Star(13);

    printf("\n");    
    for (int i = 0; i < 4; i++){
        Star(2);
        Space(2);
        Star(5);
        Space(2);
        Star(2);
        printf("\n");
    }//End for
    
    Space(4);
    Star(5);
    printf("\n");
    
    
//LOWER PART
    for(int i = 0; i < 5; i++) {
        Space(4);
        Star(2);
        Space(1);
        Star(2);
        printf("\n");
    }//End for
    
    Space(1);
    Star(5);
    Space(1);
    Star(5);
    Space(1);
}//End MAIN



//Definition of the 2 functions
void Star(int n) {
    for(int i = 0; i < n; i++) {
        printf("*");
    }
}

void Space(int n) {
    for(int i = 0; i < n; i++) {
    printf(".");
    }
}