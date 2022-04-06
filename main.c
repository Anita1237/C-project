#include <stdio.h>
#include <stdlib.h>

#define A 50
int main()
{
    const int B=20;
    int Sum,Dif,Prod;
    float Div,Rem;
    Sum=A+B;
    Dif=A-B;
    Prod=A*B;
    Div=A/B;
    Rem=A%B;
    printf("Sum is %d\n",Sum);
    printf("difference is %d\n",Dif);
    printf("product is %d\n",Prod);
    printf("division is %d\n",Div);
    printf("remainder is %f",Rem);
    return 0;
}
