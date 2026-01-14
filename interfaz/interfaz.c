#include "../logica/datos.h"
#include <stdio.h>

void mostrarDepartamentos(struct departamento departamentos[100],
                          int tamanoLogico) {
  if (tamanoLogico == 0) {
    printf("No hay departamentos\n");
  } else {
    printf("Resultados:\n");
    for (int i = 0; i < tamanoLogico; i++) {
      printf("Departamento: %s\n", departamentos[i].id);
      printf("Jefe: %s\n", departamentos[i].jefe);
      printf("Cantidad de trabajadores: %d\n",
             departamentos[i].cantidadDeTrabajadores);
    }
  }
}
