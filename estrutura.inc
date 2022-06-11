#define NC 10
#define NM 1000

typedef struct {
    int ano;
    int mes;
    int dia;
    

}Data;              

typedef struct {
	char numConta[30];
	int idBanco;
	float saldo;
	int ativo;

}Conta;


typedef struct {
	int idConta;
	Data data;
	float valor;
	int ativo;

}Movimento;
