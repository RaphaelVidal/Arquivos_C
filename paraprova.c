#include<stdio.h>
#include<stdlib.h>
int main(){
	char escrtexto[40]; 
	FILE *p; 
	p=fopen("meuarquivo.txt","w");
	if(p==NULL){ 
		printf("Erro ao abrir o arquivo!");
		return 0;
	}
	printf("Digite texto:");
	scanf("%s",&escrtexto);
	fscanf(p,"%s\n",escrtexto);
	printf("\nDados inseridos com sucesso!");
	fclose(p);	
}
