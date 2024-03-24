#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED

class Fecha{
private:
    int diaSemana;
    int dia;
    int mes;
    int ano;

public:
    Fecha();
    Fecha(int,int, int, int);
    int getDia();
    int getMes();
    int getAno();
    int getDiaSemana();
    void setDia(int);
    void setMes(int);
    void setAno(int);
    void setDiaSemana(int);
    void generarFecha(int,int,int,int);
};

#endif // FECHA_H_INCLUDED
