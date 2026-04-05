#include <iostream>
#include <cmath>
using namespace std;

//печенье овсяное мария ра плати много

int main() {
    double a, b, c;
    
    cout << "Введите стороны треугольника:\n";
    cout << "a = "; 
    cin >> a;
    cout << "b = "; 
    cin >> b;
    cout << "c = "; 
    cin >> c;
    
    if (a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= a) {
        cout << "Треугольник не существует!\n";
        return 1;
    }
    
    double P = a + b + c;
    double p = P / 2;
    double S = sqrt(p * (p - a) * (p - b) * (p - c));
    
    cout << "\nПериметр: " << P << endl;
    cout << "Площадь: " << S << endl;
    cout << "Треугольник " << (a == b || a == c || b == c ? "" : "не ") << "равнобедренный" << endl;
    
    return 0;
}
