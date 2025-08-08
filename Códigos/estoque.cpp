#include <bits/stdc++.h>
using namespace std;
int estoque[510][510];
int main() {
	int linhas, colunas;
    cin >> linhas >> colunas;
    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            cin >> estoque[i][j];
        }
    }
    int p, vendidas = 0;
    cin >> p;
    for (int i = 0; i < p; i++){
        int x, y;
        cin >> x >> y;
        if (estoque[x-1][y-1] - 1 >= 0){
            vendidas ++;
            estoque[x-1][y-1] --; 
        }
    }
    cout << vendidas;
}
