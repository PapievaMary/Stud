#include <iostream>
#include <Windows.h>

int main()
{
    using namespace std;
    setlocale(LC_ALL, "");
    //Задание 1
    string zapros = "Введите целое положительное число\n";
    cout << zapros;
    int a, i=0, sum=0;
    cin >> a;
    while (a < 0){
        cout << zapros;
        cin >> a;};
    for (i = 1; i <= a; i++) {sum += i;};
    cout << "Сумма всех чисел от 1 до а = " << sum << "\n";

    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
    cout << "Массив:\n";
    for (i = 0; i < 10; i++) { cout << arr[i] << " "; };
    cout << "\n";
    for (i = 0; i < 10; i++) { cout << arr[i] << " "; i++; };
    cout << "\n";
    sum = 0;
    for (i = 1; i < 10; i++) { sum+=arr[i]; i++; };
    cout << "Сумма нечётных элементов = "<< sum << "\n";
    //Задание 2
    cout << "Введите 2 числа\n";
    double x, y;
    cin >> x >> y;
    cout << "Среднее арифметическое: "<<(x+y)/2 <<"\n";
    cout << "Введите знак операции: +, -, * или /:\n";
    char t;
    cin >> t;
    /*
     if (t =='+'){ cout << "x" << t << "y = " << x + y << "\n"; }
     if (t == '-'){ cout << "x" << t << "y = " << x - y << "\n"; }
     if (t == '*') { cout << "x" << t << "y = " << x * y << "\n"; }
     if (t == '/') { cout << "x" << t << "y = " << x / y << "\n"; }
    */
    switch (t)
    {
        case '+': cout << "x" << t << "y =  " << x + y << "\n";
            break;
        case '-': cout << "x" << t << "y =  " << x - y << "\n";
            break;
        case '/': cout << "x" << t << "y =  " << x / y << "\n";
            break;
        case '*': cout << "x" << t << "y =  " << x * y << "\n";
            break;
    }
}