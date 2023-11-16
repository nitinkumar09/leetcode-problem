   #include<iostream>
    using namespace std;

    int search(int nums[],int size, int target) {
    int start = 0;
    int end =  size - 1;
    int mid = start + (end -start)/2;
    while(start<=end)
    {
        if(nums[mid] == target)
        {
            return mid;
        }
        if(nums[mid] > target)
        {
            end = mid - 1;
        }
        else // (nums[mid]<target)
        {
            start = mid + 1;
        }
         mid = start + (end -start)/2;
        }
        return -1;
    }
    int main()
    {
        int target;
        int  nums[10] ={-1,0,3,5,9,12};
        cout<<"enter target value  ...."<<" "<<endl;
        cin>>target;
        cout<<"target value at index  .... "<<" "<<search(nums,6,target)<<endl;
    }
