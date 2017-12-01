#include  <stdio.h>
int main (){
	int c_coe,c_rato,c_sapo; 
	int N,i,quantia;
	char tipo;	
	float p1,p2,p3;
	double c_geral;
	
	scanf("%d",&N);
	
	c_coe=0;
	c_rato=0;
	c_sapo=0;
 
	for(i=0;i<N;i++){		
		scanf("%d %c",&quantia,&tipo);							
			if(tipo=='C')
				c_coe= c_coe + quantia;
			else if(tipo== 'R')
				c_rato= c_rato +quantia;
			
			else if(tipo=='S')
				c_sapo= c_sapo + quantia;			
					
	}
	c_geral= c_sapo+c_rato+c_coe;
	
	p1=(c_coe*100.00)/c_geral;
	p2=(c_rato*100.00)/c_geral;
	p3=(c_sapo*100.00)/c_geral;
		
	printf ("Total: %.lf cobaias\n",c_geral);
	printf ("Total de coelhos: %d\n",c_coe);
	printf ("Total de ratos: %d\n",c_rato);
	printf ("Total de sapos: %d\n",c_sapo);
	printf ("Percentual de coelhos: %.2f %%\n",p1);
	printf ("Percentual de ratos: %.2f %%\n",p2);	
	printf ("Percentual de sapos: %.2f %%\n",p3);
		
	return 0;
}