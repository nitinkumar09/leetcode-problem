#include<iostream>
using namespace std;

 bool isPowerOfTwo(int n) {
        int j = 0;
        int count = 0;
           while(n!=0)
        {
             j = n&1;
             if(j==1)
             {
                  count++;
             }
             if(count == 2)
             {
                 break;
             }
             n = n>>1;
        }
        if(count == 1)
        {
            return 1;
        }
        return 0;

    }

int main()
{
    int num;
    cout<<"enter a number check for number is power of two or not  ... !"<<" "<<endl;
    cin>>num;
    cout<<"answer return in  boolean functin   ==>  ....   "<<"  "<<isPowerOfTwo(num)<<endl;
}
