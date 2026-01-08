#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#include "sorting.h"
#include "searching.h"

int main()
{
  int choice,type_choice,algo_choice;
     printf("The main menu: \n");
     printf("1: Start the program\n");
     printf("2: End the program\n");

  printf("enter your choice: );
  scanf("%d",&ch);

  switch(choice)
    {
      case 1: 
               printf("Welcome to Sorting and Searching Arena\n");

                int n;
                printf("enter the size of array\n");
                scanf("%d", &n);
                int a[n];
                printf("Enter the array elements\n");
                for(int i=0;i<n;i++)
                  {
                    scanf("%d",&a[i]);
                  }
        
               printf("Menu for you: \n");
               printf("1: Sorting\n");
               printf("2: Searching\n");

              printf("Enter your type: ");
              scanf("%d",&type_choice);

              switch(type_choice)
                {
                  case 1: 
                           printf("Welcome to Sorting\n");
                           printf("Algo Menu: \n");
                           printf("1: Bubble sort, 2: Selection sort, 3: Insertion sort,
                                    4: Merge sort, 5: Quick sort, 6: Heap sort\n");

                           printf("Enter your choice: ");
                           scanf("%d",&algo_choice);


                           switch(algo_choice)
                             {
                               case 1:
                                        printf("Bubble Sort\n");
                                        bubble_sort(a,n);
                                        printf("The sorted array is: \n");
                                        for(int i=0;i<n;i++)
                                          {
                                            printf("%d ",a[i]);
                                          }

                                           break;
                                        

                               case 2:
                                        printf("Selection Sort\n");
                                        selection_sort(a,n);
                                        printf("The sorted array is: \n");
                                        for(int i=0;i<n;i++)
                                          {
                                            printf("%d ",a[i]);
                                          }

                                            break;

                               case 3:
                                        printf("Insertion Sort\n");
                                        insertion_sort(a,n);
                                        printf("The sorted array is: \n");
                                        for(int i=0;i<n;i++)
                                          {
                                            printf("%d ",a[i]);
                                          }

                                            break;

                               case 4:  {
                                        printf("Merge Sort\n");
                                        int lb=0,ub=n-1;
                                        merge_sort(a,lb,ub);
                                        printf("The sorted array is: \n");
                                        for(int i=0;i<n;i++)
                                          {
                                            printf("%d ",a[i]);
                                          }

                                             break;
                               }

                               case 5:
                                        printf("Quick Sort\n");
                                        int quick_choice;
                                        printf("Quick Menu-> 1: Lomuto, 2: Hoare, 3: Randomized");
                                        scanf("%d",&quick_choice);
                                        switch(quick_choice)
                                          {
                                            case 1: {
                                                    printf("Lomuto\n"); 
                                                    int low=0,high=n-1;
                                                    lomuto_quick_sort(a,low, high);
                                                     printf("The sorted array is: \n");
                                                    for(int i=0;i<n;i++)
                                                   {
                                                     printf("%d ",a[i]);
                                                   }

                                                      break;
                                            }

                                            case 2: {
                                                    printf("Hoare\n"); 
                                                    int low=0,high=n-1;
                                                    hoare_quick_sort(a,low,high);
                                                     printf("The sorted array is: \n");
                                                    for(int i=0;i<n;i++)
                                                   {
                                                     printf("%d ",a[i]);
                                                   }

                                                      break;
                                            }

                                            case 3: {
                                                    printf("Randomized\n"); 
                                                    int low=0,high=n-1;
                                                    randomized_quick_sort(a,low,high);
                                                     printf("The sorted array is: \n");
                                                    for(int i=0;i<n;i++)
                                                   {
                                                     printf("%d ",a[i]);
                                                   }

                                                      break;
                                            }
                                                     
                                            
                                            default:

                                                    printf("Invalid input, Please try again\n");
                                            
                                          }
                                          
                
                               case 6:
                                        printf("Heap Sort\n");
                                        heap_sort(a,n);
                                        printf("The sorted array is: \n");
                                        for(int i=0;i<n;i++)
                                          {
                                            printf("%d",a[i]);
                                          }

                                             break;

                               default:
                                        printf("Invalid choice, Please try again\n");

                             }


                  break;


                  case 2:
                    
                          printf("Welcome to Searching\n");
                           printf("Algo Menu: \n");
                           printf("1: Linear search, 2: Binary search, 3:  Recursive Linear search,
                                    4: Recursive Binary search\n");

                           printf("Enter your choice: ");
                           scanf("%d",&algo_choice);

                           switch(algo_choice)
                             {
                                 case 1:
                                   {  printf("Linear Search\n"); 
                                   
                                                    int key;
                                                    printf("enter the key\n");
                                                    scanf("%d",&key);

                                                    int x=linear_search(a,n,key);

                                                    if(x==1)
                                                     {
                                                       printf("found");
                                                     }
                                                   else
                                                    {
                                                      printf("not found");
                                                    }

                                                      break;
                                   }
                               

                               case 2:
                                 {   printf("Binary Search\n"); 
                                   
                                                    int key;
                                                    printf("enter the key\n");
                                                    scanf("%d",&key);

                                                    int x=binary_search(a,n,key);

                                                    if(x==1)
                                                     {
                                                       printf("found");
                                                     }
                                                   else
                                                    {
                                                      printf("not found");
                                                    }

                                                      break;
                                 }

                               case 3:
                                 { printf("Recursive Linear Search\n"); 
                                   
                                                    int key;
                                                    printf("enter the key\n");
                                                    scanf("%d",&key);

                                                    int x=recursive_linear_search(a,n-1,key); //n-1 is the last element

                                                    if(x==1)
                                                     {
                                                       printf("found");
                                                     }
                                                   else
                                                    {
                                                      printf("not found");
                                                    }

                                                      break;
                                 }


                               case 4:
                                 { printf("Recursive Binary Search\n"); 
                                   
                                                    int key;
                                                    printf("enter the key\n");
                                                    scanf("%d",&key);
                                                    int low=0,high=n-1;

                                                    int x=recursive_binary_search(a,low,high,key);
                                 
                                                    if(x==1)
                                                     {
                                                       printf("found");
                                                     }
                                                   else
                                                    {
                                                      printf("not found");
                                                    }

                                                      break;
                                 }
                               
                          }


                     break;   

                  default:

                           printf("Invalid input, Please try again\n");
                  
                }


      case 2:

            printf("Thanks for participating, Program ends\n");
            break;
      
      default:
               printf("Invalid choice, please try again\n");

    }

  

  return 0;
}

































































































































