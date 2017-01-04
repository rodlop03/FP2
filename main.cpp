#include <iostream>
#include <string>
#include <fstream>

using namespace std;

const int MAX_PROD = 25;
const int PROD_NULO = 0;
const int CENTINELA = -1;
typedef int tArray[MAX_PROD];

int menu();
void mostrarFila(const tArray fila, int tam);


int main() {
  int opcion,tam = 0;
  tArray fila;

  do {
    opcion = menu();
    switch (opcion) {
      case 1:
      mostrarFila(fila, tam);
        break;
      case 2:
        break;
      case 3:
        break;
      case 4:
        break;
    }
  } while(opcion != 0);




  return 0;
}

int menu(){
  int op;
  do {
    cout << "-------------------------------------------\n";
    cout << " 1 – Cargar fila de fichero\n";
    cout << " 2 – Guarda fila en fichero\n";
    cout << " 3 – Usar grúa (1 elemento)\n";
    cout << " 4 – Usar excavadora (1 posición derecha)\n";
    cout << " 0 - Salir;\n";
    cout << "-------------------------------------------\n";
    cout << "Introduce una opcción: ";
    cin >> op;
  } while(op < 0 || op > 5);
  return op;
}

void mostrarFila(const tArray fila, int tam){
  cout << "\n|  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |\n";
  cout << "‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐\n";
  cout << "| 0| 1| 2| 3| 4| 5| 6| 7| 8| 9|10|11|12|13|14|15|16|17|18|19|\n\n";
}
