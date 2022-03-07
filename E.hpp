#include <bits/stdc++.h>

using namespace std;

template <class T>
void multiples(T& sum, T x, int n)
{
        sum = 1;
        for(int i = 1; i <= n; i++){
                sum += i * x;
        }
}
