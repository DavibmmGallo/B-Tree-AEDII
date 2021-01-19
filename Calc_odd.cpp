#include <iostream>
#include <windows.h>

using namespace std;

double calculo(double value, double odd1, double odd2)
{
    double lc1 = value * odd1;
    double vl2 = 0;
    vl2 = lc1 / odd2;

    return vl2;
}

int main(void)
{
    char c = 'a';
    double odd1 = 0, odd2 = 0;
    string time1 = "time 1", time2 = "time 2";
    double valor;
    while (true)
    {
        cout << "1. Modificar Odd's \n2. Selecionar nome dos times \n3. Valor depositado\n4.Calcular \n0.Sair\n";
        cin >> c;

        switch (c)
        {
        case '1':
            cout << "Odd do time " << time1 << "\n";
            cin >> odd1;

            cout << "Odd do time " << time2 << "\n";
            cin >> odd2;

            break;
        case '2':
            cout << "Nome do time 1 :\n";
            cin >> time1;
            cout << "Nome do time 2 :\n";
            cin >> time2;
            break;
        case '3':
            cout << "Valor depositado : \n";
            cin >> valor;

            break;
        case '4':
            double va;
            cout << "Calculando ... \n";
            va = calculo(valor, odd1, odd2);
            Sleep(1000);
            printf("Tem que depositar : R$ %.2lf\n", va);
            break;
        case '0':
            exit(0);
            break;
        default:
            break;
        }
        system("pause");
        system("cls");
    }
}