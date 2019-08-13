#include <stdio.h>
#include <stdlib.h>

//int f(int x, int y){
//	return (x&y) + ((x^y) >> 1);
//}
//
//int main(){
//	int result = f(2, 4);
//	printf("%d\n", result);
//	system("pause");
//	return 0;
//}

//void fun(int x, int y, int *c, int *d){
//	*c = x + y;
//	*d = x - y;
//}
//
//#define sum(a,b,c) a+b+c
//
//int main(){
//	/*int a = 4, b = 3, c = 0, d = 0;
//	fun(a, b, &c, &d);
//	printf("%d  %d\n", c, d);*/
//	/*int c[] = { 1, 3, 5};
//	int *k = c + 1;
//	printf("%d\n", *++k);*/
//	int i = 3;
//	int j = 2;
//	printf("%d\n", i*sum(i, (i + j), j));
//	system("pause");
//	return 0;
//}

//int f(int n){
//	static int i = 1;
//	if (n >= 5)
//		return n;
//	n = n + i;
//	i++;
//	return f(n);
//}
//
//int main(){
//	printf("%d\n", f(1));
//	system("pause");
//	return 0;
//}

int func(){
	int i, j, k = 0;
	for (i = 0, j = -1; j = 0; i++, j++){
		k++;
	}
	return k;
}

int main(){
	printf("%d\n", (func()));
	system("pause");
	return 0;
}