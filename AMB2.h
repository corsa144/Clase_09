#ifndef AMB2_H_INCLUDED
#define AMB2_H_INCLUDED

typedef struct{
    int legajo;
    int dni;
    eFecha;
    char nombre[];
    char apellido[];
    eSector;

}eEpleado;

typedef struct{
    int id;
    int menuId;
    int empleadoLegajo;
    int fecha;
}eAlmuerzo;

typedef struct{
    int dia;
    int mes;
    int anio;
}eFecha;


#endif // AMB2_H_INCLUDED
