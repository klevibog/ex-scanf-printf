/*
 * prov1.c
 *
 *  Created on: 13 mar 2020
 *      Author: utente
 */

#include <stdio.h>
int main(int argc, char **argv) {
	int a,b,op;

	printf("\nscrivi 2 char: ");
		scanf("%d %d", &a,&b);
		printf("\nche op vuoi fare:\n 1-piu \n2-meno \n3-mupìltiplaz\n");
		scanf("%d",&op);
		if(op==1)
		printf("%d",a+b);
		else if(op==2)
			printf("%d",a-b);
		else
			printf("risultato: %d",a*b);

		return 0;

}

