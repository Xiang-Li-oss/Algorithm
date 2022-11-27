#include <stdio.h>



void swap(int A[],int i,int j){
    int temp = A[i];
    A[i] = A[j];
    A[j] = temp;
}

int partition(int A[],int p,int r){
    int x = A[r];
    int i = p-1;
    for(int j=p;j<r;j++){
        if(A[j]<=x){
            i++;
            swap(A,i,j);
        }
    }
    swap(A,i+1,r);
    return i+1;
}



int randomized_select(int A[],int p,int r,int i){
    if(p==r)
        return A[p];
    int q = partition(A,p,r);
    int k = q-p+1;
    if(k==i)
        return A[q];
    else if(k>i)
        return randomized_select(A,p,q-1,i);
    else
        return randomized_select(A,q+1,r,i-k);
}
int main()
{
    int A[] = {1,2,8,-3,-8,-2,6,10,5,-6};
    int result = randomized_select(A,0,9,3);
    printf("%d\n",result);
    

}
