#include <iostream>
#include <iomanip>
#include <math.h>
 
using namespace std;
 
#define DBG(x) cout << "[" << #x << "]: " << x << endl
#define F(x) std::fixed <<std::setprecision(1)<<(x)

typedef long long ll;

const ll md = 1000000007;
 
int main(int argc, char const *argv[]){ 
    long long int n, result;
    cin >> n;  
    result = 2;

    while(n-1){
        result = (result * 2) % md;
        n--;
    }
    
    
    cout << result;
    return 0;
}

// 0 1
// 00 01 10 11
// 000 001 010 011 100 101 110 111
// 0000 0001 0010 0011 0100 0101 0110 0111 1000 1001 1010 1011 1100 1101 1110 1111