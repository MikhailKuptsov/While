//Дано целое число N > 1. Если оно является простым, то есть не имеет положительных делителей, кроме 1 и самого себя, то вывести TRUE, иначе вывести FALSE.
#include <iostream>


using namespace std;

int main() {
    int a;
    cout << "Put a:";
    cin >> a;
    int a1;
    a1 = a;
    int i=0;
    int cnt = 0;
    while (i <= a) {
        if ((a % i) == 0) {
            cnt++;
        }
        i++;
    }
    
    if (cnt == 2) {
        cout << "TRUE";
    }
    else {
        cout << "FALSE";
    }
    cin.get();
}