#include <iostream>
using namespace std;

void QuadroResposta(long double a3[], long double a2[], long double lambda[], int n, long double dNewtonOriginal[], string excecoesNewtonOriginal[], long double dNewtonFL[], string excecoesNewtonFL[], long double dNewtonDerivadaNumerica[], string excecoesNewtonDerivadaNumerica[]){
	for(int i = 0; i < n;  i++){
		cout << "DADOS a3 = " << a3[i] << " a2 = " << a2[i] << " lambda = " << lambda[i] << endl;
		if(excecoesNewtonOriginal[i] == "Nenhuma exceção."){
			cout << "Método Newton Original resultado: " << dNewtonOriginal[i] << endl;
		} else {
			cout << "Método Newton Original resultado: " << excecoesNewtonOriginal[i] << endl;
		}
		if(excecoesNewtonFL[i] == "Nenhuma exceção."){
			cout << "Método Newton FL resultado: " << dNewtonFL[i] << endl;
		} else {
			cout << "Método Newton FL resultado: " << excecoesNewtonFL[i] << endl;
		}
		if(excecoesNewtonDerivadaNumerica[i] == "Nenhuma exceção."){
			cout << "Método Newton Derivada Numérica resultado: " << dNewtonDerivadaNumerica[i] << endl;
		} else {
			cout << "Método Newton Derivada Numérica resultado: " << excecoesNewtonDerivadaNumerica[i] << endl;
		}
	}
}
