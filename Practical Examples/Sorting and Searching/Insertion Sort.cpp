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

void main ()
{float ta,tb,tw;
    int val=0,avg[3000],best[3000],worst[3000];
    do{
        cout<<"Enter numbers of Elements";
        cin>>val;
        cout<<"\n Best Case \n Average Case \n Worst Case \n Exit \n";
        cout<<"Enter your choice";
        cin>>ch;
        switch(ch)
        { Case : for (i=o;i<n;i++)
                 { a[i]=i;
                 }
                 insert a,n;
         break
          Case : for (i=o;i<n;i++)
                   { a[i]=i;
                   }
                 insert a,n;
         break
          Case : for (i=o;i<n;i++)
                 { a[i]=i;
                 }
                 insert a,n;
         break
          default : cout<<"Wrong Choice";
                   exit 
                       
        }

    }
 getch;
}
