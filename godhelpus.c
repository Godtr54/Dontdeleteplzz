#include <stdio.h> 
#include "math.h"
#include <stdlib.h>
#include <string.h>

void oddOrEven(int n)//q2
{
    if(n&1)
    {
        printf("%d is odd",n);
    }
    else 
    {
        printf("%d is even",n);
    }   
}
int sumFisrtLast(int n)//q3
{
    int k=n%10;
    while(n>9)
    {
        n=n/10;

    }
    return (k+n);
}
void zeroOddEven(void)//q4
{   
    int zeros=0,evens=0,odds=0,n;
    scanf("%d",&n);
    while(n)
    {
        if((n%10)==0)
        {
            zeros++;
        }
        else if((n%10)%2==0)
        {
            evens++;
        }
        else
        {
            odds++;
        }
        n/=10;
    }
    printf("%d\t%d\t%d",zeros,odds,evens);
}
void patq5(int n)//q5
{
    for(int i=n;i>0;i--)
    {
        for(int j=0;j<i-1;j++)
        {
            printf(" ");
        }
        for(int j=i;j<=n;j++)
        {
            printf("* ");
        }
        // for(int j=0;j<n)
        printf("\n");
    }
}
int bitInAInteger(int n)//q6
{
    int c=0;
    while(n)
    {
        c+=n&1;
        n=n>>1;
    }
    return c;
}
int isPalindrome(char *a)//q7
{
        int j=0;
        char *r=(a+strlen(a)-1);//right side pointer
        for(size_t i=0;i<(strlen(a))/2;i++)//size_t is basically unsigned int
        {
            if(*(a+i)!=*(r-j))//a[i]==*(a+i),,,,&a[i]==(a+i)
            {
                printf(("It is not a palindrome"));
                return 0;
            }
            j++;//-j is to move the r pointer towards left
        }  
        printf("Its a palindrome");
        return 1;
}
void skipnos(int a,int b)//q8
{
    for(int i=1;i<=10;i++)
    {
        if(i!=a&&i!=b)
        {
            printf("%d ",i);
        }
    }
}
void dayInAMonth(int a)//q10//alternate int dayInAMonth(int a)
{
    switch(a)   
    {
        case 1:
            printf("31");//alterante return 31;
            break;
        case 2:
            printf("28/29 (depending if its a leap year or not)");//alternate return 28
            break;
        case 3:
            printf("31");//alterante return 31;
            break;
        case 5:
            printf("31");//alterante return 31;
            break;
        case 7:
            printf("31");//alterante return 31;
            break;
        case 8:
            printf("31");//alterante return 31;
            break;
        case 10:
            printf("31");//alterante return 31;
            break;
        case 12:
            printf("31");//alterante return 31;
            break;
        default:
            printf("30");//alternate return 30;
    }
}
void tables(int n)//q11
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=10;j++)
        {
            printf("%d*%d=%d\t",i,j,i*j);
        }
        printf("\n");
    }
}
void patq12(int n)//q12
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("%c",(char)65+i);
        }
        printf("\n");
    }
}
int sumOfNumbers(void)//q13 prolyy
{
    int n,s=0,t;
    printf("Eneter the number of numbers : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&t);
        s+=t;
    }
    return s;
}
void sumOfSep(void)//q13 prolly//q20 as welll
{
    int n,ps=0,t,ns=0;
    printf("Eneter the number of numbers : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&t);
        if(t>0)
        {
            ps+=t;
        }
        else
        {
            ns+=t;
        }
    }
    printf("positive sum = %d \nNegative sum = %d",ps,ns);
}
int numToWord(void)//q14
{
    char arr[1024];
    printf("Eneter the number: ");
    scanf("%s",arr);    
    for(int i=0;i<1024;i++)
    {
        switch (*(arr+i))
        {
            case '1':
                printf("One-");
                break;
            case '2':
                printf("Two-");
                break;
            case '3':
                printf("Three-");
                break;
            case '4':
                printf("Four-");
                break;
            case '5':
                printf("Five-");
                break;
            case '6':
                printf("Six-");
                break;
            case '7':
                printf("Seven-");
                break;
            case '8':
                printf("Eight-");
                break;
            case '9':
                printf("Nine-");
                break;
            case '0':
                printf("Zero-");
                break;
            default:
                printf("\b");
                return 0;
        }
    }
    return 0;
}
void noCharWord(void)//q21
{
    int nc=0,wc=0,i=0;
    char buffer='\0';
    char arr[1024];
    while((buffer)!='\n')
    {
        arr[i]=getchar();
        buffer=arr[i];
        i++;
        if(buffer==' ')
        {
            wc++;
            nc--;
        }
        nc++;
    }
    printf("%d %d",wc+1 ,nc-1);
}
// int num_digits_exp(int n)//dont do this
// {
//     return (log10(n))+1;
// }
int num_digits(int n)
{
    int s=0;
    while(n)
    {
        s++;
        n/=10;
    }
    return s;
}
int q6p1(int *a,int n)//unit-2 below |
{
    int max=a[0];
    for(int i=0;i<n-1;i++)
    {
        if(*(a+i)<*(a+i+1))
        {
            max=*(a+i+1);
        }
    }
    return max;
}
int q6p2(int *a,int n)
{
    int s=0;
    for(int i=0;i<n;i++)
    {
        s+=a[i];
    }
    return s/n;
}
int q6p3(int *a,int n)
{
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(*(a+i)>0)
        {
            c++;
        }
    }
    return c;
}
int q8(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    else
    {
        return q8(b,a%b);
    }
}
void q20(int *a,int n)
{

    for(int i=0;i<n;i++)
    {
        scanf("%d",(a+i));
    }
    printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(a+i));
    }
}
void sorter(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(*(a+j)>*(a+j+1))
            {
                // *(a+j)=(*(a+j))^(*(a+j+1));
                // *(a+j+1)=(*(a+j))^(*(a+j+1));
                // *(a+j)=(*(a+j))^(*(a+j+1));
                int t=*(a+j);
                *(a+j)=*(a+j+1);
                *(a+j+1)=t;
            }
        }
    }
}
int main(void)
{
    // oddEven(7);
    //printf("%d",sumFisrtLast(12813));
    //zeroOddEven();
    // patq5(3);
    //printf("%d\n",bitInAInteger(7));
    /*char *a;
    a = (char *)malloc(1024 * sizeof(char));    
    scanf("%s",a);getchar();
    isPalindrome(a);*/
    //skipnos(6,8);
    //dayInAMonth(4);
    // tables(5);
    //patq12(4);
    //printf("%d",sumOfNumbers());
    //sumOfSep();
    //numToWord();
    //noCharWord(); 
    /*int n=5;
    int a[5]={-1,2,3,4,5}; 
    printf("%d\n", q6p3(a,sizeof(a)/sizeof(int)));  */
    //printf("%d",q8(24,10));
    // int a[5];
    // q20(a,5);
    int a[10]={2,9,3,7,6,1,4,0,5,8};
    sorter(a,10);
    for(int i=0;i<10;i++)
    {
        printf("%d",*(a+i));
    }
    return 0;
}
