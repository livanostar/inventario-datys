#include "datos.h"
#include <stdio.h>

struct departamento departamentosEjemplos[5] = {
    {"DEP01",
     "Carlos Rodríguez",
     15,
     {{{"MB001"}, "Computadora", 'A', 6}, {{"MB002"}, "Impresora", 'B', 12}}},
    {"DEP02",
     "Ana García",
     8,
     {{{"MB003"}, "Escritorio", 'A', 3},
      {{"MB004"}, "Silla", 'A', 3},
      {{"MB005"}, "Archivador", 'C', 24}}},
    {"DEP03",
     "Luis Martínez",
     22,
     {{{"MB006"}, "Proyector", 'B', 18}, {{"MB007"}, "Pizarra", 'A', 1}}},
    {"DEP04",
     "Marta Sánchez",
     10,
     {{{"MB008"}, "Teléfono", 'A', 6}, {{"MB009"}, "Fax", 'D', 36}}},
    {"DEP05",
     "Jorge López",
     12,
     {{{"MB010"}, "Estante", 'B', 15}, {{"MB011"}, "Computadora", 'A', 9}}}};

void inicializarDeptos(struct departamento departamentos[100],
                       int *tamanoLogico) {
  int count = 0;
  for (int i = 0; i < 5; i++) {
    departamentos[i] = departamentosEjemplos[i];
    count++;
  }
  *tamanoLogico = count;
}
