#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct question{
	char q[120],answer[40];
};
int main(void){
	int num,i;
	FILE *outfile;
	//char letter = getchar();
	outfile = fopen("ques.data","w");
	printf("Enter the number of questions\n");
	struct question q1,q2;
	//char ques1[120],ans1[40],ques2[120],ans2[40];
	strcpy(q1.q,"Which is the first operating system");
	strcpy(q1.answer, "d13bbbd92b83ddaad994a12bd9d20dfba5fff139");
	strcpy(q2.q, " Who invented Java?");
	strcpy(q2.answer,"fdfd3f392068162d338a12418018ccc6886a5883");
	fwrite(&q1,sizeof(struct question),1,outfile);	
	fwrite(&q2,sizeof(struct question),1,outfile);	
	
	
}

