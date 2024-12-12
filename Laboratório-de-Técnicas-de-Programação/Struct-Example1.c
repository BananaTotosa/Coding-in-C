#include <stdio.h>

#define NH 3

struct habitante {
  float salario;
  int idade;
  int num_filhos;
  char sexo;
};

int main(void)
{
  struct habitante vet_habitantes[NH];
  float media_sal = 0, media_filhos = 0, maior_sal = 0;
  int mulheres = 0, m1000 = 0;

  // leitura de dados
  for(int i = 0; i < NH; i++) {
    printf("Informe os dados do habitante ...\n");
    printf("Salário: ");
    scanf(" %f", &vet_habitantes[i].salario);
    printf("Idade: ");
    scanf(" %i",&vet_habitantes[i].idade);
    printf("Num de Filhos: ");
    scanf(" %i",&vet_habitantes[i].num_filhos);
    printf("Sexo: ");
    scanf(" %c", &vet_habitantes[i].sexo);
  }

  for (int i = 0; i <NH; i++) {
    media_sal += vet_habitantes[i].salario;
    media_filhos += vet_habitantes[i].num_filhos;

    if (vet_habitantes[i].salario > maior_sal)
      maior_sal = vet_habitantes[i].salario;

    if (vet_habitantes[i].sexo == 'F') {
      mulheres++;
      if (vet_habitantes[i].salario > 1000)
        m1000++;
    }
  }

  media_filhos /= NH;
  media_sal /= NH;

  printf("Média salarial R$%.2f\n", media_sal);
  printf("Média num. de filhos %.1f\n", media_filhos);
  printf("Maior salário: R$%.2f\n", maior_sal);
  printf("%% de mulheres com salário > R$ 1000,00: %.1f\n",
         (float)m1000/mulheres * 100);

  return 0;
}
