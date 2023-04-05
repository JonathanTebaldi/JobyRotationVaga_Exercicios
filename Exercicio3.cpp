#include <iostream>
#include <vector>
#include <numeric> 

using namespace std;

int main() {
	setlocale(LC_ALL,"portuguese");
    vector<double> faturamento_diario; 
    int n; 
    double total = 0; 
    double media; 
    int acima_da_media = 0; 

  
    cout << "Digite o número de dias do mês: ";
    cin >> n;

    
    for (int i = 0; i < n; i++) {
        double valor;
        cout << "Digite o faturamento do dia " << i+1 << ": ";
        cin >> valor;
        faturamento_diario.push_back(valor);
        total += valor;
    }

    
    media = total / n;

   
    double menor = faturamento_diario[0], maior = faturamento_diario[0];
    for (int i = 1; i < n; i++) {
        if (faturamento_diario[i] < menor) {
            menor = faturamento_diario[i];
        }
        if (faturamento_diario[i] > maior) {
            maior = faturamento_diario[i];
        }
    }

    for (int i = 0; i < n; i++) {
        if (faturamento_diario[i] > media) {
            acima_da_media++;
        }
    }

   
    cout << "Menor valor de faturamento diário: " << menor << endl;
    cout << "Maior valor de faturamento diário: " << maior << endl;
    cout << "Número de dias com faturamento acima da média mensal: " << acima_da_media << endl;

    return 0;
}
