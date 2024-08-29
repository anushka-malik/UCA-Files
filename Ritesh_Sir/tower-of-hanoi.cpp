#include <iostream>
// #include <bits/stdc++.h>
using namespace std;

void toha(int n, int from, int to, int aux, long long &c)
{
    if (n == 0)
    {
        return;
    }
    toha(n - 1, from, aux, to,c);
    cout << "move disk " << n << " from rod " << from<< " to rod " << to<< endl;
    c++;
    toha(n - 1, aux, to, from,c);
}

long long toh(int n, int from, int to, int aux) 
{
    long long count=0;
    toha(n,from,to,aux,count);
    return count;
}
int main()
{
    int n,from,to,aux;
    cin>>n;
    from=1;
    to=3;
    aux=2;
    long long res=toh(n,from,to,aux);
    cout<<res<<endl;
    return 0;
}