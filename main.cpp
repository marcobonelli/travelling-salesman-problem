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

    for(int instance = 1; instance < 22; instance++){
        switch(instance)
        {
            case  1: cout << arquivo_01 << endl; Execute_FarestInsertion(arquivo_01, 1); break;
            case  2: cout << arquivo_02 << endl; Execute_FarestInsertion(arquivo_02, 0); break;
            case  3: cout << arquivo_03 << endl; Execute_FarestInsertion(arquivo_03, 0); break;
            case  4: cout << arquivo_04 << endl; Execute_FarestInsertion(arquivo_04, 0); break;
            case  5: cout << arquivo_05 << endl; Execute_FarestInsertion(arquivo_05, 0); break;
            case  6: cout << arquivo_06 << endl; Execute_FarestInsertion(arquivo_06, 0); break;
            case  7: cout << arquivo_07 << endl; Execute_FarestInsertion(arquivo_07, 0); break;
            case  8: cout << arquivo_08 << endl; Execute_FarestInsertion(arquivo_08, 0); break;
            case  9: cout << arquivo_09 << endl; Execute_FarestInsertion(arquivo_09, 0); break;
            case 10: cout << arquivo_10 << endl; Execute_FarestInsertion(arquivo_10, 0); break;
            case 11: cout << arquivo_11 << endl; Execute_FarestInsertion(arquivo_11, 0); break;
            case 12: cout << arquivo_12 << endl; Execute_FarestInsertion(arquivo_12, 0); break;
            case 13: cout << arquivo_13 << endl; Execute_FarestInsertion(arquivo_13, 0); break;
            case 14: cout << arquivo_14 << endl; Execute_FarestInsertion(arquivo_14, 0); break;
            case 15: cout << arquivo_15 << endl; Execute_FarestInsertion(arquivo_15, 0); break;
            case 16: cout << arquivo_16 << endl; Execute_FarestInsertion(arquivo_16, 0); break;
            case 17: cout << arquivo_17 << endl; Execute_FarestInsertion(arquivo_17, 0); break;
            case 18: cout << arquivo_18 << endl; Execute_FarestInsertion(arquivo_18, 0); break;
            case 19: cout << arquivo_19 << endl; Execute_FarestInsertion(arquivo_19, 0); break;
            case 20: cout << arquivo_20 << endl; Execute_FarestInsertion(arquivo_20, 0); break;
            case 21: cout << arquivo_21 << endl; Execute_FarestInsertion(arquivo_21, 0); break;
        }
    }

    return 1;
}
