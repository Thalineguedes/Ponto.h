#ifndef PONTO_H_INCLUDED
#define PONTO_H_INCLUDED
struct ponto {
  float x;
  float y;
};
typedef struct ponto ponto;
ponto* Cria_ponto (float x, float y);
void libera_ponto (ponto *pto);
int acessa_ponto (ponto *pto, float *x, float *y);
int atribuir_ponto (ponto *pto, float x, float y);
float distancia_ponto (ponto *pt01, ponto *pt02);

#endif // PONTO_HINCLUDED 
