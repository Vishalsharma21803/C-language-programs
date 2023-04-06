#include <stdio.h>
int main(){
    struct st{
        int a;
        int b;
    };
    struct st st1={0};
    printf("%d",st1.a);
    printf("%d",st1.b);
    return 0;
}
