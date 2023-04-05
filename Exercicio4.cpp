#include <iostream>

using namespace std;

int main() {
    double sp = 67836.43;
    double rj = 36678.66;
    double mg = 29229.88;
    double es = 27165.48;
    double outros = 19849.53;
    double total = sp + rj + mg + es + outros;
    
    double perc_sp = (sp / total) * 100;
    double perc_rj = (rj / total) * 100;
    double perc_mg = (mg / total) * 100;
    double perc_es = (es / total) * 100;
    double perc_outros = (outros / total) * 100;

   
    cout << "Percentual de representacao por estado:" << endl;
    cout << "SP: " << perc_sp << "%" << endl;
    cout << "RJ: " << perc_rj << "%" << endl;
    cout << "MG: " << perc_mg << "%" << endl;
    cout << "ES: " << perc_es << "%" << endl;
    cout << "Outros: " << perc_outros << "%" << endl;
    
    return 0;
}
