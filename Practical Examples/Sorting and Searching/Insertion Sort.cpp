This Program implement Insertion sort using array as a data structure and analyse its Time Complexity 

#include<iostream.h>
#include<conio.h>
#include<time.h>
#include<process.h>
#include<string.h>

using namespace std

time_t start, end;

void insert(int a[], int n)
{   
    int i,j,k;
    start = clock();
    for(i=0;i<n;i++)
    {
        key = a[i];
        j=i-1;
        while(a[i]>key &&j<=0)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }
end= clock();
}
float calc (time_t end, time_t start)
{
    float time;
    time = (end-start)/CLK_TCK;
    return (time);
}

void main (
    
)
