#include <stdio.h>

int main(int argc, char* argv[]){
	int id = 0;
	char name;
	char category;
	int expired_date = 0;
	int stock = 0;
	char table = [100];
	FILE *fp;

	fp = fopen(argv[1], "r");
	printf(fgets(50, fp));
	while(scanf("%d %s %s %d %d %s", id, name, category, expired_date, stock) == 6)
		fwrite(


}
