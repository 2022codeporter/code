#include <iostream>
#include <vector>
using namespace std;
int binary_search(int nums[],int target){
    int low=0;
    int high=sizeof(nums)/4; //求数组的长度
    int mid;
    while(low<=high){
        mid=(low+high)/2;
        if(nums[mid]>target){
            high=mid-1;
        }
        if(nums[mid]<target){
            low=mid+1;
        }
        else return mid;
    }
    return -1;
}
int main(){
    int nums[]={1,2,3,4,5,6,7,8,9,10};
    int index=binary_search(nums,4);
    if(index!=-1){
        cout<<"查找成功 "<<nums[index];
    } 
    else{
        cout<<"查找失败";
    }
}
