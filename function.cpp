#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <cmath>

#include "struct.h"
#include "function.h"

using namespace std;

REGISTRO* DynamicAloc(int i){

    return (REGISTRO*)malloc(i * sizeof(REGISTRO));
}

float** DynamicAloc(int i, int j){
    float **temp;

    temp = (float**)malloc(i * sizeof(float));
    for(int k = 1; k < i; k++)
        temp[k] = (float*)malloc(j * sizeof(float));

    return temp;
}

float Calculate(float x_ini, float x_fin, float y_ini, float y_fin){
    float dist_x = 0, dist_y = 0, hip = 0;

    dist_x = (x_ini > x_fin) ? (x_ini - x_fin) : (x_fin - x_ini);
    dist_y = (y_ini > y_fin) ? (y_ini - y_fin) : (y_fin - y_ini);
    hip = sqrt(pow(dist_x, 2) + pow(dist_y, 2));

    return hip;
}

float CalculateATT(float x_ini, float x_fin, float y_ini, float y_fin){
    float dist_x = 0, dist_y = 0, r = 0, t = 0;

    dist_x = (x_ini > x_fin) ? (x_ini - x_fin) : (x_fin - x_ini);
    dist_y = (y_ini > y_fin) ? (y_ini - y_fin) : (y_fin - y_ini);
    r = sqrt((pow(dist_x, 2) + pow(dist_y, 2)) / 10);

    return ceil(r);
}

bool FindNotActivated(REGISTRO *r, int pontos){
    for(int i = 1; i < pontos; i++)
        if(!r[i].active)
            return true;

    return false;
}

float TotalDistance(PERCURSO *p, int origem){
    float total = 0;
    PERCURSO *t;

    for(t = p; t->proximo->local != origem; t = t->proximo)
        total += t->distancia;
    total += t->distancia;
    t = t->proximo;
    total += t->distancia;

    return total;
}

void DataPrint(PERCURSO *p, int origem){
    PERCURSO *t;

    for(t = p; t->proximo->local != origem; t = t->proximo)
        cout << t->local << endl;
    cout << t->local << endl;
    t = t->proximo;
    cout << t->local << endl;
}
