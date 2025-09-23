#include<stdio.h>
#include<stdlib.h>//standard library標準ﾗｲﾌﾞﾗﾘstdio.hやstring.hの様な専門分野以外の
					//様々な便利機能が含まれている。何でも屋のイメージとのこと。

void allocate_memory(int** p_ptr) {//mainで引数受け取った時にp_ptrへの代入がされる
	*p_ptr = (int*)malloc(sizeof(int));
	printf("関数内で確保したメモリのアドレス：%p\n", *p_ptr);
}
/*main()から渡された&a_ptrを2次ﾎﾟｲﾝﾀp_ptrで受け取る。p_ptr=&a_atr。
*「malloc()」はmemory allocationの略。ad(～へ)+locare(配置する)で割り当てる意味。
* OSに(sizeof(int)分=4バイト分)メモリ確保依頼して、「確保出来たメモリの先頭ｱﾄﾞﾚｽを返す」
* malloc()の戻り値のｱﾄﾞﾚｽは汎用のvoid*型なのでキャストしてint型のﾎﾟｲﾝﾀに。
* そのｱﾄﾞﾚｽを*p_ptrに代入。*p_ptrは間接参照でﾎﾟｲﾝﾀ変数a_atr自体を指しているので、
* そこにmallocで確保したｱﾄﾞﾚｽを代入している。
* mallco()は必ずfree()とセットで使う。使わないとメモリリークの原因になる。
* 
* int型の変数：「整数」を入れる為の箱
* int* 型の変数：「整数のｱﾄﾞﾚｽ」を入れるための箱
* int** 型の変数：『「整数のｱﾄﾞﾚｽ」のｱﾄﾞﾚｽ』を入れる為の箱
* もし一次ﾎﾟｲﾝﾀを継ぎ手の様に繋げて行けるとしたら、
* ｺﾝﾊﾟｲﾗはどこが元の値の場所か分からない。C言語はﾎﾟｲﾝﾀへのﾎﾟｲﾝﾀと、ﾎﾟｲﾝﾀを厳密に区別する
*/

int main(void) {

	int x, * p1, ** p2;
	x = 100;
	p1 = &x;
	p2 = &p1;

	printf("xの値は%d、\t\t*p1の値は%d、\t\t**p2の値は%d\n", x, *p1, **p2);

	printf("&xの値は%p、p1の値は%p、*p2の値は%p\n", &x, p1, p2);

	printf("&p1の値は%p、p2の値は%p\n", &p1, p2);

	printf("&p2の値は%p\n\n", &p2);



	int* a_ptr = NULL;//ﾎﾟｲﾝﾀ変数はNULLで初期化する。

	printf("呼出前のa_ptr：%p\n", (void*)a_ptr);//printfで%pを使うときは(void*)に
												//キャストするのが本当は正しいとのこと。
	
	allocate_memory(&a_ptr);

	printf("呼出後のa_ptr：%p\n", (void*)a_ptr);

	if (a_ptr != NULL) {
		*a_ptr = 123;
		printf("確保したメモリに入れた値%d\n", *a_ptr);
		free(a_ptr);
	}

	return 0;
}
/*2次ﾎﾟｲﾝﾀはどういった場面で使うのか？
* →関数の中で、呼び出し元にあるﾎﾟｲﾝﾀ変数そのものを変更したい場面
* int型の変数を関数内で変更するには、その変数のｱﾄﾞﾚｽ（int* p1）を関数に渡した。
* 同様に、int*型のﾎﾟｲﾝﾀ変数を関数内で変更するには、
* そのﾎﾟｲﾝﾀ変数のｱﾄﾞﾚｽ（int** p2）を渡す。
*/