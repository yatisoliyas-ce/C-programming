#include<stdio.h>
int main()
{
    long long p,w,m,iw,im,lw,lm;
    p=1441981744;
    w=p*48.4/100;
    m=p-w;
    lw=w*62.84/100;
    lm=m*80.95/100;
    iw=w-lw;
    im=m-lm;
    printf("the number of illitrate men are %11d and illitrate women are %11d",im,iw);
    return 0;
}

