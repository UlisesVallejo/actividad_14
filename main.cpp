#include <iostream>
#include "arreglo.h"
#include "computadora.h"

using namespace std;

int main()
{
    ArregloDinamico<Computadora> computadoras;

    Computadora c01("Huawei", "Windows", 3.5, 16);
    Computadora c02("Hp", "Windows", 3.3, 8);
    Computadora c03("Lenovo", "Linux", 3.1, 4);
    Computadora c04("Hp", "Linux", 3.44, 8);
    Computadora c05("Hp", "iOS", 3.61, 8);

    computadoras << c01 << c02 << c03 << c04 << c05;
    Computadora c06("Hp", "Windows", 3.3, 8);

    ArregloDinamico<Computadora*> ptrs = computadoras.buscar_todos(c06);

    if(ptrs.size() > 0){
        for (size_t i = 0; i < ptrs.size(); i++)
        {
            Computadora *c = ptrs[i];
            cout << *c << endl;
        }
    }
    else{
        cout << "No hay coincidencias" << endl;
    }

    /*Computadora *ptr = computadoras.buscar(c06);


    if(ptr != nullptr){
        cout << *ptr << endl;
    }
    else
    {
        cout << "No existe" << endl;
    }*/
    

    /*ArregloDinamico<string> arreglo;

    arreglo.insertar_inicio("Angela");
    arreglo.insertar_final("Jose");
    arreglo.insertar_inicio("Oscar");
    arreglo.insertar_final("Ulises");
    

    arreglo.insertar("Gael", 2);

    arreglo.eliminar_inicio();
    arreglo.eliminar_final();
    arreglo.eliminar(1);

    for(size_t i=0; i<arreglo.size(); i++){
        cout << arreglo[i] << endl;
    }
    cout << endl;

    string *s = arreglo.buscar("Jose");
    cout << s << " " << *s << endl;
    *s = "Norma";
    for(size_t i=0; i<arreglo.size(); i++){
        cout << arreglo[i] << endl;
    }
    cout << endl;*/
    

    return 0;
}