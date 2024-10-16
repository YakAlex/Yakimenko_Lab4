#include <iostream>
#include <Windows.h>
using namespace std;
int main() {
    SetConsoleOutputCP(CP_UTF8);
    int arr[10] = {0,10,3,-5,2,15,7,1,9,8};
    int number = 10;
    for (int a = 0; a < 10; ++a) {
        for (int b = a +1; b < 10; ++b) {
            if (arr[a] + arr[b] == number) {
                cout << "Пара: " <<arr[a] << " + " << arr[b] << ";" << endl;
            }
        }
    }
    return 0;
}
