#include <iostream>
#include <cmath> 

using namespace std;

void raizes(float A, float B, float C, float *X1, float *X2) 
{
    float delta = pow(B,2) - (4 * A * C);

        *X1 = (-B + sqrt(delta)) / (2 * A);
        *X2 = (-B - sqrt(delta)) / (2 * A);
}

int main() 
{
    float A, B, C;
    float X1, X2;
    cout << "Digite os coeficientes A, B e C da equacao: ";
    cin >> A >> B >> C;

    raizes(A, B, C, &X1, &X2);

    cout << "Raizes: " << X1 << " e " << X2 << endl;

}