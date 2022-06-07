#include <iostream>
#include <iomanip>
#include <math.h>
 
using namespace std;
 
#define DBG(x) cout << "[" << #x << "]: " << x << endl
#define F(x) std::fixed <<std::setprecision(1)<<(x)
 
int main(int argc, char const *argv[]){   
    long long int t, x, y;
    cin >> t;
    while (t--){
        cin >> y >> x;
        
        long long int result = 0;
        if(x >= y){
            if(x % 2 != 0){
                result = x * x;
                result -= y -1;
            }else {
                result = x * x;
                result -= ((x - 1) + (x - y));
            }
        } else {
            if(y % 2 == 0){
                result = y * y;
                result -= x -1;
            }else {
                result = y * y;
                result -= y -1;
                result -= y - x;
            }
        }
        cout << result << '\n';
        
        
    }
    
    return 0;
}