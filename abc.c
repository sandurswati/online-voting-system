#include<stdio.h>
int main()
{
    int a[]={1,2,4,-8,-1,0};
    int n= size of (a)/sizeof(int);
    int np, nz, nn;
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            np++;

        }
        else if (a[i]<0)
        {
            ne--;
        }
        else{
            nz++;
        }
    }

}