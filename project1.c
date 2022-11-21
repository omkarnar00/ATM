#include<stdio.h>

int main()
{
    char  card;
    int n;
    int p;
    int a;
    int b;
    int diff;
    int i;

    printf("Welcome To The ATM\n\n");

    printf("Please Insert The Card \n\n");
    scanf("%c",&card);

    if(card=='k')
    {
        printf("Press 1 to withdraw the money from your account\n\n");
        printf("press 2 to check the balance \n\n");

        b=50000;
        scanf("%d",&n);

        if(n==1)
        {
            printf("please enter your 4-digit pin: \n");
            scanf("%d",&p);

            if(p==1234)
            {
                printf("enter the amount to be withdraw : \n\n");
                scanf("%d",&a);

                if(a>b)
                {
                    printf("insufficient");
                }
                else
                {
                    printf("collect the money \n\n");
                    diff = b-a;
                    printf("now,your bank balance is %d",diff);
                }
            }
            else
            {
                printf("incorrect pin\n\n");

                printf("please try again\n\n");
                scanf("%d",&p);

                if(p==1234)
                {
                printf("enter the amount to be withdraw : \n\n");
                scanf("%d",&a);

                   if(a>b)
                    {
                       printf("insufficient");
                    }
                    else
                    {
                         printf("collect the money \n\n");
                         diff = b-a;
                         printf("now,your bank balance is %d",diff);
                    }
                }
                else
                {
                      printf("your request has been blocked\n\n");
                      printf("so please try again");
                }                    
            }
        }
        else if (n==2)
        {
            printf("please enter 4 digit pin:\n\n");
            scanf("%d",&p);

            if(p!=1234)
            {
                printf("please try again\n\n");
                scanf("%d",&p);

                if(p!=1234)
                {
                    printf("your request has been blocked\n\n");
                    printf("so,please try again");
                }
                else
                {
                    printf("your balance is %d", b);
                }
            }
        }
        else
        {
            printf("your bank balance is%d",b);
        }
    }
    else if(card=='s')
    {
        printf("Press 1 to withdraw the money from your account\n\n");
        printf("press 2 to check the balance \n\n");

        b=100000;
        scanf("%d",&n);

        if(n==1)
        {
            printf("please enter your 4-digit pin: \n");
            scanf("%d",&p);

            if(p==5678)
            {
                printf("enter the amount to be withdraw : \n\n");
                scanf("%d",&a);

                if(a>b)
                {
                    printf("insufficient");
                }
                else
                {
                    printf("collect the money \n\n");
                    diff = b-a;
                    printf("now,your bank balance is %d",diff);
                }
            }
            else
            {
                printf("incorrect pin\n\n");

                printf("please try again\n\n");
                scanf("%d",&p);

                if(p==5678)
                {
                printf("enter the amount to be withdraw : \n\n");
                scanf("%d",&a);

                   if(a>b)
                    {
                       printf("insufficient");
                    }
                    else
                    {
                         printf("collect the money \n\n");
                         diff = b-a;
                         printf("now,your bank balance is %d",diff);
                    }
            }
            else
            {
                printf("your request has been blocked\n\n");
                printf("so please try again");
            }
            
                    
            
            }
        }
        else if (n==2)
        {
            printf("please enter 4 digit pin:\n\n");
            scanf("%d",&p);

            if(p!=5678)
            {
                printf("please try again\n\n");
                scanf("%d",&p);

                if(p!=5678)
                {
                    printf("your request has been blocked\n\n");
                    printf("so,please try again");
                }
                else
                {
                    printf("your balance is %d", b);
                }
            }
        }
        else
        {
            printf("your bank balance is%d",b);
        }
    }
    else if(card=='i')
    {
        printf("Press 1 to withdraw the money from your account\n\n");
        printf("press 2 to check the balance \n\n");

        b=70000;
        scanf("%d",&n);

        if(n==1)
        {
            printf("please enter your 4-digit pin: \n");
            scanf("%d",&p);

            if(p==7890)
            {
                printf("enter the amount to be withdraw : \n\n");
                scanf("%d",&a);

                if(a>b)
                {
                    printf("insufficient");
                }
                else
                {
                    printf("collect the money \n\n");
                    diff = b-a;
                    printf("now,your bank balance is %d",diff);
                }
            }
            else
            {
                printf("incorrect pin\n\n");

                printf("please try again\n\n");
                scanf("%d",&p);

                if(p==7890)
                {
                printf("enter the amount to be withdraw : \n\n");
                scanf("%d",&a);

                   if(a>b)
                    {
                       printf("insufficient");
                    }
                    else
                    {
                         printf("collect the money \n\n");
                         diff = b-a;
                         printf("now,your bank balance is %d",diff);
                    }
            }
            else
            {
                printf("your request has been blocked\n\n");
                printf("so please try again");
            }
            
                    
            
            }
        }
        else if (n==2)
        {
            printf("please enter 4 digit pin:\n\n");
            scanf("%d",&p);

            if(p!=7890)
            {
                printf("please try again\n\n");
                scanf("%d",&p);

                if(p!=7890)
                {
                    printf("your request has been blocked\n\n");
                    printf("so,please try again");
                }
                else
                {
                    printf("your balance is %d", b);
                }
            }
        }
        else
        {
            printf("your bank balance is%d",b);
        }
    }



}
