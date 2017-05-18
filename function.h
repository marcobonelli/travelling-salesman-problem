#include "struct.h"

using namespace std;

#ifndef function_H
#define function_H

REGISTRO* DynamicAloc(int i);

float** DynamicAloc(int i, int j);

/**< função que calcula a distancia euclidiana */
float Calculate(float x_ini, float x_fin, float y_ini, float y_fin);

/**< função que calcula a distencia pseudo-euclidiana */
float CalculateATT(float x_ini, float x_fin, float y_ini, float y_fin);

/**< função que busca se ainda existem pontos fora da solução */
bool FindNotActivated(REGISTRO *r, int pontos);

/**< função que calcula o custo final da solução */
float TotalDistance(PERCURSO *p, int origem);

/**< função que imprime a solução na tela */
void DataPrint(PERCURSO *p, int origem);

/**< algoritmo de inserção do ponto mais distante */
void Algorithm_FarestInsertion(PERCURSO *p, REGISTRO *r, float **d, int origem, int pontos, PERCURSO *base);

/**< função pai algoritmo do vizinho mais próximo */
void Execute_FarestInsertion(char arquivo[], int att);

#endif
