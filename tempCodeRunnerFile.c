#include <stdio.h>
void show(int x,int y)
{
    x=x+1;
    y=y+1;
    printf(“%d,%d ",x,y);
}
int main()
{
    int a=6,b=9;
    show(a,b);
    a=a+1;
    b=b+1;
    printf(“%d,%d ",a,b);
}

