#include<iostream>
using namespace std;
///  Square Root Of Number Using Binary Search   ....!
long long int SquareRootOfNumber(int n)
{
    int c = n;
    int s = 0;
    int e = n;
    int ans = -1;
    long long int mid = s + (e - s) / 2;
    while(s<e)
    {
       long long  int k = mid * mid ;
        if(k>c)
        {
            e = mid - 1;
        }
        else if(c>k)
        {
            ans = mid;
            s = mid+1;
        }
        else if (c==k){
            return mid;
        }
        mid = s + (e - s) / 2;
    }
return ans;
}
    int main()
    {
        int num;
        cout<<"enter a number for find sqrt of  number   .....!"<<endl;
        cin>>num;
        int n = SquareRootOfNumber(num);
        cout<<"root is "<<" "<<n<<endl;
    }
