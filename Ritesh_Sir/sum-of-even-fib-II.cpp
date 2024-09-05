#include <iostream>
using namespace std;

void sum_of_even_fib(int n)
{
    int a=1;
    int b=1;
    int c=2;
    int sum=0;

    // every 3rd number in fib series is even
    while(c <= n) {
            sum += c;
            a = b + c;
            b = c + a;
            c = a + b;
        }
    cout<<"The sum ="<<sum<<endl;
}

int main()
{
     int n;
     cin>>n;
     sum_of_even_fib(n);
    return 0;
}