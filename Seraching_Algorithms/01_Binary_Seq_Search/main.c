#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int Sequ_Search();
int binary_Search();

int main()
{
    int x ;
    do{
            printf("Please Select Search Algorithm\n 1: Sequential Search\n 2: Binary Search\n 3: 0 to exit  \n");
            scanf("%d" , &x);
    switch(x){
        case 1: Sequ_Search(); break;
        case 2: binary_Search(); break;
        case 0: break;
    }
    }while(x != 0);
    return 0;
}



int Sequ_Search()
{
    int Size , i , a[MAX] ={0} , index , number , flag = 0;
    printf("Please Enter Size of Array : \n");
    scanf("%d",&Size);
    for ( i = 0 ; i < Size ; i++)
    {
            printf("Please Enter The Element Number %d of the array: " ,(i+1));
            scanf("%d",&a[i]);
    }

    printf("Please enter the number to get it's index: ");
    scanf("%d",&number);

    for(i = 0 ; i < Size ; i++)
    {
        if(a[i] == number){  index = i; flag = 1; break;}
        else {flag = 0;}
    }

    if( flag == 1)  printf("Number found and it's index is: %d\n ",index+1);
    else    printf("Number not found !\n");
}

int binary_Search()
{
     int Size , i , a[MAX] ={0} , index , number , top , bottom , mid;
    printf("Please Enter Size of Array : \n");
    scanf("%d",&Size);
    for ( i = 0 ; i < Size ; i++)
    {
            printf("Please Enter The Element Number %d of the array in a sorted way: " ,(i+1));
            scanf("%d",&a[i]);
    }

    printf("Please enter the number to get it's index: ");
    scanf("%d",&number);

    top = 0;
    bottom = Size-1;
    do{
            mid = ((top+bottom)/2);
            if(a[mid] == number) { index = mid; printf("Number found and it's index is: %d\n" , index+1); break; }
            else if (a[mid] > number) { bottom = mid - 1;}
            else        top = mid + 1;

    }while(top <= bottom );
    
    if (top > bottom)
    {
       printf("Number not found !\n");
    }
     
}
     
