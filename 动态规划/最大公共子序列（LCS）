#include <stdio.h>
#include <iostream>
#include <limits.h>
#include <vector>

using namespace std;

void print_LCS(int b[][100],int A[],int i,int j){

    if(i==0||j==0)
        return;
    if(b[i][j] == 0){
        print_LCS(b,A,i-1,j-1);
      //  cout<<"1";
        cout<<A[i-1]<<" ";
    }
    else if(b[i][j] ==1){
       // cout<<"2";
        print_LCS(b,A,i-1,j);
    }
    else
        print_LCS(b,A,i,j-1);
}

void LCS(int x[],int y[],int x_size,int y_size){
    int m  = x_size;
    int n = y_size;

    int dp[m+1][n+1];
    int s[100][100];
    for(int i=1;i<=m;i++){
        dp[i][0] = 0;
    }
    for(int i=0;i<=n;i++){
        dp[0][i] = 0;
    }

    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(x[i-1]==y[j-1])
            {
                dp[i][j] = dp[i-1][j-1] + 1;
                s[i][j] = 0;
            }
            else if(dp[i-1][j]>=dp[i][j-1])
            {
                dp[i][j] = dp[i-1][j];
                s[i][j] = 1;
            }
            else
            {
                dp[i][j] = dp[i][j-1];
                s[i][j] = 2;
            }
        }
    }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cout<<s[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<dp[m][n]<<endl;
    print_LCS(s,x,x_size,y_size);
}
int main() {
    int A[] = {1,2,4,5,6};
    int B[] = {1,2,3,5,6};
    LCS(A,B,5,5);


    return 0;
}
