#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//qsort���÷�
//void���͵�ָ����Խ����������͵�ָ��
//num��ʾ�Ƚϸ���
//width��ʾÿ��Ԫ�صĴ�С
//int(__cdecl *compare)(const void *elem1, const void *elem2)��һ������ָ�루�ص������������ڱȽϴ�С
//�ص��������ص���������һ��ͨ������ָ����õĺ����������Ѻ�����ָ�루��ַ����Ϊ�������ݸ���һ
//�������������ָ�뱻������������ָ��ĺ���ʱ�����Ǿ�˵���ǻص��������ص����������ɸ�
//������ʵ�ַ�ֱ�ӵ��ã��������ض����¼�����������ʱ�������һ�����õģ����ڶԸ��¼���
//����������Ӧ��
//void qsort(void *base, size_t num, size_t width, int(__cdecl *compare)(const void *elem1, const void *elem2));
struct stu
{
	char name[10];
	int age;
};
//��name����
int cmp1(void *n1, void* n2)
{
	return strcmp(((struct stu*)n1)->name , ((struct stu*)n1)->name);
}
//��age����
int cmp2(void *n1, void* n2)
{
	return ((struct stu*)n1)->age - ((struct stu*)n2)->age;
}
int main()
{
	struct stu a[] = { { "���", 19 }, { "����", 18 } };
	int sz = sizeof(a) / sizeof(a[0]);
	/*qsort(a, sz, sizeof(a[0]), cmp1);*/
	qsort(a, sz, sizeof(a[0]), cmp2);
	return 0;
}