/*
 * main.c
 *
 *  Created on: 23 de jul. de 2024
 *      Author: user
 */


#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include"ponto.h"
#include"esfera.h"

int main(int argc, char **argv) {
	setlocale(LC_ALL, "Portuguese");
	setbuf(stdout, NULL);

	//Ponto
	float d;

	Ponto *p, *q;

	p = pto_cria(10, 21);
	q = pto_cria(7, 25);

	d = pto_distancia(p, q);

	printf("Distância entre os pontos: %.2f\n", d);

	pto_libera(p);
	pto_libera(q);

	//Esfera
	float area;
	float volume;

	Esfera *e;

	e = esf_cria(4);

	area = esf_area(e);
	volume = esf_volume(e);



	printf("\nArea da esfera: %.2f\n", area);
	printf("Volume da esfera: %.2f\n", volume);

	esf_libera(e);

	return 0;
}
