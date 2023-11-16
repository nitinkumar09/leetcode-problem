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
double morePrecision(int num,int precision,int n)
{
    double ans = n;
    double factor = 1;
    for(double i=1;i<=precision;i++)
    {
          factor = factor/10;
        for(double j = ans; j*j<num; j=j+factor)
        {
            ans = j;
        }
    }
    return ans;
}
    int main()
    {
        int num;
        cout<<"enter a number for find sqrt of  number   .....!"<<endl;
        cin>>num;
        int n = SquareRootOfNumber(num);
        cout<<" answer is  ... "<<"  "<<morePrecision(num,3,n)<<endl;
    }
