#include <iostream> //Calculadora Miguel Peñaranda-Venezuela-Ccs
using namespace std;

//Funciones
int suma() //Suma
{
    int a, b, c;
    a = 0;
    b = 0;
    c = 0;
    cout << "Indique Primer numero: ";
    cin >> a;
    cout << "Indique Segundo numero: ";
    cin >> b;
    c = a + b;
    cout << "La respuesta es: ";
    return c;
}

int resta() //Resta
{
    int a, b, c;
    a = 0;
    b = 0;
    c = 0;
    cout << "Indique Primer numero: ";
    cin >> a;
    cout << "Indique Segundo numero: ";
    cin >> b;
    c = a - b;
    cout << "La respuesta es: ";
    return c;
}

int multiplicacion() //Multiplicacion
{
    int a, b, c;
    a = 0;
    b = 0;
    c = 0;
    cout << "Indique Primer numero: ";
    cin >> a;
    cout << "Indique Segundo numero: ";
    cin >> b;
    c = a * b;
    cout << "La respuesta es: ";
    return c;
}

int division() //Division
{
    int a, b, c;
    a = 0;
    b = 0;
    c = 0;
    cout << "Indique Primer numero: ";
    cin >> a;
    cout << "Indique Segundo numero: ";
    cin >> b;
    c = a / b;
    cout << "La respuesta es: ";
    return c;
}


int num() //determinar par o impar
{
  int num = 0;
  cout<<"Escriba un numero: ";
  cin >> num;
  if(num % 2 == 0){
    cout<<"El numero es Par\n";
  } else {
    cout<<"El numero es Impar\n";
  }
return 0;
}

//MENU

int main()

    {cout << "---- CALCULADORA ----\n";
    cout << "1 ------- Suma --------\n";
    cout << "2 ------ Resta -------\n";
    cout << "3 -- Multiplicacion ---\n";
    cout << "4 ----- Division ------\n";
    cout << "5 Determinar Par o Impar\n";
    cout << "------------------------\n";
    cout << "Escoja una opcion: \n";
    
    //Elegir Opcion
    int option = 0;
    cin >> option;
    switch (option){
        case 1:
            cout << "Suma" << endl;
            cout << "--------" << endl;
            cout << suma();
            break;
        case 2:
            cout << "Resta" << endl;
            cout << "--------" << endl;
            cout << resta();
            break;
        case 3:
            cout << "Multiplicacion" << endl;
            cout << "--------" << endl;
            cout << multiplicacion();
            break;
        case 4:
            cout << "Division" << endl;
            cout << "--------" << endl;
            cout << division();
            break;
        case 5:
            cout << "Par o Impar" << endl;
            cout << "--------" << endl;
            cout << num();
            break;
        default:
            cout <<"Saliendo de la Calculadora" << endl;
            system("pause");
            break;
    }

} 
