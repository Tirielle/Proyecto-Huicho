#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
	double *b=NULL,m;
	char nom [50], op[4];
	FILE *tick;
	FILE *ropa;
	int ropas=0;
	int zapato=0;
	int pelota=0;
	int a=0;
	FILE *zapatos;
	FILE *pelotas;
	printf("\t\tBienvenido\n");
	printf("\n\tIngresa tu nombre\n\t");
	scanf(" %[^\n]",&nom);

	tick = fopen("ticket.txt", "w");
	if (tick == NULL) {
  printf("No pude abrir el archivo ticket.txt :( !\n");
          
  exit(0);
}
	pelotas = fopen("pelotas.txt", "r+");
	if (tick == NULL) {
  printf("No pude abrir el archivo pelotas.txt :( !\n");
          
  exit(0);
}
	zapatos = fopen("zapatosdeportivos.txt", "r+");
	if (tick == NULL) {
  printf("No pude abrir el archivo zapatos deportivos.txt :( !\n");
          
  exit(0);
}
	ropa = fopen("ropadeportiva.txt", "r+");
	if (tick == NULL) {
  printf("No pude abrir el archivo ropa deportiva.txt :( !\n");
          
  exit(0);
}
		
	do{
		int c=0, d=0 , dmax=0, dmax2=0, conde=0;// guarda le intervalo de los precios mayores
		double max1=0,max2=0; //varibles para guardar los precios maximos
		printf("Actualmente nuestro inventario cuenta con la siguiente cantidad de articulos: \n");
		fscanf(pelotas, "%d ",&pelota);
		fscanf(zapatos, "%d ",&zapato);
		fscanf(ropa, "%d ",&ropas);
		printf("\nPelotas: %d",pelota);
		printf("\nzapatos deportivos: %d",zapato);
		printf("\nropa deportiva: %d",ropas);
		printf("\nCuales productos quieres comprar? \n");
		printf("1.pelotas \t 2.ropa deportiva \t 3.zapatos deportivos \n");
		scanf("%d",&a);
		
		printf("\n¿Cuantos desea comprar?\n");
		do{
			scanf("%d",&c);		
			if (c<0) printf("Tiene que ser positiva\n");
		}while (c<0);
		
		b=(double*)malloc(c*sizeof(double));
		if(b==NULL){
		printf("No se puede comprar tanto");
		getchar();
		getchar();
		exit(0);
	}	
		if(a==1){
			fclose(pelotas);
			pelotas = fopen("pelotas.txt", "w");
			if (pelotas == NULL) {
  			printf("No pude abrir el archivo pelotas.txt :( !\n");
          	exit(0);
			}
			pelota=pelota-c;
			fprintf(pelotas, "%d",pelota);
			fclose(pelotas);
			pelotas = fopen("pelotas.txt", "r+");
			
		}
		if(a==2){
			fclose(ropa);
			ropa = fopen("ropadeportiva.txt", "w");
			if (ropa == NULL) {
  			printf("No pude abrir el archivo ropadeportiva.txt :( !\n");
          	exit(0);
			}
			ropas=ropas-c;
			fprintf(ropa, "%d",ropas);
			fclose(ropa);
			ropa = fopen("ropadeportiva.txt", "r+");
			
		}
		if(a==3){
			fclose(zapatos);
			zapatos = fopen("zapatosdeportivos.txt", "w");
			if (zapatos == NULL) {
  			printf("No pude abrir el archivo zapatosdeportivos.txt :( !\n");
          	exit(0);
			}
			zapato=zapato-c;
			fprintf(zapatos, "%d",zapato);
			fclose(zapatos);
			zapatos = fopen("zapatosdeportivos.txt", "r+");
			
		}
		for(d=0;d<c;d++){
			printf("Ingresa el precio del producto %d\n",d+1);
			do{
				scanf("%lf",(b+d));
				m=*(b+d);
				if (m<=0) printf("Tiene que ser mayor a 0\n");
			}while (m<=0);
			
			if(m>max1){//busca el valor maximo
			max1=m;//guarda el valor maximo
			dmax=d;	//guarda el intervalo en que es mayor
			} 	
		}
		m=0;
		for(d=0;d<c;d++){//busca el segundo con mayor precio
			m=*(b+d);
			if(d!=dmax) if(m>max2){
			max2=m;//guarda el seguando valor maximo
			dmax2=d;
			}
		}
		m=0;
		for(d=0;d<c;d++){//suma todo incluyendo descuentos
			if(d!=dmax){
				if(d!=dmax2){
					m=m+ *(b+d);
				}else m=m+ ((*(b+d))*.5);
			}else m=m+ ((*(b+d))*.75);
			}
		printf("\n");
		for(d=0;d<c;d++){//imprime los productos con su precio		
			printf("El precio del producto %d es: %.2f\n",d+1,*(b+d));
		}	
		
		printf("\nEl precio del producto %d es el mayor\n",dmax+1);
		fprintf(tick, "\n\t R E C I B O\n \t %s \n",nom);
		fprintf(tick, "\nEl precio del producto %d es el mayor\n", dmax+1);
		printf("Es de: %.2f  y con descuento es: %.2f\n\n",max1,max1*.5);
		fprintf(tick, "Es de: %.2f  y con descuento es: %.2f\n\n",max1,max1*.5);
		printf("El precio del producto %d es el penultimo mayor\n",dmax2+1);
		fprintf(tick, "El precio del producto %d es el penultimo mayor\n",dmax2+1);
		printf("Es de: %.2f  y con descuento es: %.2f\n\n",max2,max2*.75);
		fprintf(tick, "Es de: %.2f  y con descuento es: %.2f\n\n",max2,max2*.75);
			if(a==1){
			printf("Compraste %d pelotas \n",c);
			fprintf(tick, "Compraste %d pelotas \n",c);
		}
		if(a==2){
			printf("Compraste %d prendas deportivas \n",c);
			fprintf(tick, "Compraste %d prendas deportivas \n",c);
		}
		if(a==3){
			printf("Compraste %d zapatos deportivos \n",c);
			fprintf(tick, "Compraste %d zapatos deportivos \n",c);
		}
		printf("El total es de: %.3f\n",m);
		fprintf(tick, "El total es de: %.3f\n",m);
		
		printf("su ticket se encuentra en el archivo de texto: ticket.txt\n");
		printf("\n\t Deseas realizar otras compras?: (si/no): ");
		scanf(" %[^\n]", op);
		for(conde=0; conde<=1; conde++)
		{
			op[conde]= tolower(op[conde]);
		}

	}while (strcmp(op,"si")==0);

	printf("\n\n\tVuelva pronto %s",nom);
	getchar();
	getchar();
	return 0;
}
