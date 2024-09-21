#include<stdio.h>
int main () {
    int i, j,n,peak=-1;
    int arr[100];
    //int peak[] = {};
    scanf("%d", &n);
    for ( j = 0; j < n; j++) {
        scanf("%d", &arr[j]);
        }
        if(arr[0]> arr[1]) {
         peak = arr[0];
        }
        else{
        for(i = 1; i < n-1; i++) {
            if (arr[i]>= arr[i+1] && arr[i]>= arr[i-1] )
                {
             peak= arr [i];
            }
        }
        }
        if (n>1 && arr[n-1]>=arr[n-2]) {
            peak = arr[n-1];
        }
        printf ("%d",peak);

    return 0;
}
