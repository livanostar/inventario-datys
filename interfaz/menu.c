#include "interfaz.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void menuDeDatys() {

  int opcion;
  bool continuar = true;
  bool salir = false;
  struct departamento departamentos[100];
  int tamanoLogico;

  while (!salir) {
    printf("\nBienvenido al Inventario de Datys\n");
    printf("1. Mostrar departamentos\n");
    printf("2. Rellenar automáticamente\n");

    do {
      if (scanf("%d", &opcion) != 1) {
        printf("Error al leer opción\n");
        continuar = false;
      }
    } while (!continuar);

    switch (opcion) {
    case 1:
      mostrarDepartamentos(departamentos, tamanoLogico);
      break;
    case 2:
      inicializarDeptos(departamentos, &tamanoLogico);
      printf("Se han rellenado los departamentos\n");
      break;
    }
    system("pause");
    system("cls");
  }
}
