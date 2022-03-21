#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <vector>

using namespace std;

#define DBG(x) cout << "[" << #x << "]: " << x << endl
#define F(x) std::fixed <<std::setprecision(1)<<(x)

int main(int argc, char const *argv[])
{
    long int n, sum = 0, sum_gauss = 0, aux;
    cin >> n;
    for(int i = 0; i < n-1; i++){
        cin >> aux;
        sum += aux;
    }
    sum_gauss = ((1 + n) * n) / 2; 
    aux = sum_gauss - sum;
    cout << aux << '\n';
    return 0;
}
