
#include<stdio.h>

int finalprice(int price, int discount)
{
    return price - (price * discount /100);

}
 int main()
 {
    printf("%.2d\n" , finalprice(100, 10));
    return 0;
 }


