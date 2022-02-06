#include <stdio.h>
int main()
{    
    int a;  //a=marks
    printf("Enter the marks to get the Grades");
    scanf("%d",&a);
    if(a>85 && a<100)
    {
        printf("Grade A");
    }
    else if(a>70 && a<84)
    {
        printf("Grade B");
    }
    else if(a>55 && a<69)
    {
        printf("Grade C");
    }
    else if(a>40 && a<54)
    {
        printf("Grade D");
    }
    else
    {
        printf("Grade F");
    }
    return 0;
}
