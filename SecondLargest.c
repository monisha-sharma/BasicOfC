#include<stdio.h>

int main(){
    int arr[10];
    int n=0;
    int lar=0,sec=0;
    printf("Enter no. \n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    lar = arr[0];
    sec = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>sec && arr[i]<lar)
            sec = arr[i];
        else if(arr[i]>lar)
        {
            sec = lar;
            lar = arr[i];
        }
        else if(lar==sec){
                sec =arr[i];

        }
    }
    printf("lar = %d, sec =%d\n",lar,sec);
}
