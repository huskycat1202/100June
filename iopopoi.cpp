#include <stdio.h>
#include <stdlib.h> //랜덤함수 호출
#include <time.h>
#include <iostream>
using namespace std;

int arr[10000];
int N;
long long cnt_com,cnt_exch;
void qick(int begin,int end){
    cnt_com++;
    if(begin>=end) {
        return ;
    }
    
    int pivot=begin;
    int i=begin+1;
    int j=begin+1;

    while(i<=end){
        if(arr[pivot]>arr[i]){
            int x=arr[i];
            arr[i]=arr[j];
            arr[j]=x;
            j++;
            cnt_exch++;
        }
        cnt_com++;
        i++;
    }
    int x=arr[pivot];
    arr[pivot]=arr[j-1];
    arr[j-1]=x;
    cnt_exch++;
    qick(begin,j-1);
    qick(j,end);
}


int main(){
    cin>>N;
    srand(static_cast<unsigned int>(std::time(0)));
    clock_t start;
    clock_t end;

    for(int i=0;i<N;i++){
        arr[i]=rand()%100000;
    }
    start = clock();
    qick(0,N-1);
    end = clock();
    for(int i=0;i<N;i++){
        // cout<<arr[i]<<"\n";
    }
    cout<<cnt_com<<" "<<cnt_exch<<" ";
   printf("Time: %lf\n",(double)(end-start));
}