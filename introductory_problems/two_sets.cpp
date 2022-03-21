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
    int n;
    vector <int> vet1, vet2;
    cin >> n;
    if((((1+n) * n) / 2) % 2 == 0){ //Soma de gauss para saber se a soma dos numeros de 1 até n pode ser dividida em dois subconjuntos
        int aux = 1, count = 0, tam_vet1 = 0, tam_vet2 = 0;
        if(n % 2 == 0){
            count = 1;
        }
        for(int i = 1; i != n+1; i++){
            count ++;
            if (aux == 1){
                vet1.push_back(i);
                tam_vet1++;
            }else {
                vet2.push_back(i);
                tam_vet2++;
            }
            if(count == 2){
                count = 0;
                if(aux == 1){
                    aux = 0;
                }else {
                    aux = 1;
                }
            }
        }
        cout << "YES" << '\n';
        cout << tam_vet1 << '\n';
        for(int i : vet1){
            if(i == vet1.back()){
                cout << i << '\n';
            }else {
                cout << i << " ";
            }
        } 
        cout << tam_vet2 << '\n';
        for(int i : vet2){
            if(i == vet2.back()){
                cout << i << '\n';
            }else {
                cout << i << " ";
            }
        } 
    }else {
        cout << "NO" << '\n';
    }
    return 0;
}