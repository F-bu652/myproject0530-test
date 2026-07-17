#include<stdio.h>
int main()
{
	char as[] = "1H9e7 l1l2o W2o5r8l9d!";
	char* f = as;
	char* s = as;

	printf("%s\n", as);

	while (*f != '\0') {
		if (*f != ' ' && !(*f >= '0' && *f <= '9')) {
						*s = *f;
						s++;
		}
		f++;
	}
	*s = '\0';

	printf("%s\n", as);

	return 0;
}
//知识点1：在*f=as中，其实现原因是因为as是一个字符数组，f是一个指针，指向as的首地址。
// 通过*f可以访问as数组中的每个字符。*f即为as[0],f++后，即有f指向as[1],*f即为as[1]，
// 以此类推。
//知识点2：在表示if判断时，如果要特定删除字符串中的数字可以使用判断条件
// !（*f>=0&&*f<=5）,使得指定 的数字在某个数组中被删除。