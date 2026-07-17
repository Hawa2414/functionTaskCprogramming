#include <stdio.h>
int max(int a,int b, int c)
{
    if(a>= b && a>= c) {
        return a;

    } else if (b>= a && b>= c) {
        return b;
    } else {
        return c;
    }
}
int main()
{
     printf("The largest number is: %d\n",max(10,34,22));
    return 0;

}
