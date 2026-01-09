#include "sorting.h"
#include <stdio.h>
#include <stdlib.h>   // ← Add this
#include <time.h>     // if using time()

//BUBBLE SORT
void bubble_sort(int a[],int n,int*comparisons,int *swaps)
{
    
    int temp;
    
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                (*swaps)++;
            }
            (*comparisons)++;
        }
    }
    
}

//SELECTION SORT

void selection_sort(int a[], int n,int * comparisons,int*swaps)
{
    int min_index;
    for(int i=0;i<n-1;i++)
    {
        min_index=i;
        for(int j=i+1;j<n;j++)
        {
           if(a[j]<a[min_index])
           {
              min_index=j;
           }

           (*comparisons)++;
        }
        
        if(min_index!=i)
        {
            swap(&a[i],&a[min_index]);
            (*swaps)++;
        }

    }

}

//INSERTION SORT

void insertion_sort(int a[], int n, int *comparisons, int * shifts, int* inversions)
{
    int temp,i,j;
    for(i=1;i<n;i++)
    {
        temp=a[i];
        for(j=i-1;j>=0;j--)
        {
            if(a[j]>temp)
            {
                a[j+1]=a[j];           //NO SWAPS, ONLY SHIFTING
                (*comparisons)++;
                (*shifts)++;
            }

            else
            {
                (*comparisons)++;
                break;
            }

            
        }
          a[j+1]=temp;
        
    }

    *inversions=*shifts;

}


//MERGE SORT

void merge_sort(int a[], int lb, int ub,int *comparisons, int * inversions)
{
    int mid;
    if(lb<ub)
    {
        mid=(ub+lb)/2;

        merge_sort(a,lb,mid,comparisons,inversions);
        merge_sort(a,mid+1,ub,comparisons,inversions);

        merge(a,lb,mid,ub,comparisons,inversions);
        
    }
    
}




void merge(int a[], int lb, int mid, int ub,int* comparisons, int* inversions)
{
    int i=lb,j=mid+1;
    int b[ub-lb+1];
    int k=0;

    while(i<=mid && j<=ub)
    {
        if(a[i]<=a[j])
        {
             b[k]=a[i];
             k++;
             i++;
        }

        else
        {
            b[k]=a[j];
            k++;
            j++;
            (*inversions)+=mid-i+1;
        }

        (*comparisons)++;
    }

    if(i>mid)
    {

       while(j<=ub)
       {
         b[k]=a[j];
         k++;
         j++;
       }
    }
    
    if(j>ub)
    {
        while(i<=mid)
        {
            b[k]=a[i];
            k++;
            i++;
        }
    }

    k=0;

    for(int r=lb;r<=ub;r++)
    {
        a[r]=b[k];
        k++;
    }
   

}


//LOMUTO QUICK SORT


void lomuto_quick_sort(int a[], int low, int high, int *comparisons, int* swaps)
{
    if(low<high)
    {
        int p=lomuto_partition(a,low,high,comparisons,swaps);

        lomuto_quick_sort(a,low,p-1,comparisons,swaps);
        lomuto_quick_sort(a,p+1,high,comparisons,swaps);
        
    }
    
}


int lomuto_partition(int a[], int low, int high, int* comparisons, int* swaps)
{
    int i=low-1;
    int pivot=a[high]; //last element of the array or sub array

    //high itself is the last index, so we will run loop from low to <= high 
    //but since high contains pivot, we run loop from low to <=high-1 or <high 

    for(int j=low;j<high;j++)
    {
        if(a[j]<=pivot)
        {
            i++; //i moves to larger element and j has smaller element
            swap(&a[i],&a[j]); //now i contains smaller element than pivot after swapping and larger
                               // element moves to back

            (*swaps)++;                   
        }

        (*comparisons)++;
    }

    swap(&a[i+1],&a[high]);  //as i+1 contains the 1st element that is bigger than pivot
                             // after swapping pivot attains its correct position
                             // now all elements to left of pivot are small and to its right are big

    (*swaps)++;


    return i+1;   // we return the index of the pivot element                        
   
}


//HOARE QUICK SORT

void hoare_quick_sort(int a[], int low, int high, int *comparisons, int* swaps)
{
    if(low<high)
    {
        int p=hoare_partition(a,low,high,comparisons,swaps);

        hoare_quick_sort(a,low,p,comparisons,swaps);
        hoare_quick_sort(a,p+1,high,comparisons,swaps);
        
    }
    
}


int hoare_partition(int a[], int low, int high, int* comparisons, int* swaps)
{
    int i=low-1,j=high+1;
    int pivot=a[low];
    
    while(1)
    {
        do
        {
            (*comparisons)++;
            i++;
        }while(a[i]<pivot);

        do
        {
            (*comparisons)++;
            j--;
        }while(a[j]>pivot);

        if(i>=j)
        return j;

        swap(&a[i],&a[j]);
        (*swaps)++;

    }
   
}


//RANDOMIZED QUICK SORT

void randomized_quick_sort(int a[], int low, int high, int *comparisons, int* swaps)
{
    if(low<high)
    {
        int p=randomized_partition(a,low,high,comparisons,swaps);

        randomized_quick_sort(a,low,p-1,comparisons,swaps);
        randomized_quick_sort(a,p+1,high,comparisons,swaps);
        
    }
    
}


int randomized_partition(int a[], int low, int high, int* comparisons, int* swaps)
{
   int random_index=low+rand()%(high-low+1);
   swap(&a[high],&a[random_index]);
    (*swaps)++;

   return partition(a,low,high,comparisons,swaps);
   
   
}


int partition(int a[],int low,int high,int*comparisons,int*swaps)
{
    int i=low-1,j;
    int pivot=a[high];

    for(j=low;j<high;j++) //pivot is last element, so we run loop till 2nd last element
    {
        if(a[j]<=pivot)
        {
            i++;
            swap(&a[i],&a[j]);
            (*swaps)++;
        }
        (*comparisons)++;
    }

    swap(&a[i+1],&a[high]); //get pivot to its correct position
    (*swaps)++;

    return i+1;  //index of pivot
    
}


              // HEAP SORT


void heap_sort(int a[], int n,int* comparisons, int * swaps)
{
    build_max_heap(a,n,comparisons,swaps);  

    for(int i=n-1;i>0;i--)
    {
        swap(&a[0],&a[i]);
        heapify(a,i,0,comparisons,swaps);
    }
    
}


void build_max_heap(int a[], int n,int* comparisons, int * swaps)
{
   for(int i=n/2-1;i>=0;i--)
   {
      heapify(a,n,i,comparisons, swaps);
   }
   
}



void heapify(int a[],int n,int i,int* comparisons, int * swaps)
{
   int largest=i;
   int left_child=2*i+1;
   int right_child=2*i+2;

  if (left_child < n)
{
    (*comparisons)++;                 // element comparison happens here
    if (a[left_child] > a[largest])
        largest = left_child;
}

if (right_child < n)
{
    (*comparisons)++;                 // element comparison happens here
    if (a[right_child] > a[largest])
        largest = right_child;
}


   if(largest!=i)
   {
     swap(&a[i],&a[largest]);
     (*swaps)++;
     heapify(a,n,largest,comparisons,swaps);
   }
}

// SWAP FUNCTION

void swap(int *x, int *y)
{
    int temp;

    temp=*x;
    *x=*y;
    *y=temp;
}






























































































































































































































































































