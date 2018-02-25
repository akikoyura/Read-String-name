#include<stdio.h>
#include<conio.h>
#include <stdlib.h>  
int main(int *argc, char *argv[])
{
	/*char monhoc[50] = "Tin hoc co so A";
	printf("%s", monhoc);*/

	//dung scanf_s : chi nhan cac ky tu ban phim khi gap ky tu khoang trang 
	//hay ki tu xuong dong
	char monhoc[50];
	printf("nhap mot chuoi: ");
	scanf_s("%49s", monhoc,(unsigned)_countof(monhoc));
	printf("chuoi nhan duoc la: %s", monhoc);
	_getch();
	return 0;
}