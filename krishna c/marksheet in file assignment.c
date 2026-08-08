#include <stdio.h>

int main() {
	char name[15];
	int rollNo,marks[5],i,markChecker=0,total=0;
	float percentage=0.00;
	printf("enter your name:-");
	scanf("%s",&name);
	printf("enter your roll number:-");
	scanf("%d",&rollNo);
	printf("enter marks of given subject:\n");
	printf("1) maths= ");
	scanf("%d",&marks[0]);
	printf("2) english= ");
	scanf("%d",&marks[1]);
	printf("3) hindi= ");
	scanf("%d",&marks[2]);
	printf("4) science= ");
	scanf("%d",&marks[3]);
	printf("5) social science= ");
	scanf("%d",&marks[4]);
	for(i=0;i<5;i++) {
		if(marks[i]>100) {
			markChecker++;
		}
	}
	if(markChecker>=1) {
		printf("a mark above 100 is found. error");
	}
	else {
		for(i=0;i<5;i++) {
			total+= marks[i];
		}
		percentage= total/500 * 100;
		FILE *fptr;
		fptr= fopen("marksheet.txt", "w");
		if (fptr == NULL) {
			printf("error opening file");
			return 1;
		}
		fprintf(fptr, "------------------------------\n");
		fprintf(fptr, "------------------------------\n");
		fprintf(fptr, "| ********MARKSHEET********* |\n");
		fprintf(fptr, "------------------------------\n");
		fprintf(fptr, "|  name:  | %s               |\n",name);
		fprintf(fptr, "------------------------------\n");
		fprintf(fptr, "| roll no:| %d               |\n",rollNo);
		fprintf(fptr, "------------------------------\n");
		fprintf(fptr, "| subject | marks | max marks|\n");
		fprintf(fptr, "------------------------------\n");
		fprintf(fptr, "| maths   |  %d   |    100   |\n",marks[1]);
		fprintf(fptr, "------------------------------\n");
		fprintf(fptr, "| english |  %d   |    100   |\n",marks[2]);
		fprintf(fptr, "------------------------------\n");
		fprintf(fptr, "|  hindi  |  %d   |    100   |\n",marks[3]);
		fprintf(fptr, "------------------------------\n");
		fprintf(fptr, "| science |  %d   |    100   |\n",marks[4]);
		fprintf(fptr, "------------------------------\n");
		fprintf(fptr, "|  social |  %d   |    100   |\n",marks[5]);
		fprintf(fptr, "------------------------------\n");
		fprintf(fptr, "|  total  |  %d   |    500   |\n",total);
		fprintf(fptr, "------------------------------\n");
		fprintf(fptr, "| percent |  %.2f            |\n",percentage);
		fprintf(fptr, "------------------------------\n");
		fprintf(fptr, "------------------------------\n");
		fclose(fptr);
		printf("data returned to file");
	}
	return 0;
}
