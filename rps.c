#include<stdio.h>
int main()
{
    int compchoice,userchoice;
    printf("enter compchoice:0 for rock, 1 for paper, 2 for sissor: ");
    scanf("%d",&compchoice);
    printf("enter userchoice:0 for rock, 1 for paper, 2 for sissor: ");
    scanf("%d",&userchoice);
    if(compchoice==0 && userchoice==2 || compchoice==1 && userchoice==0 || compchoice==2 && userchoice==1){
        printf("computer wins");
        printf("\ndefeat");
    }
    if(compchoice==0 && userchoice==1 || compchoice==1 && userchoice==2 || compchoice==2 && userchoice==0){
        printf("you won");
    }
    if(compchoice==userchoice){
        printf("tie");
    }
    if(compchoice>2||userchoice>2){
        printf("invalid data");
        printf("\nplease enter either 0 or 1 or 2 only in both cases");
    }
}