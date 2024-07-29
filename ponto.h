/*
 * ponto.h
 *
 *  Created on: 23 de jul. de 2024
 *      Author: user
 */

#ifndef PONTO_H_
#define PONTO_H_

typedef struct ponto Ponto;

Ponto* pto_cria(float x, float y);

void pto_libera(Ponto* p);

void pto_acessa(Ponto* p, float* x, float* y);

void pto_atribui(Ponto* p, float x, float y);

float pto_distancia(Ponto* p1, Ponto* p2);

#endif /* PONTO_H_ */
