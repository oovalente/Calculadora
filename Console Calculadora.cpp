#include <iostream>
int finish = 0; // variavel global

using namespace std;

int menu()
{
    cout << "---- CALCULATOR 2000 ----" << endl;
    cout << "MENU:\n" << endl;
    cout << "1 - Soma" << endl;
    cout << "2 - Substracao" << endl;
    cout << "3 - Multiplicacao" << endl;
    cout << "4 - Divisao" << endl;
    cout << "5 - Fechar Calculadora" << endl;
    cout << "-> O que deseja fazer: ";
    int guiaMENU; //variavel auxiliar para Menu
    cin >> guiaMENU;
    if ((guiaMENU != 1) && (guiaMENU != 2) && (guiaMENU != 3) && (guiaMENU != 4) && (guiaMENU != 5)) //caso valor seja invalido
    { 
        system("cls"); //limpa a linha de comando
        return menu(); // reescreve o menu
    }
    return guiaMENU;
}

float soma()
{
    cout << "Informe dois numeros para somar" << endl;
    cout << "num1: ";
    float num1 = 0;
    cin >> num1;
    cout << "num2: ";
    float num2 = 0;
    cin >> num2;
    float resultado = num1 + num2;
    cout << "Resultado = " << resultado << endl;

    int auxSoma = 1;
    cout << "Toque na tecla 1 para continuar somando = ";
    cin >> auxSoma;
    if (auxSoma == 1)
    {
        return soma();
    }
    return resultado; 
}

float subtracao()
{
    cout << "Informe dois numeros para subtrair" << endl;
    cout << "num1: ";
    float num1 = 0;
    cin >> num1;
    cout << "num2: ";
    float num2 = 0;
    cin >> num2;
    float resultado = num1 - num2;
    cout << "Resultado = " << resultado << endl;

    int auxSub = 1;
    cout << "Toque na tecla 1 para continuar subtraindo = ";
    cin >> auxSub;
    if (auxSub == 1)
    {
        return subtracao();
    }
    return resultado;
}

float multiplicacao()
{
    cout << "Informe dois numeros para multiplicar" << endl;
    cout << "num1: ";
    float num1 = 0;
    cin >> num1;
    cout << "num2: ";
    float num2 = 0;
    cin >> num2;
    float resultado = num1 * num2;
    cout << "Resultado = " << resultado << endl;

    int auxMult = 1;
    cout << "Toque na tecla 1 para continuar multiplicando = ";
    cin >> auxMult;
    if (auxMult == 1)
    {
        return multiplicacao();
    }
    return resultado;
}

float divisao()
{
    cout << "Informe dois numeros para dividir" << endl;
    cout << "num1: ";
    float num1 = 0;
    cin >> num1;
    cout << "num2: ";
    float num2 = 0;
    cin >> num2;
    float resultado = num1 / num2;
    cout << "Resultado = " << resultado << endl;

    int auxDiv = 1;
    cout << "Toque na tecla 1 para continuar dividindo = ";
    cin >> auxDiv;
    if (auxDiv == 1)
    {
        return divisao();
    }
    return resultado;
}

int main()
{ 
    //enquanto finish for falso o programa continua
    while (finish == 0)
    {
        int chamaFuncao = menu(); //variavel para chamar a funcao menu uma só vez no programa

        if (chamaFuncao == 1)
        {
            soma();
        }

        else if (chamaFuncao == 2)
        {
            subtracao();
        }

        else if (chamaFuncao == 3)
        {
            multiplicacao();
        }

        else if (chamaFuncao == 4)
        {
            divisao();
        }
        else if (chamaFuncao == 5)
        {
            finish = 1; // encerra o programa
        }
    }
    return 0;
}
