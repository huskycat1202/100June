#include<stdio.h>
int main(){
    int k,n,arr[50]={},temp;
    scanf("%d", &k);
    for(int i=0; i<k; i++){
        int max=0;
        scanf("%d", &n);
        for(int j=0; j<n; j++){
            scanf("%d", &arr[j]);
        }
        for(int l=0; l<n; l++){
            for(int u=0; u<n-l-1; u++){
                if(arr[u]<arr[u+1]){
                    temp=arr[u];
                    arr[u]=arr[u+1];
                    arr[u+1]=temp;
                }
            }

        }
        for(int o=0; o<n-1; o++){
            if(arr[o]-arr[o+1]>max) max=arr[o]-arr[o+1];
        }
        printf("Class %d\nMax %d, Min %d, Largest gap %d\n", i+1, arr[0],arr[n-1],max);
    }
}