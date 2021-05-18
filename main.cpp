#include <iostream>

using namespace std;

int main()
{
    int v, t, velocidade;
    while (cin >> v){
        cin >> t;
        velocidade = v * t * 2;
        cout << velocidade <<endl;
    }
    return 0;
}
