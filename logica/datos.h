struct medioBasico {
  char codigo[10];
  char tipo[20];
  char estado;
  int mes;
};

struct departamento {
  char id[10];
  char jefe[100];
  int cantidadDeTrabajadores;
  struct medioBasico mediosDelDepartamento[50];
};

struct totalPorTipo {
  char tipo[20];
  int total;
};
