#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include <time.h>

int main()
{
    srand(time(NULL));
start:
    system("CLS");
    printf("\n");
    int correct =0, incorrect =0;
    system("Color f0");
    while(1)
    {
        printf("Your Score  :           ");
        printf("Correct   : %d\n",correct);
        printf("                        Incorrect : %d\n\n\n",incorrect);
        int a,b,result,op,input;
        op=rand()%4;
        if(op==0){
            a=rand()%1000;
            b=rand()%1000;
            printf("    %d + %d = ",a,b);
            result=a+b;
            scanf("%d",&input);
            if(input==result){
                printf("\n    Correct Answer !!!\n");
                correct++;
            }
            else{
                printf("\n    Incorrect Answer !!!\n");
                incorrect++;
            }
        }
        else if(op==1){
            a=rand()%100;
            b=rand()%100;
            printf("    %d - %d = ",a,b);
            result=a-b;
            scanf("%d",&input);
            if(input==result){
                printf("\n    Correct Answer !!!\n");
                correct++;

            }
            else{
                printf("\n    Incorrect Answer !!!\n");
                incorrect++;
            }
        }
        else if(op==2){
            a=rand()%10;
            b=rand()%10;
            printf("    %d X %d = ",a,b);
            result=a*b;
            scanf("%d",&input);
            if(input==result){
                printf("\n    Correct Answer !!!\n");
                correct++;

            }
            else{
                printf("\n    Incorrect Answer !!!\n");
                incorrect++;
            }
        }
        else if(op==3){
            result=1+ rand()%10;
            b=1+rand()%10;
            a=result*b;
            printf("    %d / %d = ",a,b);
            scanf("%d",&input);
            if(input==result){
                printf("\n    Correct Answer !!!\n");
                correct++;

            }
            else{
                printf("\n    Incorrect Answer !!!\n");
                incorrect++;
            }
        }
        int j;
        for(j=0; j<600000000; j++);
        system("CLS");
        if(correct==5)break;
    }
    printf("\n\n\nCongratulations  , you have successfully solved 5 Quiz!!!\n");
    printf("                   you have given only %d incorrect answers\n",incorrect);
    if(incorrect>=3)printf("                                                            Better Luck Next Time.\n");

    printf("\n\nDo you want to play again ???\nEnter 'y' for Yes : ");
    char choice;
    scanf(" %c",&choice);
    if(choice=='y' || choice=='Y')goto start;
    return 0;
}
