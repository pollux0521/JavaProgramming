#include "STU_STR.h"

void print_main_menu(){
	setColor(11,0);
	printf("=====================================================\n");
	printf("\t\t�л� ���� ���α׷�\n");
	printf("    �л� ���\n");
	printf("    �л� �˻�\n");
	printf("    �л� �߰�\n");
	printf("    ������\n"); 
	printf("=====================================================\n");
}
void print_StudentList(stdlst *list){
	int i;
	printf("\n");
	printf("\t�ڼ��� ����(space bar)\t �ڷΰ���(b)\t����(l)\n");
	printf("\t�л�\t�й�\n");
	printf("\t=================================\n");
	
	for(i=0;list[i]._name[i] != '\0';i++){
		printf("\t%s\t%s\n",list[i]._name, list[i]._num);
	}
}
void print_LookStudent(stdlst *list, int y){
	printf("\n");
	printf("\t===========================\n");
	printf("\t�̸�    : %s\n\n",list[y-4]._name);
	printf("\t===========================\n");
	printf("\t�й�    : %s\n\n",list[y-4]._num);
	printf("\t===========================\n");
	printf("\t��������: %s\n\n",list[y-4]._course);
	printf("\t===========================\n");
	printf("\t����ȣ  : %s\n\n",list[y-4]._phone);
	printf("\t===========================\n");
	printf("\t�ڷΰ��� = b       ���� = r");
	
}
void print_SearchStudent(){
	printf("\n");
	printf("\t�������� �˻��� �ǰ���?\n");
	printf("\t1. �̸�\n");
	printf("\t2. �й�\n");
} 
void print_Revise(){
	printf("\n");
	printf("\t�����ϰ� ���� �׸��� ���ÿ�\n");
	printf("\t1. �̸�\n");
	printf("\t2. �й�\n");
	printf("\t3. ��������\n");
	printf("\t4. ����ȣ\n");
	printf("\t================================\n");
	printf("\t�ڷΰ��� = b       ���� = space bar\n");
}
void print_SortStudent(){
	printf("\t���� ����� �����Ͻÿ�\n");
	printf("\t==========================\n");
	printf("\t1. �̸�\n");
	printf("\t2. �й�\n"); 
}
