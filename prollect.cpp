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
	printf("\n         ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»");
	printf("\n         º                   :: Bienvenido ::                          º");
	printf("\n         ÌÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¹");
	printf("\n         º                                                             º");
	printf("\n         º     Este programa funciona como una tienda de deportes      º");
	printf("\n         º     El usuario indica el tipo de articulo que va a comprar  º");
	printf("\n         º     Y el precio de cada producto                            º");
	printf("\n         º     El programa da un Ticket                                º");
	printf("\n         º                                                             º");
	printf("\n         ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼");
	
	printf("\n         ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»");
	printf("\n         º                  Ingresa tu nombre                          º");
	printf("\n         ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼");
	printf("\n         %c\t",175);
	scanf(" %[^\n]",&nom);

	tick = fopen("ticket.txt", "w");
	if (tick == NULL) {
	printf("\n         ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»");
	printf("\n         º          No pude abrir el archivo ticket.txt :( !           º");
	printf("\n         ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼");
          
  	exit(0);
}
	pelotas = fopen("pelotas.txt", "r+");
	if (tick == NULL) {
	printf("\n         ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»");
	printf("\n         º          No pude abrir el archivo pelotas.txt :( !          º");
	printf("\n         ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼");	
          
 	 exit(0);
}
	zapatos = fopen("zapatosdeportivos.txt", "r+");
	if (tick == NULL) {
	printf("\n         ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»");
	printf("\n         º    No pude abrir el archivo zapatos deportivos.txt :( !     º");
	printf("\n         ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼");	
          
  	exit(0);
}
	ropa = fopen("ropadeportiva.txt", "r+");
	if (tick == NULL) {
	printf("\n         ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»");
	printf("\n         º    No pude abrir el archivo ropa deportiva.txt :( !         º");
	printf("\n         ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼");	
          
  	exit(0);
}
		
	do{
		int c=0, d=0 , dmax=0, dmax2=0, conde=0;// guarda le intervalo de los precios mayores
		double max1=0,max2=0; //varibles para guardar los precios maximos
		printf("\n         ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»");
		printf("\n         º    Actualmente nuestro inventario cuenta con la siguiente cantidad de articulos:   º");
		printf("\n         ÌÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¹");	
   
		fscanf(pelotas, "%d ",&pelota);
		fscanf(zapatos, "%d ",&zapato);
		fscanf(ropa, "%d ",&ropas);
		printf("\n         º               Pelotas: %d                                                         º",pelota);
		printf("\n         ÌÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¹");
		printf("\n         º               Ropa deportiva: %d                                                   º",zapato);
		printf("\n         ÌÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¹");
		printf("\n         º               Zapatos deportivos: %d                                               º",ropas);
		printf("\n         ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼");
		
		printf("\n\n         ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»");
		printf("\n         º                   Cuales productos quieres comprar?                                º");
		printf("\n         ÌÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ%cÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ%cÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¹",203,203);
		printf("\n         º            1.pelotas    º    2.ropa deportiva    º    3.zapatos deportivos         º");
		printf("\n         ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ%cÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ%cÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼",202,202);
		printf("\n         %c\t",175);
		scanf("%d",&a);
		
		printf("\n         ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»");
		printf("\n         º        ¿Cuantos desea comprar?                              º");
		printf("\n         ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼");	
      
		do{
			printf("\n         %c\t",175);
			scanf("%d",&c);		
			if (c<0) {
				printf("\n         ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»");
				printf("\n         º        Tiene que ser positiva                               º");
				printf("\n         ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼");
			}
		}while (c<0);
		
		b=(double*)malloc(c*sizeof(double));
		if(b==NULL){
		printf("\n         ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»");
		printf("\n         º        No se puede comprar tanto                            º");
		printf("\n         ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼");	
		getchar();
		getchar();
		exit(0);
	}	
		if(a==1){
			fclose(pelotas);
			pelotas = fopen("pelotas.txt", "w");
			if (pelotas == NULL) {
			printf("\n         ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»");
			printf("\n         º      No pude abrir el archivo pelotas.txt :( !              º");
			printf("\n         ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼");	
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
			printf("\n         ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»");
			printf("\n         º      No pude abrir el archivo ropadeportiva.txt :( !        º");
			printf("\n         ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼");	
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
  			printf("\n         ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»");
			printf("\n         º    No pude abrir el archivo zapatos deportivos.txt :( !     º");
			printf("\n         ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼");
          	exit(0);
			}
			zapato=zapato-c;
			fprintf(zapatos, "%d",zapato);
			fclose(zapatos);
			zapatos = fopen("zapatosdeportivos.txt", "r+");
			
		}
		for(d=0;d<c;d++){
			printf("\n         ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»");
			printf("\n         º    Ingresa el precio del producto %d                         º",d+1);
			printf("\n         ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼");
			do{
				printf("\n         %c\t",175);
				scanf("%lf",(b+d));
				m=*(b+d);
				if (m<=0){
				printf("\n         ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»");
				printf("\n         º    Tiene que ser mayor a 0                                  º");
				printf("\n         ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼");
          	
				}
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
			printf("\n         ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»");
			printf("\n         º       El precio del producto %d es: %.2f                     º",d+1,*(b+d));
			printf("\n         ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼");
		}	
		
		printf("\n         ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»");
		printf("\n         º       El precio del producto %d es el mayor                 º",dmax+1);
		printf("\n         º                                                             º");
		fprintf(tick, "\n\t R E C I B O\n \t %s \n",nom);
		fprintf(tick, "\n\tEl precio del producto %d es el mayor\n", dmax+1);
		printf("\n         º       Es de: %.2f  y con descuento es: %.2f                 º",max1,max1*.5);
		printf("\n         ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼");
		fprintf(tick, "\tEs de: %.2f  y con descuento es: %.2f\n\n",max1,max1*.5);
		printf("\n         ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»");
		printf("\n         º  El precio del segundo producto con mayor precio es el %d    º",dmax2+1);
		fprintf(tick, "\tEl precio del segundo producto con mayor precio es el %d\n",dmax2+1);
		printf("\n         º                                                             º");
		printf("\n         º  Es de: %.2f  y con descuento es: %.2f                      º",max2,max2*.75);
		printf("\n         ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼");
		
		fprintf(tick, "\tEs de: %.2f  y con descuento es: %.2f\n\n",max2,max2*.75);
			if(a==1){
			printf("\n         ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»");
			printf("\n         º       Compraste %d pelotas                                  º",c);
			printf("\n         ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼");
			fprintf(tick, "\tCompraste %d pelotas \n",c);
		}
		if(a==2){
			printf("\n         ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»");
			printf("\n         º       Compraste %d prendas deportivas                       º",c);
			printf("\n         ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼");
			fprintf(tick, "\tCompraste %d prendas deportivas \n",c);
		}
		if(a==3){
			printf("\n         ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»");
			printf("\n         º       Compraste %d zapatos deportivos                       º",c);
			printf("\n         ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼");
			fprintf(tick, "\tCompraste %d zapatos deportivos \n",c);
		}
		printf("\n         ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»");
		printf("\n         º      El total es de: %.3f                                   º",m);
		printf("\n         ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼");
		fprintf(tick, "\tEl total es de: %.3f\n",m);
		
		printf("\n         ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»");
		printf("\n         º  Su ticket se encuentra en el archivo de texto: ticket.txt  º",m);
		printf("\n         ÌÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¹");
		printf("\n         º  Deseas realizar otras compras?: (si/no):                   º",m);
		printf("\n         ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼");
		printf("\n         %c\t",175);	
		scanf(" %[^\n]", op);
		for(conde=0; conde<=1; conde++)
		{
			op[conde]= tolower(op[conde]);
		}

	}while (strcmp(op,"si")==0);
	
	printf("\n\n\t:: Vuelva pronto %s ::",nom);
	getchar();
	getchar();
	return 0;
}
