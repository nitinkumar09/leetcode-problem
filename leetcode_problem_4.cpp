#include<iostream>
using namespace std;

int getpivot(int nums[],int n)
{
    int s= 0;
    int e = n -1;
    int mid = s+ (e - s) / 2;
    while(s<e)
    {
        if(nums[mid]>=nums[0])
        {
            s = mid + 1;
        }
        else //if(nums[mid] <nums[0])
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return e;
}

int binary_search(int nums[],int f,int n,int target)
{
    int s = f;
    int e = n-1 ;
    int mid = s + (e - s) / 2;
    while(s<=e)
    {
        if(nums[mid] == target)
        {

            return mid;
        }

        else if(nums[mid]>target)
        {
            e = mid - 1;
        }
        else // if (nums[mid]<target)
        {
            s = mid + 1;
        }
        mid  = s + (e - s) / 2;
    }
    return -1;
}

int main()
{
    int target;
    int nums[10] ={4,5,6,7,0,1,2};
    cout<<"enter target value "<<" "<<endl;
    cin>>target;
        int n = 7;
        int pivot = getpivot(nums,n);
        if(target>=nums[pivot] && target<=nums[n-1])
        {
            cout<<binary_search(nums,pivot,n,target)<<" "<<" is target value  .... !"<<endl;
        }
        else{
             cout<<binary_search(nums,0,pivot,target)<<" "<<" is target value  ... !"<<endl;
        }
}
