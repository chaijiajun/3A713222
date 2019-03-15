#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int year,mouth,day;
 printf("請輸入出生年分(西元)");
 scanf("%d",&year);
 printf("請輸入出生月份");
 scanf("%d",&mouth);
 printf("請輸入出生日期");
 scanf("%d",&day);
 printf("您的出生日期是西元%d年%d月%d日\n",year,mouth,day);
 system("pause");
 return 0 ;
}
  
