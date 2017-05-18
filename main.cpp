/**
 *  Autor: Marco Antonio Bonelli Junior
 *  Disciplina: Heurísticas e Metaheurísticas
 *  Universidade Federal de Ouro Preto - UFOP
**/

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string.h>

#include "struct.h"
#include "function.h"

#define arquivo_01 "heu_e_met_tsp_instances/att48.tsp"
#define arquivo_02 "heu_e_met_tsp_instances/berlin52.tsp"
#define arquivo_03 "heu_e_met_tsp_instances/kroA100.tsp"
#define arquivo_04 "heu_e_met_tsp_instances/kroA150.tsp"
#define arquivo_05 "heu_e_met_tsp_instances/kroA200.tsp"
#define arquivo_06 "heu_e_met_tsp_instances/kroB100.tsp"
#define arquivo_07 "heu_e_met_tsp_instances/kroB150.tsp"
#define arquivo_08 "heu_e_met_tsp_instances/kroB200.tsp"
#define arquivo_09 "heu_e_met_tsp_instances/kroC100.tsp"
#define arquivo_10 "heu_e_met_tsp_instances/kroD100.tsp"
#define arquivo_11 "heu_e_met_tsp_instances/kroE100.tsp"
#define arquivo_12 "heu_e_met_tsp_instances/lin105.tsp"
#define arquivo_13 "heu_e_met_tsp_instances/pr76.tsp"
#define arquivo_14 "heu_e_met_tsp_instances/pr107.tsp"
#define arquivo_15 "heu_e_met_tsp_instances/pr124.tsp"
#define arquivo_16 "heu_e_met_tsp_instances/pr136.tsp"
#define arquivo_17 "heu_e_met_tsp_instances/pr144.tsp"
#define arquivo_18 "heu_e_met_tsp_instances/pr152.tsp"
#define arquivo_19 "heu_e_met_tsp_instances/rat99.tsp"
#define arquivo_20 "heu_e_met_tsp_instances/rat195.tsp"
#define arquivo_21 "heu_e_met_tsp_instances/st70.tsp"

using namespace std;

int main(){

    for(int instance = 1; instance < 22; instance++)
        switch(instance)
        {
            case  1: Execute_FarestInsertion(arquivo_01, 1); break;
            case  2: Execute_FarestInsertion(arquivo_02, 0); break;
            case  3: Execute_FarestInsertion(arquivo_03, 0); break;
            case  4: Execute_FarestInsertion(arquivo_04, 0); break;
            case  5: Execute_FarestInsertion(arquivo_05, 0); break;
            case  6: Execute_FarestInsertion(arquivo_06, 0); break;
            case  7: Execute_FarestInsertion(arquivo_07, 0); break;
            case  8: Execute_FarestInsertion(arquivo_08, 0); break;
            case  9: Execute_FarestInsertion(arquivo_09, 0); break;
            case 10: Execute_FarestInsertion(arquivo_10, 0); break;
            case 11: Execute_FarestInsertion(arquivo_11, 0); break;
            case 12: Execute_FarestInsertion(arquivo_12, 0); break;
            case 13: Execute_FarestInsertion(arquivo_13, 0); break;
            case 14: Execute_FarestInsertion(arquivo_14, 0); break;
            case 15: Execute_FarestInsertion(arquivo_15, 0); break;
            case 16: Execute_FarestInsertion(arquivo_16, 0); break;
            case 17: Execute_FarestInsertion(arquivo_17, 0); break;
            case 18: Execute_FarestInsertion(arquivo_18, 0); break;
            case 19: Execute_FarestInsertion(arquivo_19, 0); break;
            case 20: Execute_FarestInsertion(arquivo_20, 0); break;
            case 21: Execute_FarestInsertion(arquivo_21, 0); break;
        }

    return 1;
}
