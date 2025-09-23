#include<stdio.h>
#include<stdlib.h>
#define ARRAY_SIZE 5

int length1(char str[]);
int length2(char[]);
int length3(char* str);

void func1(int data1, int*data2) {
	printf("func1()に渡されたdata1の値は%d、data2は%p\n",
		data1, data2);
	data1 = 100;
	*data2 = 100;
	printf("func1()のdata1の値は%d、data2は%d\n", data1, *data2);
}

void allocate_memory(int** p_ptr) {
	//mainで引数受け取った時にp_ptrへの代入がされる
	*p_ptr = (int*)malloc(sizeof(int));//のでこの行*p_ptrは書き換え
	printf("関数内で確保したﾒﾓﾘのｱﾄﾞﾚｽは:%p\n", *p_ptr);
}

int main(int argc,char *argv[]){
	printf("argcの値は%d\n", argc);
	for (int i = 0; i < argc; i++)
		printf("argv[%d]の文字列は、%s\n", i, argv[i]);

	char* name[3] = { "miyao","suzuki","satou" };
	//ﾎﾟｲﾝﾀの配列 
	/*"miyao"の様な文字リテラルは、コンパイルされるとﾒﾓﾘのどこかに
	* 配置され、ﾌﾟﾛｸﾞﾗﾑの中ではその文字列の先頭文字ｱﾄﾞﾚｽとして、
	* 扱われる。この先頭文字ｱﾄﾞﾚｽを集めて一つで扱いたい時、int型の
	* 配列には入れられない。ｱﾄﾞﾚｽと言う種類の情報なのだから、それ
	* 専用の箱ﾎﾟｲﾝﾀ変数が必要になる。char* を複数並べたものが
	* 「charへのﾎﾟｲﾝﾀ配列」その為に宣言のcharに *がついている。
	* この配列の各要素の型は文字へのﾎﾟｲﾝﾀですよと宣言している。
	
	ﾎﾟｲﾝﾀ配列を使う場面は応用レベルでなければ、文字列を格納すると
	考えてOK。
	もしnameと言う配列を関数に渡すと、それは「配列の先頭
	要素のアドレス」に変換される（仮引数str[]が*strに変換されるのと同じ）
	name[]の先頭要素の型はchar* 型なので「char*へのｱﾄﾞﾚｽ」となり、
	結果としてchar** 型として扱わる。
	char *argv[]がchar** argvとして扱われるのと同じ。
	*/
	
	int* a_ptr = NULL;
	printf("\n呼出前のa_ptr:%p\n", (void*)a_ptr);
	allocate_memory(&a_ptr);
	printf("呼出後のa_ptr:%p\n", (void*)a_ptr);
	if (a_ptr != NULL) {
		*a_ptr = 123;
		printf("確保したﾒﾓﾘに入れた値は%d\n\n", *a_ptr);
		free(a_ptr);
	}
	char abc[] = "abcdefg";
	printf("文字数は、%d\n", length1(abc));//C言語は配列を引数として
	printf("文字数は、%d\n", length2(abc));//渡せないので、*abcに変換
	printf("文字数は、%d\n\n", length3(abc));//されて渡される。

	int data1 = 10, data2 = 10;
	printf("data1の初期値は%d、data2の初期値は%d\n", data1, data2);
	func1(data1, &data2);
	printf("data1の最終値は%d、data2の最終値は%d\n\n", data1, data2);

	char str[] = "testpoint";
	char* p = str;
	printf("「str」は%s\n", str);
	printf("「p」strは%s\n", p);
	printf("「$str[0]」strは%s\n", &str[0]);
	while (*p) {
		putchar(*p);
		p++;
	}printf("\n\n");

	int i, a[ARRAY_SIZE], b[ARRAY_SIZE];
	int* ip;
	for (i = 0; i < ARRAY_SIZE; i++) {
		ip = &a[i];
		*ip = i;
	}
	for (i = 0,ip=&b[0]; i < ARRAY_SIZE; i++, ip++)
		*ip = i;
	for (i = 0; i < ARRAY_SIZE; i++)
		printf("a[%d]=%d、b[%d]=%d\n",i, a[i], i, b[i]);
	putchar('\n');

}
int length1(char str[]) {
	int i = 0;
	while (str[i])
		i++;
	return i;
}
int length2(char* str) {
	int i = 0;
	while (str[i])
		i++;
	return i;
}
int length3(char* str) {
	char* begin = str;
	while (*str)
		str++;
	return str - begin;
}