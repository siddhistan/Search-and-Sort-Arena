#ifndef SORTING_H
#define SORTING_H

int is_sorted(int arr[], int size);

void bubble_sort(int a[], int n,int *, int*);
void selection_sort(int a[], int n,int*, int*);
void insertion_sort(int a[], int n,int*, int*,int*);

void merge_sort(int a[], int lb, int ub,int *comparisons, int * inversions);
void merge(int a[], int lb, int mid, int ub,int* comparisons, int* inversions);

void lomuto_quick_sort(int a[], int low, int high, int *comparisons, int* swaps);
int lomuto_partition(int a[], int low, int high, int* comparisons, int* swaps);

void hoare_quick_sort(int a[], int low, int high, int *comparisons, int* swaps);
int hoare_partition(int a[], int low, int high, int* comparisons, int* swaps);

void randomized_quick_sort(int a[], int low, int high, int *comparisons, int* swaps);
int randomized_partition(int a[], int low, int high, int* comparisons, int* swaps);
int partition(int a[],int low,int high,int*comparisons,int*swaps);

void heap_sort(int a[], int n,int* comparisons, int * swaps);
void build_max_heap(int a[], int n,int* comparisons, int * swaps);
void heapify(int a[],int n,int i,int* comparisons, int * swaps);

void swap(int *x, int *y);



#endif


















































































































