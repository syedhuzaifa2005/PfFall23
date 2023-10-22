/*
Programmer: Syed Huzaifa Ali
Description: Calculation of Bills using 2D arrays
*/



#include <stdio.h>


int main() {
    int Branches, Phones;
    printf("Enter the number of Company Branches: ");
    scanf("%d", &Branches);
    printf("Enter number of Mobile Phones per Branch: ");
    scanf("%d", &Phones);
    
    int bill[Branches][Phones];
    for(int i = 0; i < Branches; i++) {
        for(int j = 0; j < Phones; j++) {
            printf("Enter Bill Amount for Branch %d, Mobile %d: ", i+1, j+1);
            scanf("%d", &bill[i][j]);
        }
    }
    int total_Bill_all_Branches = 0;
    for(int i = 0; i < Branches; i++) {
        for(int j = 0; j < Phones; j++){
            total_Bill_all_Branches += bill[i][j];
        }
    } 
    
    int total_Bill_perBranch[Branches];
    for(int i = 0; i < Branches; i++) {
        total_Bill_perBranch[i] = 0;
        for(int j = 0; j < Phones; j++) {
            total_Bill_perBranch[i] += bill[i][j];
        }
    }
    
    int Max_Bill_BranchID;
    for(int i = 0; i < Branches; i++) {
        if(total_Bill_perBranch > total_Bill_perBranch[Max_Bill_BranchID])
        Max_Bill_BranchID = i;
    }
    
    int Max_Mobile_Bill;
    int Max_MobileID;
    for(int i = 0; i < Branches; i++) {
        for(int j = 0; j < Phones; j++) {
            if(bill[i][j] > Max_Mobile_Bill){
                Max_Mobile_Bill = bill[i][j];
                Max_MobileID = j;
            }
        }
    }
    
    printf("Total Bill for all Branches is: %d\n", total_Bill_all_Branches);
    printf("Total Bill for each Branch: \n");
    for(int i = 0; i < Branches; i++) {
        printf("Branch %d: %d\n", i + 1, total_Bill_perBranch[i]);
    }
    printf("Branch ID having Maximum Bill is: %d\n", Max_Bill_BranchID + 1);
    printf("Mobile %d of Branch %d has the highest Bill: %d ", Max_MobileID + 1, Max_Bill_BranchID + 1, Max_Mobile_Bill);
}