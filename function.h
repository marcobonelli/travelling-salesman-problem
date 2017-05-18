#include "struct.h"

using namespace std;

#ifndef function_H
#define function_H

REGISTRO* DynamicAloc(int i);

float** DynamicAloc(int i, int j);

/**< fun��o que calcula a distancia euclidiana */
float Calculate(float x_ini, float x_fin, float y_ini, float y_fin);

/**< fun��o que calcula a distencia pseudo-euclidiana */
float CalculateATT(float x_ini, float x_fin, float y_ini, float y_fin);

/**< fun��o que busca se ainda existem pontos fora da solu��o */
bool FindNotActivated(REGISTRO *r, int pontos);

/**< fun��o que calcula o custo final da solu��o */
float TotalDistance(PERCURSO *p, int origem);

/**< fun��o que imprime a solu��o na tela */
void DataPrint(PERCURSO *p, int origem);

/**< algoritmo de inser��o do ponto mais distante */
void Algorithm_FarestInsertion(PERCURSO *p, REGISTRO *r, float **d, int origem, int pontos, PERCURSO *base);

/**< fun��o pai algoritmo do vizinho mais pr�ximo */
void Execute_FarestInsertion(char arquivo[], int att);

#endif
