#include "STU_STR.h"
int main_menu(stdlst *list,int CountS){
	int x=0, y=1;
	int max=5,  min=2;
	char key;
	print_main_menu();
	while(1){
		key = getch(key);
		if(key == 32){
			if(y==2) {
				system("cls");
				StudentList(list,CountS);
				print_main_menu();
				continue;
			}
			else if(y==3){
				system("cls");
				SearchStudent(list);
				print_main_menu();
				continue;
			}
			else if(y==4){
				system("cls");
				AddStudent(list);
				print_main_menu();
				continue;
			}
			if(y==5){
				break;
			}
		}
		
		gotoxy(x,y);
		printf("  ");
		movePosition(key,&y,max,min);
		gotoxy(x,y);
		printf("->");
	}
	return 0;
}
int AddStudent(stdlst *list){
	int i, j;
	char anykey; 
	stdlst Slist;
	for(i=0;list[i]._name[0]!='\0';i++){
		if(i==100)	{
			printf("명단이 꽉찼습니다. 아무키나 누르세요");
			getch(anykey);
			return 0; 	 
		}
	}
	printf("학생 이름: ");
	scanf("%s", Slist._name);
	printf("학생 번호: ");
	scanf("%s", Slist._num);
	printf("수강 과목: ");
	scanf("%s", Slist._course);
	printf("전화번호(-포함): ");
	scanf("%s", Slist._phone);
	
	for(j=0;list[j]._num[0]!='\0';j++){
		if(strcmp(list[j]._num,Slist._num) == 0){
			printf(" 같은 번호가 있습니다. 추가를 중지합니다.");
			getch(anykey);
			system("cls");
			return 0;
		}	
	}
	strcpy(list[i]._name,Slist._name);	
	strcpy(list[i]._num,Slist._num);
	strcpy(list[i]._course,Slist._course);
	strcpy(list[i]._phone,Slist._phone); 
	printf("학생이 정상적으로 추가되었습니다. 아무키나 누르시오 ");
	getch(anykey);
	system("cls");
	 
	return 0;
}
int StudentList(stdlst *list, int CountS){
	int i,x=0,y=4,min=4;
	char key;
	print_StudentList(list);
	while(1){
		key = getch();
		if(key==32){
			system("cls");
			LookStudent(list, y);
			print_StudentList(list);
			continue;
		}
		if(key=='b') break;
		if(key=='l'){
			system("cls");
			SortStudent(list,CountS);
			print_StudentList(list);
			continue;
		}
		gotoxy(x,y);
		printf("      ");
		movePosition(key,&y,4+CountS,min);
		gotoxy(x,y);
		printf("    ->");
	}
	system("cls");
	return 0;
}
int LookStudent(stdlst *list, int y){
	char key;
	print_LookStudent(list,y);
	while(1){
		key = getch();
		if(key=='b') break;
		else if(key=='r') {
			system("cls");
			Revise(list, y);
			print_LookStudent(list,y);
			continue;
		}	
	}
	system("cls");
	return 0;
} 
int Revise(stdlst *list, int y){
	char key;
	int _y, x=2;
	int max=5,min=2;
	print_Revise();
	while(1){
		key = getch();
		if(key== 'b') break;
		if(key == 32){
			system("cls");
	  		Revise_Mechanic(list,_y,y);
			break;
		}
		gotoxy(x,_y);
		printf("      ");
		movePosition(key,&_y,max,min);
		gotoxy(x,_y);
		printf("    ->");
	}
	system("cls");
	return 0;
}
int Revise_Mechanic(stdlst *list, int _y, int y){
	char name[20];
	char num[7];
	char course[20];
	char phone_num[14]; 
 	char key;
	
	if(_y==2){
		printf("\n");
		printf("\t수정할 이름을 적으시오\n");
		printf("\t>>>");
		scanf(" %[^\n]", name);
		strcpy(list[y-4]._name,name);
	}
	if(_y==3){
		printf("\n");
		printf("\t수정할 학번을 적으시오\n");
		printf("\t>>>");
		scanf(" %[^\n]", num);
		strcpy(list[y-4]._num,num);
	}
	if(_y==4){
		printf("\n");
		printf("\t수정할 수강과목을 적으시오\n");
		printf("\t>>>");
		scanf(" %[^\n]", course);
		strcpy(list[y-4]._course,course);
	}
	if(_y==5){
		printf("\n");
		printf("\t수정할 폰번호를 적으시오\n");
		printf("\t>>>");
		scanf(" %[^\n]", phone_num);
		strcpy(list[y-4]._phone,phone_num);
	}
	printf("\t 수정되었습니다. 아무키나 누르시오.");
	key = getch();
	system("cls");
	return 0;
}
int SearchStudent(stdlst *list){
	char key;
	int x=2, y=2,max=3,min=2;
	print_SearchStudent(list);
	while(1){
		if(key==32){
			system("cls");
			SearchStudent_Mechanic(list,y);
			break;
		}
		key = getch();
		gotoxy(x,y);
		printf("      ");
		movePosition(key,&y,max,min);
		gotoxy(x,y);
		printf("    ->");
		}
	return 0;
}
int SearchStudent_Mechanic(stdlst *list, int y){
	char Sname[20];
	char Snum[7];
	stdlst Search_list[20];
	memset(Search_list,0,sizeof(Search_list));
	char key;
	int i=0,j=0;
	printf("\n"); 
	printf("\t검색할 단어를 입력하세요\n");
	printf("\t==========================\n");

	if(y==2) {
		
		scanf(" %[^\n]",Sname);
		
		for(i=0;i<2;i++){
			if(strncmp(list[i]._name,Sname,sizeof(Sname))==0){
				strcpy(Search_list[j]._name,list[i]._name);	
				strcpy(Search_list[j]._num,list[i]._num);
				strcpy(Search_list[j]._course,list[i]._course);
				strcpy(Search_list[j]._phone,list[i]._phone);
				j++;
			}		
		}
	}	
	if(y==3){
		scanf(" %[^\n]",Snum);
		for(i=0;i<100;i++){
			if(strncmp(list[i]._num,Snum,sizeof(Sname))==0){
				strcpy(Search_list[j]._name,list[i]._name);
				strcpy(Search_list[j]._num,list[i]._num);
				strcpy(Search_list[j]._course,list[i]._course);
				strcpy(Search_list[j]._phone,list[i]._phone);	
				j++;
			}		
		}
	}
	
	printf("\n");
	printf("\t이름\t\t학번\t과목\t\t전화번호\n");
	printf("\t==================================================\n");
	int k = j;
	for(j=0;j<k;j++)	printf("\t%s\t%s\t%s\t%s\n",Search_list[j]._name,Search_list[j]._num,Search_list[j]._course,Search_list[j]._phone);
	
	key = getch();
	system("cls");
	return 0;
}
int SortStudent(stdlst *list,int CountS){
	char key;
	int x=2, y=2,max=3,min=2;
	print_SortStudent();
	while(1){
		key = getch();
		if(key==32){
			system("cls");
			SortStudent_Mechanic(list, y,CountS);
			break;
			}
		gotoxy(x,y);
		printf("  ");
		movePosition(key,&y,max,min);
		gotoxy(x,y);
		printf("->");
	}
	system("cls");
	return 0;
}
int SortStudent_Mechanic(stdlst *list, int y,int CountS){
	stdlst tmp;
	char key; 
	int i=0,j=0;
	if(y==2){
		for (i=0; i<CountS-1; i++){
			for (j=0; j<CountS-2-i; j++){
				if (strcmp(list[j]._name, list[j+1]._name)>0){
					printf("바뀌기 전 \n");
					printf("%s | %s | %s | %s\n",list[j]._name,list[j]._num,list[j]._course,list[j]._phone);
					printf("%s | %s | %s | %s\n",list[j+1]._name,list[j+1]._num,list[j+1]._course,list[j+1]._phone);
					strcpy(tmp._name, list[j]._name);
					strcpy(list[j]._name, list[j+1]._name);
					strcpy(list[j+1]._name, tmp._name);
					
					strcpy(tmp._num, list[j]._num);
					strcpy(list[j]._num, list[j+1]._num);
					strcpy(list[j+1]._num, tmp._num);
					
					strcpy(tmp._course, list[j]._course);
					strcpy(list[j]._course, list[j+1]._course);
					strcpy(list[j+1]._course, tmp._course);
					
					strcpy(tmp._phone, list[j]._phone);
					strcpy(list[j]._phone, list[j+1]._phone);
					strcpy(list[j+1]._phone, tmp._phone);
					printf("바뀐 후 \n");
					printf("%s | %s | %s | %s\n",list[j]._name,list[j]._num,list[j]._course,list[j]._phone);
					printf("%s | %s | %s | %s\n",list[j+1]._name,list[j+1]._num,list[j+1]._course,list[j+1]._phone);
				}
			}
		}
	}
	if(y==3){
		for (i=0; i<CountS-1; i++){
			for (j=0; j<CountS-2-i; j++){
				if (strcmp(list[j]._num, list[j+1]._num)>0){
					strcpy(tmp._name, list[j]._name);
					strcpy(list[j]._name, list[j+1]._name);
					strcpy(list[j+1]._name, tmp._name);
					
					strcpy(tmp._num, list[j]._num);
					strcpy(list[j]._num, list[j+1]._num);
					strcpy(list[j+1]._num, tmp._num);
					
					strcpy(tmp._course, list[j]._course);
					strcpy(list[j]._course, list[j+1]._course);
					strcpy(list[j+1]._course, tmp._course);
					
					strcpy(tmp._phone, list[j]._phone);
					strcpy(list[j]._phone, list[j+1]._phone);
					strcpy(list[j+1]._phone, tmp._phone);
				}
			}
		}
	}
	key = getch();
	return 0;
}


