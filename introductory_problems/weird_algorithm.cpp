#include <iostream>
#include <iomanip>
#include <math.h>
 
using namespace std;
 
#define DBG(x) cout << "[" << #x << "]: " << x << endl
#define F(x) std::fixed <<std::setprecision(1)<<(x)
 
int main(int argc, char const *argv[])
{
    int64_t n;
    cin >> n;
    cout << n << " ";
    while (n != 1){
        if (n % 2 == 0){
            n = n / 2;
            if (n == 1){
                cout << n << endl;
            }else {
                cout << n << " ";
            }
        }else{
            n = (n * 3) + 1;
            cout << n << " ";
        }
    }
    return 0;
}