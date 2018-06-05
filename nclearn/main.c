#include <stdio.h>
int get_sum(int *arr, int size);

int main(int argc, char *argv[])
{
	printf("Hello C-Free!\n");
	int a[] = {
		1,2,3,4
	};
	printf("%d \n",get_sum(a,4));
	return 0;
}

int get_sum(int *arr, int size){
	int sum = 0;
	int *ptr = arr;
	while(ptr <= (arr + size - 1) ){
		sum += *ptr;
		ptr++;
	}
	return sum;
}

