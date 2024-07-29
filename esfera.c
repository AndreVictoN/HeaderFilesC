/*
 * esfera.c
 *
 *  Created on: 23 de jul. de 2024
 *      Author: user
 */


#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"esfera.h"

struct esfera{
	float raio;
};

Esfera* esf_cria(float raio){
	Esfera* e = (Esfera*) malloc(sizeof(Esfera));

	if(e != NULL){
		e-> raio = raio;
	}

	return e;
}

void esf_libera(Esfera* e){
	free(e);
}

void esf_acessa(Esfera* e, float* raio){
	*raio = e->raio;
}

void esf_atribui(Esfera* e, float raio){
	e->raio = raio;
}

float esf_area(Esfera* e){
	float area = 4 * 3.14 * pow(e->raio, 2);

	return area;
}

float esf_volume(Esfera* e){
	float volume = (4.0/3.0) * 3.14 * pow(e->raio, 3);

	return volume;
}
