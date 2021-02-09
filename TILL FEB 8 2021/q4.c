#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int x;
	int y;
} pair;

int cmpfunc (const void * a, const void * b){
	if (((pair *) b)->x != ((pair *) a)->x){
		return -((pair *) b)->x + ((pair *) a)->x;
	} 
	else{
		return -((pair *) a)->y + ((pair *) b)->y;

	}
}

int main(){
	int num;
	pair p[100080];
	scanf("%d", &num); 
	while(num--){
		int n, x,y;
		scanf("%d",&n);

		for (int i=0; i<n;i++){
			scanf("%d %d", &x, &y);
			p[i].x=x;
			p[i].y=y;
		}

		qsort(p, n, sizeof(pair), cmpfunc);

		for (int i=0; i<n;i++){
			printf("%d %d\n", p[i].x, p[i].y);
		}

	}
}