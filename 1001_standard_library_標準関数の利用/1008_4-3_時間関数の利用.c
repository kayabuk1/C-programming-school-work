/*
#include<stdio.h>
#include<time.h>
int main(void) {
	time_t now, settime;
	struct tm* t1, t2;
	time(&now);
	printf("1900/1/1 00:00:00����%10d�b�o�߂��Ă��܂�\n", now);
	printf("ctime\t:%s\n", ctime(&now));
	t1 = localtime(&now);
	printf("localtime:%4d/%02d/%02d %02d:%02d:%02d\t�ł�\n",
		t1->tm_year + 1900, t1->tm_mon + 1, t1->tm_mday,
		t1->tm_hour, t1->tm_min, t1->tm_sec);

	t2.tm_sec = 0;
	t2.tm_min = 0;
	t2.tm_hour = 0;
	t2.tm_mday = 0;
	t2.tm_mon = 1;
	t2.tm_year = 2025 - 1900;
	t2.tm_wday = 0;
	t2.tm_isdst = 0;
	settime = mktime(&t2);
	printf("2025/1/31/ 00:00:00�@�́@1900/1/1 00:00:00�@����%-10d�b\n",
		settime);
	printf("ctime\t:%s", ctime(&settime));
	return 0;
}
*/
/*
1900/1/1 00:00:00����1759884300�b�o�߂��Ă��܂�
ctime   :Wed Oct  8 09:45:00 2025

localtime:2025/10/08 09:45:00   �ł�
2025/1/31/ 00:00:00�@�́@1900/1/1 00:00:00�@����1738249200�b
ctime   :Fri Jan 31 00:00:00 2025
*/
/*4-3ex
#include<stdio.h>
#include<time.h>
int main(void) {
	int data;
	time_t start, end;
	clock_t cl_start, cl_end;
	cl_start = clock();
	time(&start);
	printf("�������l����͂��Ă�������\n");
	scanf("%d", &data);
	cl_end = clock();
	time(&end);
	printf("���Ȃ������͂����l��%d�ł�\n", data);
	printf("���͂ɂ����������Ԃ�%8.0lf�b�ł�\n", difftime(end, start));
	printf("���͂Ɋ|�������v���Z�X���Ԃ�%8.3lf�b�ł�\n",
		(cl_end - cl_start) / CLOCKS_PER_SEC);
	return 0;
}*/
/*
#include<stdio.h>
#include<stdlib.h>
int main(void) {
	system("echo test");
	printf("windir=%s\n", getenv("windir"));
	return 0;
}*//*
#include<stdio.h>
#include<stdarg.h>
int sum(int sum_data, ...);
int main(void) {
	printf("sum=%3d\n", sum(1,2,-1 ));
	printf("sum=%3d\n", sum(1, 2,3, -1));
	printf("sum=%3d\n", sum(1, 2,3,4, -1));
	return 0;
}
int sum(int sum_data, ...) {
	int ans = sum_data;
	int data;
	va_list argptr;
	va_start(argptr, sum_data);
	while ((data = va_arg(argptr, int)) != -1)
		ans += data;
	va_end(argptr);
	return ans;
}
*//*
sum=  3
sum=  6
sum= 10
*/
