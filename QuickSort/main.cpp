/*  This is demo quicksort  
 *  There have the sort.
 */

#include <stdio.h>

void swap(int a[], int i , int j){
    int tmp = a[i];
    a[i] = a[j];
    a[j] = tmp;
}

void sort(int a[], int start , int end){
    int keyvalue = a[start];

    int left_index = start+1;
    int right_index = end;
    if(start < end){
        while(true){
            for(; a[left_index] < keyvalue ; left_index++);
            for(; a[right_index] > keyvalue ; right_index--);
            if(left_index>=right_index)
                break;
            swap(a,left_index,right_index);
        }
        swap(a,start,right_index);
        sort(a,start,right_index-1);
        sort(a,right_index+1,end);
    }
}

int main(){
    int a[] = {1,2,5,2,1,50,20,33,245,52};
    sort(a,0,9);
    for(int i = 0 ; i < 10 ; i++){
        printf("%d ",a[i]);
    }
}
