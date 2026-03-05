#include <iostream>

using std::cout;
using std::cin;

int main() {
    setlocale(LC_ALL, "RUSSIAN");
    int x{ 0 }; int y{ 0 }; int z{ 0 }; 
    int max{ 0 }; int min{ 0 }; int middle{ 0 };
    cout << "Введите первое число: ";
    cin >> x;
    cout << "Введите второе число : ";
    cin >> y;
    cout << "Введите третье число: ";
    cin >> z;
    cout << "\nРезультат: ";
    min = x < y ? 
        (x<z ? x:z) :
         (y<z ? y:z);
    max = x > y ?
        (x>z ? x:z) :
        (y>z ? y:z);
    middle = (x != max && x != min) ?
        x :
        (y != max && y != min) ?
        y : z;
    cout << max << " " << middle << " " << min << "\n";

}
