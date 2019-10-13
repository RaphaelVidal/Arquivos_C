#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main(){
	char escrtexto[40]; // variável para receber texto
	char ch;
	FILE *p; //cria um ponteiro do tipo file obs:(FILE de ser caixa alta)
	
	p=fopen("meuarquivo.txt","w");//o ponteiro recebe a função de abertura com nome e forma de abrir
	
	if(p==NULL){ // informa se ocorrer erro na abertura do arquivo
		printf("Erro ao abrir o arquivo!");
		return 0;
	}
	
	printf("Digite texto:");
	scanf("%s",&escrtexto);
	printf("%s",escrtexto);
	
	fprintf(p,"%s\n",escrtexto);//inserir dados no arquivo por teclado
	
	printf("\nDados inseridos com sucesso!");
	
	fclose(p);
	
	/*p=fopen("meuarquivo.txt","r");//o ponteiro recebe a função de abertura com nome e forma de abrir
	
	printf("\nDados no arquivo: ");
	 while( (ch=fgetc(p))!= EOF )
		putchar(ch);
	
	fclose(p);*/
	
}
