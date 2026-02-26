#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    string nombre;
    double precio, subtotal, iva, total;
    int cantidad;

    cout<<"Ingrese su nombre: ";
    getline(cin,nombre);
    cout<<"Ingrese precio del producto:";
    cin>>precio;
    cout<<"Ingrese la cantidad de producto comprada: ";
    cin>>cantidad;

    subtotal=precio*cantidad;
    iva=subtotal*0.12;
    total=subtotal+iva;

    cout<<"Cáculos"<<endl;
    cout<<"Cliente: "<<nombre<<endl;
    cout<<"Subtotal: Q"<<fixed<<setprecision(2)<<subtotal<<endl;
    cout<<"IVA: Q"<<fixed<<setprecision(2)<<iva<<endl;
    cout<<"Total: Q"<<total<<endl;
    cout<<endl;

    cout<<"Desarrollado por Emily de Leon"<<endl;
    cout<<"Carnet: 9941-25-13659"<<endl;
    return 0;
}