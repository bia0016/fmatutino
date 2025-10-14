#ifndef TAREFA_H
#define TAREFA_H

#define TAM_TITULO 96 
#define TAM_NOME 48

#define A_FAZER 0
#define EM_ANDAMENTO 1
#define FEITO 2

//definindo a estrutura de um elemento da LISTA
typedef struct {
    char Titulo[TAM_TITULO];
    char Responsavel[TAM_NOME];
    int Status;
    float Progresso;
    int Avaliacao;
} Tarefa;

//definindo a estrutura da LISTA de tarefas
typedef struct {
    Tarefa * Dados;
    int Capacidade;
    int Tamanho;
} Lista;

//fazer verificação para todos os dados
Lista * CriarLista(int C);
void DestruirLista(Lista * L);
void AdicionarTarefa(Lista * L, Tarefa T);
void GerarHTMLTabela(Lista *Lista, char *CaminhoArquivo);
#endif