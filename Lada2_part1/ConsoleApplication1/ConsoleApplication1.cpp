#include <Windows.h>
#include <iostream>
using namespace std;

int smd(int x =1);
int z = 5, w = 10;
void fch(int x, int y, int &z, int &w);
int main()
{
    setlocale(LC_ALL, "");
    int summ = 0;
    int arr[2][3] = { {1,2,3},{4,5,6} };
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            summ += arr[i][j];
            cout << arr[i][j] << " ";
        }
        cout << " \n";
    }
    cout << "Сумма = " << summ << endl;
    cout << "-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n";
    cout << "Одномерный массив = { ";
    int arrayy[3];
    for (int i = 0; i < 3; i++) {
        arrayy[i] = arr[0][i] + arr[1][i];
        cout << arrayy[i] << " ";
    }
    cout << "};\n";
    cout << "-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n";
    float flag = 20.84, &d = flag, &f= flag;
    f = 222.1;
    cout << flag << endl << d << endl << f << endl;
    cout << "-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n";
    cout << "smd(-1)="<< smd(-1)<< endl;
    cout << "smd(0)=" << smd(0) << endl;
    cout << "smd(3)=" << smd(3) << endl;
    cout << "smd()=" << smd() << endl;
    cout << "-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n";
    fch(1, 2,z,w);
    cout << "fch(1,2) => z = "<<z << " w = "<< w<< endl;
    
    int x = 12;
    cout << "x = " << x<< endl;
    for (int i = 0; i < 3; i++) {
        int n = 5;
        cout << x << "  " << n << endl;
    }
}

int smd(int x) {
    if (x <= 0) { return 0; }
    else {
        int sum = 0;
        while (x > 0) {
            sum += x;
            x -= 1;
        }
        return sum;
    }
}
void fch(int x, int y, int& z, int& w) {
    z = x + y;
    w = x * y;
}