#include "name_digits.h"
void nd_name_dig(int x)
{
    if(x<10)
    {
        printf("%d ", x);
        return;
    }
    char a='A';
    a+=x-10;
    printf("%c ", a);
}
void nd_order_r(int x, int p, int y)
{
    if(y==0)
    {
        printf("\n");
        return;
    }
    if(y==-1)
    {
        if(x==0)
        {
            nd_name_dig(x);
            printf("\n");
            return;
        }
        y=1;
        while(y<=x)
        {
            y*=p;
        }
        y/=p;
        nd_order_r(x, p, y);
        return;
    }
    int c=x/y;
    nd_name_dig(c);
    nd_order_r(x-c*y, p, y/p);
}
void nd_order_i(int x, int p)
{
    int  y=1;
    while(y<=x)
    {
        y*=p;
    }
    y/=p;
    while(y>0)
    {
        int c=x/y;
        nd_name_dig(c);
        x-=c*y;
        y/=p;
    }
    printf("\n");
}
void nd_antiorder_r(int x, int p)
{
    if(x==0)
    {
        printf("\n");
        return;
    }
    int y=x%p;
    nd_name_dig(y);
    nd_antiorder_r(x/p, p);
}
void nd_antiorder_i(int x, int p)
{
    while(x>0)
    {
        int y=x%p;
        nd_name_dig(y);
        x/=p;
    }
    printf("\n");
}
