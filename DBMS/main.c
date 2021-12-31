#include "STU_STR.h"

int main(void){
	int i,CountS;
	stdlst list[100];
	memset(list,0,sizeof(list));
	FILE *fp = fopen("StudentList.dat","rb");
	for(i=0;feof(fp)==0;i++){
		fread(&list[i],sizeof(stdlst),1,fp);
	}
	CountS = i;
	main_menu(list,CountS);
	fclose(fp);
	
	fp = fopen("StudentList.dat","wb");
	for(i=0;list[i]._name[0]!='\0';i++){
		if(i==100)	return 0; 
		else fwrite(&list[i],sizeof(list[i]),1,fp);
	}
	fclose(fp);
	
	return 0;
}
