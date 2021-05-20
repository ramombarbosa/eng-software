int main(int argc, char *argv[]) {
	
	float dolar;
	float cotacao;
	
	
    printf("informe o valor em  dolar para ser convertido em reais  \n");
	scanf("%f", &dolar);
	
	
	printf("informe a cotacao do dolar atual: \n");
	scanf("%f", &cotacao);
	
		if(cotacao<= 0){
		printf("valor para cotacao invalido informe um valor acima de 0 %f \n " );
		
		printf("digite uma cotacao valida: \n");
		scanf("%f", &cotacao);
	}
	
		
	float conversao = dolar * cotacao;
	
	printf(" o valor em reais e : %f /n", conversao); 
	
	return 0;