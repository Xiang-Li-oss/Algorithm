#include <stdio.h>
#include <iostream>
#include <limits.h>
using namespace std;


struct matrix{
    int line;
    int colum;
    matrix(int a,int b){
        line = a;
        colum = b;
    }
};

void print_optimal_parens(vector<vector<int>> &s,int i,int j){
    if(i==j)
        cout<<"A"<<i;
    else
    {
        cout<<"(";
        print_optimal_parens(s,i,s[i][j]);
        print_optimal_parens(s,s[i][j]+1,j);
        cout<<")";
    }
}

void matrix_chain_order(matrix a[],int length){
    int  n = length;
    int solution[n+1][n+1];
    vector<vector<int>> s(n+1);
   for(int i=1;i<=n;i++){
       for(int j=1;j<n;j++)
           s[i].push_back(0);
   }

    for(int i=1;i<=n;i++){
        solution[i][i] = 0;
    }

    for(int l = 2; l <= n; l++){
        for(int i = 1; i <= n - l + 1; i++){
            int j = i + l - 1;
            solution[i][j] = INT_MAX;
            for(int k = i; k <= j-1; k++){
                int sum = solution[i][k] + solution[k+1][j] + a[i-1].line*a[k-1].colum*a[j-1].colum;
                if(sum < solution[i][j]){
                    solution[i][j] = sum;
                    s[i][j]=k;
                }
            }

        }
    }

    cout<<solution[1][n]<<endl;
    print_optimal_parens(s,1,n);

}
int main()
{
    matrix matrixs[6]={
            {30,35},
            {35,15},
            {15,5},
            {5,10},
            {10,20},
            {20,25}
    };

    matrix_chain_order(matrixs,6);

}
