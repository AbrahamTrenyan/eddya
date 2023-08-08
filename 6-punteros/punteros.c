/*
    VARIABLE * nombre; => Declaracion del puntero
    nombre;  => La direccion de memoria FF34AB
    VARIABLE nombre; print(&nombre) => La direccion de memoria
    print(*nombre) => Lo que esta guardado

    int * a;
    int b = 10;

    a = b; => ROMPE EL PROGRAMA
    *a = b => Guardo en FF34AB un 10
    a = &b => Hago que A deje de apuntar a FF34AB y pase a apuntar donde esta guardado B

    2) Un programa en C contiene las siguientes sentencias:
    int A[10]={-8, 125, 107, -21, 134 -,45};
    int *B;
    B=A;
    B=A[2];

    A partir del código planteado indique:

    a) ¿Qué valor representa A[4]?
    134
    b) ¿Qué valor representa(&B[3])?
     la direccion de memoria de -21
    c) ¿Qué valor representa (B+2) -1?
    -21
    d) ¿Qué valor representa A[0]?
     -8
    e) ¿Qué valor representa (B+0) *(A+0)?
     107 y -8

*/