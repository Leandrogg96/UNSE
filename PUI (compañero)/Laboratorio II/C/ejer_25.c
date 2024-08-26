/*
	Gabriel Ignacio Palazzi
*/
#include <stdio.h>
#include <stdlib.h>
#define  MAX  3

struct alumno {
	char nombre[20];
	char apellido[20];
	char dni[20];
	int asistencia[15];
	int nota[6];
};

// Funcion promAlum calcula la promoción del alumno
void promAlum(struct alumno *a,int n);

//Funcion asistenciaCal calcula la asistencia del alumno
int asistenciaCal(struct alumno *a,int i);

//Funcion promedioCal calcula el promedio
int promedioCal(struct alumno *a,int i);

/*Procedimineto para que*/
void almnoperdio(struct alumno *a,int n);

/*procedimiento para que proma*/
void promasisgral(struct alumno *a,int n);

/*Procedimiento mostrar mayor y menor nota*/
void mostrarmayymen(struct alumno *a,int n);

/*Procedimiento mayor nota*/
int maynota(struct alumno *a,int i);

/*Procedimiento  menor nota*/
int mennota(struct alumno *a,int i);



int main(int argc, char *argv[]) {
	int i,j,n;
	n = MAX;
	struct alumno alumno[MAX]= {
		{"Ignacio","Palazzi","50",1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,7,8,7,9,7,10},
		{"Mariano","Iturbe","47",1,1,1,0,1,1,1,1,1,1,0,1,1,1,1,7,8,6,7,7,7},
		{"Nico","Perez","41",1,1,0,1,0,0,1,1,1,1,1,1,1,1,1,6,5,7,5,6,5}
	};
	printf("La Cantidad de alumnos promocionados son:\n");
	promAlum(alumno,n);
	printf("\n============================================\n");
	printf("\nLa Cantidad de alumnos que perdieron la materia son:\n");
	almnoperdio(alumno,n);
	printf("\n============================================\n");
	printf("\nPromedio de asistencia");
	promasisgral(alumno,n);
	mostrarmayymen(alumno,n);
	return 0;
}


void promAlum(struct alumno *a,int n) {
	int i, asistencia, prom, alproms;
	alproms = 0;
	for(i = 0; i < n; i++) {	
		asistencia = asistenciaCal(a, i);
		prom = promedioCal(a, i);
		if((asistencia == 15) && (prom > 6)) { 
			alproms++;
		}
	}
	if(alproms > 0) {
		printf("En total hay %d\n ", alproms);
	} else {
		printf("No hay promocionados\n");
	}
}



int asistenciaCal(struct alumno *a,int i) {
	int j,asis;
	asis=0;
	for(j = 0; j < 15; j++) {
		if(a[i].asistencia[j] == 1) {
			asis++;
		}
	}
	return asis;
}

void promasisgral(struct alumno *a,int n) {
	int i,asistencia;
	float sumAs = 0,promA;
	for(i = 0; i < n; i++) {
		asistencia = asistenciaCal(a, i);
		sumAs = sumAs + (((float)asistencia/ 15) * 100);
	}
	promA=(sumAs/3);
	printf("\nPromedio es %.2f\n",promA);
}



int promedioCal(struct alumno *a,int i) {
	int promi,j,sumnot;
	promi = 0;
	sumnot = 0;
	for(j = 0; j < 6; j++) {
		sumnot = (a[i].nota[j] + sumnot);
	}
	promi = sumnot/6;

	return promi;
}


void almnoperdio(struct alumno *a,int n) {
	int i, alumnos, prom;
	alumnos = 0;
	for(i = 0; i < n; i++) {
		prom = promedioCal(a, i);
		if(prom < 6) { 
			alumnos++;
		}
	}
	printf("La cantidad es : %d\n", alumnos);
}

void mostrarmayymen(struct alumno *a,int n) {
	int i,maynot,menota;
	for(i = 0; i < n; i++) {
		printf("\nAlumno: %s %s\n",a[i].nombre, a[i].apellido);
		maynot=maynota(a,i);
		printf("Mayor nota %d\n", maynot);
		menota=mennota(a,i);
		printf("Menor nota %d\n", menota);
	}

}
int maynota(struct alumno *a,int i) {
	int j,mayn;
	mayn = -999;
	for(j = 0; j < 6; j++) {
		if(a[i].nota[j] > mayn) {
			mayn = a[i].nota[j];
		}
	}
	return mayn;
}
int mennota(struct alumno *a,int i) {
	int j,menot;
	menot = 999;
	for(j = 0; j < 6; j++) {
		if(a[i].nota[j] < menot) {
			menot = a[i].nota[j];
		}

	}
	return menot;
}
