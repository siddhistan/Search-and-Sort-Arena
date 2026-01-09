#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#include "sorting.h"
#include "searching.h"

void clear_buffer() {  // ← Here
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main()
{
  srand(time(NULL)); 
  int choice,type_choice,algo_choice;
  int scanf_result;
  while(1)  {
     printf("The main menu: \n");
     printf("1: Start the program\n");
     printf("2: End the program\n");

  printf("enter your choice: \n");
  scanf_result=scanf("%d",&choice);
  clear_buffer();

    if (scanf_result != 1)
    {
       printf("Invalid choice, please try again\n");
       continue;
    }

    if(choice==2)
    {
          printf("Thanks for participating, Program ends\n");
          break;
    }

    if (choice != 1)
{
    printf("Invalid choice, please try again\n");
    continue;
}

  switch(choice)
    {
      
      case 1: 
               printf("Welcome to Sorting and Searching Arena\n");

                int n;
                printf("enter the size of array\n");
                scanf_result=scanf("%d", &n);
                clear_buffer();

                 if (scanf_result != 1 || n <= 0)
                 {
                   printf("Invalid array size\n");
                   continue;   // goes back to main menu loop
                 }
        
                int *a=(int*)malloc(n*sizeof(int));
                if (a == NULL)
                 {
                     printf("Memory allocation failed\n");
                     return 1;
                  }

                printf("Enter the array elements, and enter elements in sorted order in case you select binary search\n");
                int invalid=0;
                for(int i=0;i<n;i++)
                  {
                    scanf_result=scanf("%d",&a[i]);

                    if (scanf_result != 1) 
                       {
                          printf("Invalid element. Re-enter entire array.\n");
                          clear_buffer();
                          invalid = 1;
                          break;
                       }    
                    
                  }

                  if (invalid)
                     {
                      free(a);
                      continue;   // restart from array size input
                     } 
        
        
               printf("Menu for you: \n");
               printf("0: Exit the program\n");
               printf("1: Sorting\n");
               printf("2: Searching\n");

              printf("Enter your type: \n");
              scanf_result=scanf("%d",&type_choice);
              clear_buffer();

               if (scanf_result != 1 || type_choice < 0 || type_choice > 2) 
                    {
                      printf("Invalid choice\n");
                      continue;
                    }

              switch(type_choice)
                {
                        case 0:
                                    free(a);
                                    printf("Thanks! Goodbye.\n");
                                    return 0; 
                        case 1: 
                           printf("Welcome to Sorting\n");
                           printf("Algo Menu: \n");
                           printf("0: Exit the program, 1: Bubble sort, 2: Selection Sort, 3: Insertion sort, 4: Merge Sort, 5: Quick Sort, 6: Heap sort");

                           printf("Enter your choice: \n");
                          scanf_result=scanf("%d",&algo_choice);
                          clear_buffer();

                          if (scanf_result != 1 || algo_choice < 0 || algo_choice > 6)
                               {
                                printf("Invalid choice\n");
                                continue;
                               }


                           switch(algo_choice)
                             {
                               
                               case 0:
                                       free(a);
                                       printf("Thanks! Goodbye.\n");
                                                    return 0; 
                               case 1:  {
                                        printf("Bubble Sort\n");
                                        int swaps=0,comparisons=0;
                                        bubble_sort(a,n,&comparisons,&swaps);
                                        printf("The sorted array is: \n");
                                        for(int i=0;i<n;i++)
                                          {
                                            printf("%d ",a[i]);
                                          }

                                        printf("swaps: %d, comparisons: %d\n",swaps,comparisons);


                                           break;
                               }
                                        

                               case 2:  {
                                        printf("Selection Sort\n");
                                        int comparisons=0,swaps=0;
                                        selection_sort(a,n,&comparisons,&swaps);
                                        printf("The sorted array is: \n");
                                        for(int i=0;i<n;i++)
                                          {
                                            printf("%d ",a[i]);
                                          }

                                        printf("swaps: %d, comparisons: %d\n",swaps,comparisons);
                                 
                                            break;
                               }

                               case 3: {
                                        printf("Insertion Sort\n");
                                        int comparisons=0,shifts=0,inversions=0;
                                        insertion_sort(a,n,&comparisons,&shifts,&inversions);
                                        printf("The sorted array is: \n");
                                        for(int i=0;i<n;i++)
                                          {
                                            printf("%d ",a[i]);
                                          }

                                         printf("shifts: %d, comparisons: %d, inversions: %d\n",shifts,comparisons, inversions);

                                            break; }

                               case 4:  {
                                        printf("Merge Sort\n");
                                        int lb=0,ub=n-1;
                                        int comparisons=0,inversions=0;
                                        merge_sort(a,lb,ub,&comparisons,&inversions);
                                        printf("The sorted array is: \n");
                                        for(int i=0;i<n;i++)
                                          {
                                            printf("%d ",a[i]);
                                          }

                                         printf("inversions: %d, comparisons: %d\n",inversions,comparisons);

                                             break;
                               }

                               case 5:    
                                        printf("Quick Sort\n");
                                        int quick_choice;
                                        printf("Quick Menu-> 0: Exit, 1: Lomuto, 2: Hoare, 3: Randomized\n");
                                        scanf_result=scanf("%d",&quick_choice);
                                        clear_buffer();

                                         if (scanf_result != 1 || quick_choice < 0 || quick_choice > 3) 
                                           {
                                             printf("Invalid choice\n");
                                             continue;
                                            }

                                 
                                        switch(quick_choice)
                                          {
                                            case 0:
                                                    free(a);
                                                    printf("Thanks! Goodbye.\n");
                                                    return 0; 
                                                     
                                            case 1: {
                                                    printf("Lomuto\n"); 
                                                    int low=0,high=n-1;
                                                    int comparisons=0,swaps=0;
                                                    lomuto_quick_sort(a,low, high, &comparisons, &swaps);
                                                     printf("The sorted array is: \n");
                                                    for(int i=0;i<n;i++)
                                                   {
                                                     printf("%d ",a[i]);
                                                   }

                                                    printf("comparisons: %d, swaps: %d\n", comparisons,swaps);

                                                      break;
                                            }

                                            case 2: {
                                                    printf("Hoare\n"); 
                                                    int low=0,high=n-1;
                                                    int comparisons=0,swaps=0;
                                                    hoare_quick_sort(a,low, high, &comparisons, &swaps);
                                                     printf("The sorted array is: \n");
                                                    for(int i=0;i<n;i++)
                                                   {
                                                     printf("%d ",a[i]);
                                                   }

                                                    printf("comparisons: %d, swaps: %d\n", comparisons,swaps);

                                                      break;
                                            }

                                            case 3: {
                                                    printf("Randomized\n"); 
                                                    int low=0,high=n-1;
                                                    int comparisons=0,swaps=0;
                                                    randomized_quick_sort(a,low,high,&comparisons,&swaps);
                                                     printf("The sorted array is: \n");
                                                    for(int i=0;i<n;i++)
                                                   {
                                                     printf("%d ",a[i]);
                                                   }

                                                     printf("comparisons: %d, swaps: %d\n", comparisons,swaps);
                                              
                                                      break;
                                            }        
                                            
                                            default:

                                                    printf("Invalid input, Please try again\n");
                                            
                                          }

                                        break;
                                          
                
                               case 6:  {
                                        printf("Heap Sort\n");
                                        int comparisons=0,swaps=0;
                                        heap_sort(a,n,&comparisons,&swaps);
                                        printf("The sorted array is: \n");
                                        for(int i=0;i<n;i++)
                                          {
                                            printf("%d ",a[i]);
                                          }

                                         printf("comparisons: %d, swaps: %d\n", comparisons,swaps);

                                             break;
                               }

                               default:
                                        printf("Invalid choice, Please try again\n");

                             }


                  break;


                  case 2:
                    
                          printf("Welcome to Searching\n");
                           printf("Algo Menu: \n");
                           printf("0: Exit, 1: Linear search, 2: Binary search, 3:  Recursive Linear search, 4: Recursive Binary search\n");

                           printf("Enter your choice: ");
                           scanf_result=scanf("%d",&algo_choice);
                           clear_buffer();

                            if (scanf_result != 1 || algo_choice < 0 || algo_choice > 4)
                              {
                                printf("Invalid choice\n");
                                continue;
                               }


                           switch(algo_choice)
                             {
                               
                                case 0:
                                                    free(a);
                                                    printf("Thanks! Goodbye.\n");
                                                    return 0; 
                                 case 1:
                                   {  printf("Linear Search\n"); 
                                   
                                                    int key;
                                                    printf("enter the key\n");
                                                    scanf_result=scanf("%d",&key);
                                                    clear_buffer();

                                                     if (scanf_result != 1) 
                                                       {
                                                        printf("Invalid key\n");
                                                        continue;
                                                       }
                                    

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

                                  
                                                      if (!is_sorted(a, n)) {
                                                             printf("CRIME DETECTED: Array unsorted! Public execution in Times Square avoided—re-enter sorted array.\n");
                                                              free(a);
                                                              continue;  // Back to array input
                                                            }
                                  
                                                    int key;
                                                    printf("enter the key\n");
                                                    scanf_result=scanf("%d",&key);
                                                    clear_buffer();

                                                     if (scanf_result != 1) 
                                                       {
                                                        printf("Invalid key\n");
                                                        continue;
                                                       }

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
                                                    scanf_result=scanf("%d",&key);
                                                    clear_buffer();

                                                     if (scanf_result != 1) 
                                                       {
                                                        printf("Invalid key\n");
                                                        continue;
                                                       }

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

                                                    if (!is_sorted(a, n)) {
                                                             printf("CRIME DETECTED: Array unsorted! Public execution in Times Square avoided—re-enter sorted array.\n");
                                                              free(a);
                                                              continue;  // Back to array input
                                                            }
                                   
                                                    int key;
                                                    printf("enter the key\n");
                                                    scanf_result=scanf("%d",&key);
                                                    clear_buffer();

                                                     if (scanf_result != 1) 
                                                       {
                                                        printf("Invalid key\n");
                                                        continue;
                                                       }
                                  
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

            free(a);

            break; //break of 1st case 1 in the program
      
      
      default:
               printf("Invalid choice, please try again\n");

    }

    printf("\n");


  }//while loop completes

  

  return 0;
}
