#include <stdio.h>

int fakultaet (int a){
	if (a == 0)
		return 1;
	else
		return (a * fakultaet(a-1));
}

int main(){
	int eingabe;

	printf("Gib mal ne Zahl: ");
	scanf("%d",&eingabe);
	printf("Fakultaet: %d\n",fakultaet(eingabe));

	return 0;
}
