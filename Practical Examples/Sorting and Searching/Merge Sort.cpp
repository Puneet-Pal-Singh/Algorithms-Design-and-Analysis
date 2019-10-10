// This program implements merge sort

//Tutorials point
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

void display(int array[], int size) 
{
   for(int i = 0; i<size; i++)
      cout << array[i] << " ";
   cout << endl;
}
void merge(int array[], int l, int m, int r) 
{
   int i, j, k, nl, nr;
   //size of left and right sub-arrays
   nl = m-l+1; nr = r-m;
   int larr[nl], rarr[nr]                                                                                                                                                                                                                                                                                                                                                                                                                   ;
   //fill left and right  sub-arrays
   for(i = 0; i<nl; i++ )
      larr[i] = array[l+i];
   for(j = 0; j<nr; j++)
      rarr[j] = array[m+1+j];
   i=0; j=0; k=l;
   //marge temp a rrays to real array
   while(i < nl  && j<nr) 
   {
      if(larr[i ] <= rarr[j]) 
      {
         array [k] = larr[i];
         i++; 
      }
      else
      {               
         array[k] = rarr[j]                                                                                                                                                                                                                                                                       ;
         j++;              
      }          
      k++;         
   }         
   while(i<nl) 
   {       //extra element in left array
             array[k] = larr[i];
       i++; k++;
   } 
   while(j<nr) 
   {     //extra element in right array
       array[k] = rarr[j];
       j++; k++;
    }
} 
void mergeSort(int array[], int l, int r) 
{
   int m; 
   if(l < r) 
   {  
      int m = l+(r-l)/2; 
      // Sort first and  second arrays
      mergeSort(array,  l, m);
      mergeSort(array, m+1, r);
             merge(array, l, m, r);
   }
}
int co(int i,int arr[5000],int n)
{ int ch;
   switch (ch)
   {
   case 1: for ( i = 0; i < n; i++)
           arr[i]=i;
           mergeSort(arr, 0, n-1);   
           break;
   case 2: for ( i = 0; i < n; i++)
           arr[i]=n-i;
           mergeSort(arr, 0, n-1);   
           break;
   case 3: 
           for ( i = 0; i < n; i++)
           arr[i]=rand();
           mergeSort(arr, 0, n-1);   
           break;        
   default:cout<<"Invalid choice:\n";
      break;
      exit(0);
   }
return 0;
}




int main() 
{
   int n,i;
   clock_t start,end;
   float time;
   
   
   cout << "Enter the number of elements: ";
   cin >> n;
   int arr[n];     //create an array with given number of elements
   
   // Displaying Cases
   int ch;
   cout<<"Choose Case \n 1. Best Case: \n 2. Average Case: \n 3. Worst Case: \n";
   cin>>ch;
   co(i,arr,n);
   start = clock();


   // Dispalying Array
   cout << "Enter elements:" << endl;
   for(int i = 0; i<n; i++) 
   {
      cin >> arr[i];
   }
   cout << "Array before Sorting: ";
   display(arr, n);
   mergeSort(arr, 0, n-1);     //(n-1) for last index
   cout << "Array after Sorting: ";
   display(arr, n);

   // Displaying time
   end=clock();
   time = (end-start)/CLK_TCK;
   cout<<"Time taken by sorting is:"<<time;
}
