#include <stdio.h>
#include <stdlib.h>

//bubble sort
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}

int main(){
    int num=12;
    FILE *fptrin,*fptrout;
    fptrin = fopen("input.txt","r");
    fptrout = fopen("output.txt","w");
    if(fptrin == NULL){
        printf("Error input!");
        exit(1);
    }

    fscanf(fptrin,"%d",&num);
    int arr[num];
    for(int i=0;i<num;i++){
        fscanf(fptrin,"%d",&arr[i]);
    }
    
    bubbleSort(arr,num);

    for(int i=0;i<num;i++){
        fprintf(fptrout,"%d ",arr[i]);
    }

    
    fclose(fptrin);
    fclose(fptrout);
    return 0;
}