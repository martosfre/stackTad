/*
 * Pila.h
 *
 *  Created on: 29 ago. 2019
 *      Author: martosfre
 */

#ifndef PILA_H_
#define PILA_H_

#include <stdbool.h>

struct Stack;

void push(int valor);
int pop();
void display();
bool isEmpty();

#endif /* PILA_H_ */
