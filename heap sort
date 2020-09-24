#include <iostream>
#include <vector>
#include <algorithm>
#include <time.h>

using namespace std;


void max_heapify(int A[], int parent_idx, int length){
    int left = 2*parent_idx+1;
    int right = 2*parent_idx + 2;
    int max_idx = parent_idx;

    if(left<length && A[left] > A[max_idx])
        max_idx = left;

    if(right<length && A[right] > A[max_idx])
        max_idx = right;

    if(max_idx != parent_idx){
        swap(A[max_idx],A[parent_idx]);
        max_heapify(A,max_idx,length);
    }
}

void build_heap(int A[],int length){
    for(int i=length/2-1;i>=0;i--)
        max_heapify(A,i,length);
}
void heap_sort(int A[],int length){
    for(int i = length-1;i>0;i--){
        swap(A[0],A[i]);
        max_heapify(A,0,i);
    }
}

int main()
{

    int a[10] = {12,45,748,12,56,3,89,4,48,2};
    int length = sizeof(a)/ sizeof(int);

    for (int i = 0; i != length; ++i)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    build_heap(a,length);
    heap_sort(a,length);
    for (int i = 0; i != length; ++i)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}

