#include <stdio.h>
#include <iostream>
#include <limits.h>
#include <vector>

using namespace std;

void insert(int B[],int a,int &length,vector<vector<int>> &array){
    for(int i=0;i<length;i++){
        if(B[i]>a)
        {
            B[i] = a;
            array[i] = array[i-1];
            array[i].push_back(a);
            return;
        }
    }
    B[length] = a;
    array[length] = array[length-1];
    array[length].push_back(a);
    length++;
}
void max_increase(int A[],int n) {
    int B[n];
    vector<vector<int>> array(n);
    
    array[0].push_back(min);
    B[0] = min;
    int L = 1;
    for (int i = 1; i < n; i++) {
        insert(B, A[i], L, array);
    }
    cout << L << endl;

    for (int j = 0; j < L; j++) {
        for (int i = 0; i < array[j].size(); i++) {
            cout << array[ j][i] << " ";
        }
        cout<<endl;
    }
}

int main() {
    int A[]={1,3,6,7,9,4,10,5,6};
    max_increase(A,9);

    return 0;
}
