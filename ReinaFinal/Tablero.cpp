#include <graphics.h>
#include <stdio.h>
#include <stdlib.h>
#include "Tablero.h"

void Tablero::leerMatriz(ifstream &file, int dimension, int **matriz) {
    string line;
    while (getline(file, line)) {
        if (line.size() == dimension) {
            for (int j = 0; j < dimension; j++) {
                matriz[0][j] = line[j] - '0';
            }
            break;
        }
    }
    for (int i = 1; i < dimension; i++) {
        getline(file, line);
        for (int j = 0; j < dimension; j++) {
            matriz[i][j] = line[j] - '0';
        }
    }
}

void Tablero::dibujarMatriz(int dimension, int **matriz) {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, const_cast<char*>(""));
    int size = 60;
    for (int i = 0; i < dimension; i++) {
        for (int j = 0; j < dimension; j++) {
            if (matriz[i][j] == 0) {
                setfillstyle(SOLID_FILL, BLACK);
            } else {
                setfillstyle(SOLID_FILL, WHITE);
            }
            bar(j * size, i * size, (j + 1) * size, (i + 1) * size);
        }
    }
    
    for (int i = 0; i < dimension; i++) {
        for (int j = 0; j < dimension; j++) {
            if (Tablero::estaEnDiagonalPrincipal(i, j)) {
                setfillstyle(SOLID_FILL, RED); // Colorea la diagonal principal en rojo
            } else if (matriz[i][j] == 0) {
                setfillstyle(SOLID_FILL, BLACK);
            } else {
                setfillstyle(SOLID_FILL, WHITE);
            }
            bar(j * size, i * size, (j + 1) * size, (i + 1) * size);
        }
    }
    string linea;
    escribirReina(linea,20,20,dimension);
    getch();
    closegraph();
}


void Tablero::leerLinea(std::string linea,int x,int y){
	std::string linea2;
	char *c;
	for(int i=0;i<linea.size();i++){
		linea2=linea[i];
		c= const_cast<char*>(linea2.c_str());
		if(c[0]=='R'){
			//outtextxy(x+(30*i),y,"R");
			readimagefile("reina.jpg",x+(30*i),y,x+30+(30*i),y+30);
		}
		
	}	
}

bool Tablero::estaEnDiagonalPrincipal(int fila, int columna) {
    return fila == columna;
}


void Tablero::escribirReina(std::string linea,int x,int y,int cant){
	std::ifstream archivo("solucionesTablero.txt");
	int j=0;
    for (int i = 1; getline(archivo, linea); i++) {
    	if (i >= 4 && i <= (4+(cant-1))) {
      		leerLinea(linea,x,y+(60*j));
      		j++;
    	}
   } 		
	archivo.close();	
}
