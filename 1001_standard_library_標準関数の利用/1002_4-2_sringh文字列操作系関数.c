#include<stdio.h>
#include<string.h>

int main(void) {
	char str1[80] = "abcde,12345,",str2[80] = "";
	printf("\t\tstr:%20s\n", str1);
	printf("\tstrlen(str):%20d\n", strlen(str1));

	printf("strchr(str1,'1'):%20s\n", strchr(str1, '1'));
	printf("strstr(str1,\"12\"):%20s\n", strstr(str1, "12"));
	printf("strcspn(str1,\"12c\"):%20d\n", strcspn(str1, "12c"));
	printf("strspn(str1,\"abc\"):%20d\n", strspn(str1, "abc"));

	strncpy(str2, str1, 5);
	str2[5] = '\0';
	printf("\t\tstr2:%20s\n", str2);

	if (strncmp(str1, str2,6) == 0)
		printf("strncmp(str1,str2,5)\t\t==0\n");
	else
		printf("strncmp(str1,str2,5)\t\t!=0\n");

	strncat(str1, "ABCDEFG", 3);
	printf("\t\tstr1:%20s\n", str1);
	return 0;

}