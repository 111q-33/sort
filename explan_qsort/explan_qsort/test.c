#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//qsort的用法
//void类型的指针可以接收所有类型的指针
//num表示比较个数
//width表示每个元素的大小
//int(__cdecl *compare)(const void *elem1, const void *elem2)是一个函数指针（回调函数），用于比较大小
//回调函数：回调函数就是一个通过函数指针调用的函数。如果你把函数的指针（地址）作为参数传递给另一
//个函数，当这个指针被用来调用其所指向的函数时，我们就说这是回调函数。回调函数不是由该
//函数的实现方直接调用，而是在特定的事件或条件发生时由另外的一方调用的，用于对该事件或
//条件进行响应。
//void qsort(void *base, size_t num, size_t width, int(__cdecl *compare)(const void *elem1, const void *elem2));
struct stu
{
	char name[10];
	int age;
};
//用name排序
int cmp1(void *n1, void* n2)
{
	return strcmp(((struct stu*)n1)->name , ((struct stu*)n1)->name);
}
//用age排序
int cmp2(void *n1, void* n2)
{
	return ((struct stu*)n1)->age - ((struct stu*)n2)->age;
}
int main()
{
	struct stu a[] = { { "李建国", 19 }, { "张三", 18 } };
	int sz = sizeof(a) / sizeof(a[0]);
	/*qsort(a, sz, sizeof(a[0]), cmp1);*/
	qsort(a, sz, sizeof(a[0]), cmp2);
	return 0;
}