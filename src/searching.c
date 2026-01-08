//LINEAR SEARCH
int linear_search(int a[], int n,int key)
{
    for(int i=0;i<n;i++)
    {
       if(key==a[i])
       {
         return 1;
       }
    }

    return 0;

}


 //BINARY SEARCH

int binary_search(int a[] , int n, int key)
{
   int low=0,high=n-1;

   while(low<=high)
   {
     int mid=low+(high-low)/2;

     if(a[mid]==key)
     {
        return 1;
     }

     else if(key>a[mid])
     {
        low=mid+1;
     }

     else
     {
        high=mid-1;
     }
   }

   return 0;
   
}

//RECURSIVE LINEAR_SEARCH

int recursive_linear_search(int a[], int n,int key)
{
       if(n<0)
       {
         return 0;
       }

       if(a[n]==key)
       {
         return 1;
       }

       return recursive_linear_search(a,n-1,key);
}


//RECURSIVE BINARY_SEARCH

int recursive_binary_search(int a[] , int low,int high, int key)
{

  if(low>high)
  {
    return 0;
  }

   int mid=low+(high-low)/2;

  if(a[mid]==key)
  {
    return 1;
  }

  else if(key>a[mid])
  {
     return recursive_binary_search(a,mid+1,high,key);
  }

  else
  {
     return recursive_binary_search(a,low,mid-1,key);
  }
   
}








