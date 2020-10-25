#include <stdio.h>


 
int bottom_up_cut_rod(int p[],int n){
   // int p[] = {1,5,8,9,10,17,17,20,24,30};
    int r[n+1];
    r[0] = 0;
    for(int i=1;i<=n;i++){
        int best_result = -1;
        for(int j=1;j<=i;j++){
            if((p[j-1]+r[i-j])>best_result)
                best_result=p[j-1]+r[i-j];
        }
        r[i] = best_result;
    }
    for(int i=0;i<=n;i++)
        printf("%d ",r[i]);
    return r[n];
};
int main()
{
    int A[] = {1,2,8,-3,-8,-2,6,10,5,-6};
    int p[] = {1,5,8,9,10,17,17,20,24,30};
    int result = bottom_up_cut_rod(p,10);
    printf("\n%d\n",result);


}
