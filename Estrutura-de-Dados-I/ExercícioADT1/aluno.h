typedef struct aluno Aluno;

Aluno* criarAluno(char* nome, int idade, int codigo);
void configuraNome(Aluno* qualquerAluno, char* qualquerNome);
void configuraIdade(Aluno* qualquerAluno, int qualquerIdade);
void configuraCodigo(Aluno* qualquerAluno, int qualquerCodigo);
char* obterNome(Aluno* aluno);
int obterIdade(Aluno* aluno); 
int obterCodigo(Aluno* aluno);
