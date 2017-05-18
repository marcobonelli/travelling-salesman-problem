#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <cmath>

#include "struct.h"
#include "function.h"

#define HUGE_VAL 50000

using namespace std;

void Algorithm_FarestInsertion(PERCURSO *p, REGISTRO *r, float **d, int origem, int pontos, PERCURSO *base){
    float maximo = 0, minimo, incr_min = HUGE_VAL;
    int memory;
    PERCURSO *c, *t = (PERCURSO*)malloc(sizeof(PERCURSO));

/**< verifica se ainda existem pontos fora da solu��o */
    if(FindNotActivated(r, pontos)){
        for(int i = 1; i < pontos; i++){
            minimo = HUGE_VAL;
            memory = 0;
/**< procura a dist�ncia m�nima entre o ponto i e qualquer v�rtice que j� fa�a parte da solu��o */
            for(c = p; c->proximo->local != origem; c = c->proximo){
                if(minimo > d[c->local][i] && !r[i].active){
                    minimo = d[c->local][i];
                    memory = i;
                }
            }
/**< armaze o ponto que gere maior dist�ncia m�nima em rela��o aos v�rtices que j� estejam na solu��o  */
            if(maximo < minimo && !r[i].active){
                maximo = minimo;
                t->local = memory;
            }
        }

/**< procura pela aresta cujo qual, ao inserir o ponto selecionado, o incremento de solu��o seja m�nimo */
        for(c = p; c->proximo->local != origem; c = c->proximo){
            if(d[c->local][t->local] + d[t->local][c->proximo->local] - d[c->local][c->proximo->local] < incr_min){
                incr_min = d[c->local][t->local] + d[t->local][c->proximo->local] - d[c->local][c->proximo->local];
                memory = c->local;
            }
        }

/**< insere o ponto na aresta escolhida */
        for(c = p; c->proximo->local != origem; c = c->proximo){
            if(c->local == memory){
                t->proximo = c->proximo;
                c->proximo->anterior = t;
                t->distancia = d[c->local][t->local];
                t->proximo->distancia = d[t->local][t->proximo->local];
                c->proximo = t;
                t->anterior = c;
                r[t->local].active = true;
/**< executa o algoritmo */
                Algorithm_FarestInsertion(p, r, d, origem, pontos, base);
            }
        }
    }
}

void Execute_FarestInsertion(char arquivo[], int att){
    REGISTRO *vetReg;
    PERCURSO *vetPer, *aux;
    float **matDist, total;
    int contador, select_point, select_cost = HUGE_VAL;
    string var, line;

    ifstream myfile(arquivo);

/**< entrada de dados: leitura da quantidade de pontos */
    for(int i = 1; i < 7; i++)
        if(i == 4){
            myfile >> var >> contador;
            getline(myfile, line);
        }else
            getline(myfile, line);

/**< alocando dinamicamente os vetores e matrizes */
    vetReg = DynamicAloc(contador + 1);
    vetPer = (PERCURSO*)malloc(sizeof(PERCURSO));
    aux = (PERCURSO*)malloc(sizeof(PERCURSO));
    matDist = DynamicAloc(contador + 1, contador + 1);

/**< informando que todos os pontos iniciam fora da solu��o */
    for(int i = 1; i < contador + 1; i++)
        vetReg[i].active = false;

/**< entrada de dados: leitura das coordenadas */
    for(int i = 1; i < contador + 1; i++)
        myfile >> vetReg[i].codigo >> vetReg[i].x >> vetReg[i].y;

/**< seleciona o m�todo de calculo da dist�ncia */
    if(!att){
        for(int i = 1; i < contador + 1; i++)
            for (int j = 1; j < contador + 1; j++)
                matDist[i][j] = matDist[j][i] = (i != j) ? Calculate(vetReg[i].x, vetReg[j].x, vetReg[i].y, vetReg[j].y) : 0;
    }else{
        for(int i = 1; i < contador + 1; i++)
            for (int j = 1; j < contador + 1; j++)
                matDist[i][j] = matDist[j][i] = (i != j) ? CalculateATT(vetReg[i].x, vetReg[j].x, vetReg[i].y, vetReg[j].y) : 0;
    }

/**< busca pelo vizinho mais pr�ximo do ponto 1 */
    for(int i = 2; i < contador + 1; i++)
        if(select_cost > matDist[1][i]){
            select_cost = matDist[1][i];
            select_point = i;
        }
/**< espa�o "0" n�o faz parte do problema */
    vetReg[0].active = true;
    vetPer->local = 1;

/**< criando os pontos iniciais da solu��o */
    vetReg[1].active = true;
    aux->local = select_point;
    vetPer->proximo = aux;
    aux->proximo = vetPer;
    vetReg[select_point].active = true;
    aux->distancia = matDist[1][select_point];

/**< executando algoritmo */
    Algorithm_FarestInsertion(vetPer, vetReg, matDist, 1, contador + 1, vetPer);

//    DataPrint(vetPer, vetPer->local);
    total = TotalDistance(vetPer, vetPer->local);

    cout << "distancia percorrida: " << total << endl;

    free(vetPer);
    free(vetReg);
    free(aux);
    free(matDist);

    vetPer = NULL;
    vetReg = NULL;
    aux = NULL;
    matDist = NULL;

    myfile.close();
}
