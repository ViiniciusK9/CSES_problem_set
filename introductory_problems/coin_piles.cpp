#include <iostream>
#include <iomanip>
#include <math.h>
 
using namespace std;
 
#define DBG(x) cout << "[" << #x << "]: " << x << endl
#define F(x) std::fixed <<std::setprecision(1)<<(x)
 
int main(int argc, char const *argv[]){   
    int n, a, b;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        if(a == b && a % 3 == 0){
            cout << "YES\n";
        } else if (a > b && (a / 2) == b){
            cout << "YES\n";
        } else if (a < b && (b / 2) == a){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }

    }
    


    return 0;
}