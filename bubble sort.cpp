#include <iostream>
#include <vector>
#include <algorithm>
#include <time.h>

using namespace std;


void bubble_sort(int A[],int length){
    for(int j=length-2;j>=0;j--){
        for(int i=0;i<=j;i++){
            if(A[i]>A[i+1])
                swap(A[i],A[i+1]);
        }
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

    bubble_sort(a,length);
    for (int i = 0; i != length; ++i)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
