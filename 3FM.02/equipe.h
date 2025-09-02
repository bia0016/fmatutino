#ifndef EQUIPE_H    
#define EQUIPE_H   
#define ERRO -999
typedef struct {
    int pos;
    char estado[50], time[50];
    int pts, j, v, e, d, gp, gc, sg;
    float aproveitamento;
    // sg = gp - gc
    //Pos;Estado;Equipe;Pts;J;V;E;D;GP;GC;SG
}equipe;

equipe * LerDados(char * Arquivo);
int getPontos(equipe * t, int);
float getAproveitamento(equipe * t, char * nome);

#endif