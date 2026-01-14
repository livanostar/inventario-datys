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
  char idDelDepto[10];
  struct totalPorTipo mediosPorTipo[100];
  int tamanoDeMediosPorTipo;

  while (!salir) {
    printf("\nBienvenido al Inventario de Datys\n");
    printf("1. Mostrar departamentos\n");
    printf("2. Rellenar automáticamente\n");
    printf("3. Total de medios de un departamento por tipos\n");

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
    case 3:
      idDelDepto = pedirId();
      totaldeMediosPorTipo(departamentos, tamanoLogico, mediosPorTipo,
                           &tamanoDeMediosPorTipo);
    }
    system("pause");
    system("cls");
  }
}
