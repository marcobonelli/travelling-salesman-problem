#ifndef STRUCT_H
#define STRUCT_H

/**< estrutura que armezana os dados dos pontos */
typedef struct reg{
    int codigo;
    float x;
    float y;
    bool active;
} REGISTRO;

/**< estrutura que armazena o percurso */
typedef struct per{
    int local;
    float distancia;
    struct per *anterior = NULL;
    struct per *proximo = NULL;
} PERCURSO;

#endif
