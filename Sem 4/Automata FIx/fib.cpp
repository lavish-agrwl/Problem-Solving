#include<iostream>
using namespace std;

int fib(int n)
{
    if (n <= 1)
        return n;
    int prev2 = 0, prev1 = 1, cur;
    for (int i = 2; i <= n; i++)
    {
        // write your code here.
        cur = prev1 + prev2;
        prev2 = prev1;
        prev1 =cur;
    }
    return cur;
}
int main(){
    cout << fib(10);
}