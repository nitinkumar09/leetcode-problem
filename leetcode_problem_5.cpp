#include<iostream>
using namespace std;

    int findPeakElement(int nums[],int n) {

    int s = 0, e = n - 1;
    int mid = s + (e - s)/2;
    while(s<e){
        if(nums[mid]<nums[mid+1])
        {
            s = mid+1;
        }
        else if(nums[mid]>nums[mid+1])
        {
            e = mid;
        }
        mid = s + (e - s) /2;
    }
    return s;
    }

    int main()
{
    int nums[10] = {1,2,3,1};
    cout<<findPeakElement(nums,4)<<" "<< " is peak element  ... !"<<endl;

}
