#include<iostream>
using namespace std;
 int peakIndexInMountainArray(int arr[], int size) {
        int s = 0;
        int e = size - 1;
        int mid = s + (e - s) / 2;
        while(s<e)
        {
            if(arr[mid] < arr[mid+1])
            {
               s = mid + 1;
            }
            else{
                e = mid;
            }
          mid = s + (e - s) / 2;
        }
        return s;
    }

    int main()
    {
        int arr[10] = {0,10,5,2};
       cout<<"peak index of mounting array is "<<"  "<< peakIndexInMountainArray(arr,4)<<endl;

    }
