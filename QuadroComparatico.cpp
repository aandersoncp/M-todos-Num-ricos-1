void QuadroComparativo(long double a3[], long double a2[], long double lambda[], int n, long double dNewtonOriginal[], string excecoesNewtonOriginal[], long double dNewtonFL[], string excecoesNewtonFL[], long double dNewtonDerivadaNumerica[], string excecoesNewtonDerivadaNumerica[], long double absFDNewtonOriginal[], long double absFDNewtonFL[], long double absFDNewtonDerivadaNumerica[], int numIterNewtonOriginal[], int numIterNewtonFL[], int numIterNewtonDerivadaNumerica[]){
  for(int i = 0; i < n;  i++){
    cout << "\nDADOS INICIAIS a3 = " << a3[i] << ", a2 = " << a2[i] << ", lambda = " << lambda[i] << endl;
    if(excecoesNewtonOriginal[i] == "Nenhuma exceção."){
      cout << "Método Newton Original: " << "         x_ = " << dNewtonOriginal[i] << "   |f(x_)| = " << absFDNewtonOriginal[i] << "   Número de iterações: " << numIterNewtonOriginal[i] << endl;
    } else {
      cout << "Método Newton Original: " << "         x_ = " << excecoesNewtonOriginal[i]  << "   |f(x_)| = " << absFDNewtonOriginal[i] << "   Número de iterações: " << numIterNewtonOriginal[i] << endl;
    }
    if(excecoesNewtonFL[i] == "Nenhuma exceção."){
      cout << "Método Newton FL: " << "               x_ = " <<  dNewtonFL[i] << "   |f(x_)| = " << absFDNewtonFL[n] << "   Número de iterações: " << numIterNewtonFL[i] << endl;
    } else {
      cout << "Método Newton FL: " << "               x_ = " << excecoesNewtonFL[i] << "   |f(x_)| = " << absFDNewtonFL[n] << "   Número de iterações: " << numIterNewtonFL[i] << endl;
    }
    if(excecoesNewtonDerivadaNumerica[i] == "Nenhuma exceção."){
      cout << "Método Newton Derivada Numérica: " << "x_ = "<< dNewtonDerivadaNumerica[i] << "   |f(x_)| = " << absFDNewtonDerivadaNumerica[n] << "   Número de iterações: " << numIterNewtonDerivadaNumerica[n] << endl;
    } else {
      cout << "Método Newton Derivada Numérica: " << "x_ = " << excecoesNewtonDerivadaNumerica[i] << "   |f(x_)| = " << absFDNewtonDerivadaNumerica[n] << "   Número de iterações: " << numIterNewtonDerivadaNumerica[n] << endl;
    }
  }

}
