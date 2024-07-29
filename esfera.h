/*
 * esfera.h
 *
 *  Created on: 23 de jul. de 2024
 *      Author: user
 */

#ifndef ESFERA_H_
#define ESFERA_H_

typedef struct esfera Esfera;

Esfera* esf_cria(float raio);

void esf_libera(Esfera* e);

void esf_acessa(Esfera* e, float* raio);

void esf_atribui(Esfera* e, float raio);

float esf_area(Esfera* e);

float esf_volume(Esfera* e);

#endif /* ESFERA_H_ */
