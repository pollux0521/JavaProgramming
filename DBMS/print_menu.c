#include "STU_STR.h"

void print_main_menu(){
	setColor(11,0);
	printf("=====================================================\n");
	printf("\t\t학생 관리 프로그램\n");
	printf("    학생 명단\n");
	printf("    학생 검색\n");
	printf("    학생 추가\n");
	printf("    나가기\n"); 
	printf("=====================================================\n");
}
void print_StudentList(stdlst *list){
	int i;
	printf("\n");
	printf("\t자세히 보기(space bar)\t 뒤로가기(b)\t정렬(l)\n");
	printf("\t학생\t학번\n");
	printf("\t=================================\n");
	
	for(i=0;list[i]._name[i] != '\0';i++){
		printf("\t%s\t%s\n",list[i]._name, list[i]._num);
	}
}
void print_LookStudent(stdlst *list, int y){
	printf("\n");
	printf("\t===========================\n");
	printf("\t이름    : %s\n\n",list[y-4]._name);
	printf("\t===========================\n");
	printf("\t학번    : %s\n\n",list[y-4]._num);
	printf("\t===========================\n");
	printf("\t수강과목: %s\n\n",list[y-4]._course);
	printf("\t===========================\n");
	printf("\t폰번호  : %s\n\n",list[y-4]._phone);
	printf("\t===========================\n");
	printf("\t뒤로가기 = b       수정 = r");
	
}
void print_SearchStudent(){
	printf("\n");
	printf("\t무엇으로 검색할 건가요?\n");
	printf("\t1. 이름\n");
	printf("\t2. 학번\n");
} 
void print_Revise(){
	printf("\n");
	printf("\t수정하고 싶은 항목을 고르시오\n");
	printf("\t1. 이름\n");
	printf("\t2. 학번\n");
	printf("\t3. 수강과목\n");
	printf("\t4. 폰번호\n");
	printf("\t================================\n");
	printf("\t뒤로가기 = b       선택 = space bar\n");
}
void print_SortStudent(){
	printf("\t정렬 방법을 선택하시오\n");
	printf("\t==========================\n");
	printf("\t1. 이름\n");
	printf("\t2. 학번\n"); 
}
