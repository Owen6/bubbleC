#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
	int i,j,num,t;
	int tab[10];

	srand(time(NULL));
	for(i=0;i<=10;i++){
		int r = rand()%50;
		tab[i] = r;
	}
	for(j=0;j<=10;j++){
		printf("Table[%d] = %d\n",j,tab[j]);
	}

	printf("\n");

	int k = 0;
	int tempOne, tempTwo;
	while(num!=0){
		num = 0;
		for(k=0;k<10;k++){	
			if(tab[(10-k)]<tab[(9-k)]){
				tempOne = tab[(10-k)];
				tempTwo = tab[(9-k)];
				tab[(10-k)] = tempTwo;
				tab[(9-k)] = tempOne;
				num++;
			}
		}
	}

	for(t=0;t<=10;t++){
		printf("Table[%d] = %d\n",t,tab[t]);
	}

	return 0;
}