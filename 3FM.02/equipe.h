#ifndef EQUIPE_H    
#define EQUIPE_H   
typedef struct {
    int pos;
    char estado[50], equipe[50];
    int pts, j, v, e, d, gp, gc, sg;
    float aproveitamento;
    // sg = gp - gc
    //Pos;Estado;Equipe;Pts;J;V;E;D;GP;GC;SG
}time;

time * LerDados(char * Arquivo);

#endif