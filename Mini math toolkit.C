#include <stdio.h>
void prime(int temp)
{

    int count=0;
    for(int i=1;i<=temp;i+=)
    {

        if(temp%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {

        printf("It is a prime number\n");
    }
    else
        {
            printf("not aprime number\n");
        }
    }

    void factorial(int temp)
    {
        int fact=1;
        for(int i=1;i<=temp;i++)
        {

            fact=fact*i;
        }
        printf("factor is:%d\n",fact);
    }
    int reversed(int temp)
    {
        int rev=0;
        int last=0;
        while(temp>0)
        {
            last=temp%10;
            rev=rev*10+last;
            temp=temp/10;

        }
        printf("reversed number %d\n",rev);
        return rev;
    }
    void main(){
    int choice,number;
    while(1)
    {
        printf("**Mini math App**\n");
        printf("press 1 for check prime\n");
        printf("press 2 for Factorial\n");
        printf("press 3 for ReverseNumber\n");
        printf("press 4 for Panlindrome\n");
        printf("press 5 for Exit\n");
        printf("Enter a choice\n");
        scanf("%d",&choice);
        printf("Enter a number\n");
        scanf("%d",&number);
        switch(choice)
        {
        case 1:
            {
                prime(number);
                break;
            }
        case 2:
            {
                factorial(number);
                break;
            }
            case 3:
        }
    }
        }
    }
    }
        }
    }
}
