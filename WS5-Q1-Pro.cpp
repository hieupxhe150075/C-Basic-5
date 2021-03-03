#include <stdio.h>
int ktrangto(int n)
{
	if(n<=1) return 0;
	int i;
	for(i=2; i<=n/2;i++)
	if(n%i==0){return 0;
	}
	return 1;
}
main()
{
	int a, b, c=0, d, i, x;
	for(;;){
	printf("Choose\n1.Continue\n0.End\n");
	scanf("%d", &x);
	while(x!=0 && x!=1){printf("Input invalid\n");printf("Choose\n1.Continue\n0.End\n");
	scanf("%d", &x);
	}
	if(x==1){
	printf("Press lowest limit: ");
	scanf("%d", &a);
	while(a<0){printf("Input invalid\n");printf("Press lowest limit: ");
	scanf("%d", &a);
	}
	printf("Press hightest limit: ");
	scanf("%d", &b);
	while(b<a){printf("Input invalid\n");printf("Press hightest limit: ");
	scanf("%d", &b);
	}
	printf("Number of column (<8): ");
	scanf("%d", &d);
	while(d<1 || d>8){printf("Input invalid\n");printf("Number of column (<8): ");
	scanf("%d", &d);
	}
	printf("They are prime numbers:\n");
	for(i=a; i<=b; i++){
	
	if(ktrangto(i)==1){printf("\t%d", i);c+=1;
	}
	
	if(c==d){
	printf("\n");
	c=0;}}
}	else break;}}
