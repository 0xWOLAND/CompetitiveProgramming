#include <bits/stdc++.h>
using namespace std;

int arr[] = {9,7,8,6,4,5,3,1,2};

merge(int l, int mid, int h){
    int k[9];
    int i = l, j = mid + 1, k;
    while(i < mid && j < h){
        
    }
}

void MergeSort(int l, int h){
    if(l < h){
        mid = (l + h)/2;
        MergeSort(l, mid);
        MergeSort(mid+1, h);
        merge(l,mid,h);
    }
}

int main() {
}
