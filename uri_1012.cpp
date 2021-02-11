#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double A, B, C;
    double triangulo, circulo, trapezio, quadrado, retangulo;

    cin >> fixed >> setprecision(1) >> A >> B >> C;

    triangulo = A * C / 2;
    cout << fixed << setprecision(3) << "TRIANGULO: " << triangulo << endl;

    circulo = 3.14159 * (C * C);
    cout << fixed << setprecision(3) << "CIRCULO: " << circulo << endl;

    trapezio = (A + B) * C / 2;
    cout << fixed << setprecision(3) << "TRAPEZIO: " << trapezio << endl;

    quadrado = B * B;
    cout << fixed << setprecision(3) << "QUADRADO: " << quadrado << endl;

    retangulo = A * B;
    cout << fixed << setprecision(3) << "RETANGULO: " << retangulo << endl;

    return 0;
}
