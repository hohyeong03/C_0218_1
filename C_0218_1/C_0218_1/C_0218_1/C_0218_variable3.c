#include <stdio.h>

int main4() {
	/*
    작성자 : 한호형
    작성날짜 : 2023.02.18
    기능: printf로 문자 출력
    */
	//이름, 년도, 월, 일, f ==> 변수
	// 문자열[]변수 : 이름  %s
	// 정수변수 : 년도, 월, 일  %d
	// 문자변수 : f  %c

	char name[] = "한호형";  //문자열 %s
	int year = 2023;         //정수변수 %d
	int month = 2;           //정수변수 %d
	int day = 18;            //정수변수 %d
	char word = 'f';         //문자(1글자) %c
	
	printf("작성자 : %s\n", name);
	printf("작성날짜 : %d-%d-%d\n", year, month, day);
	printf("기능 : print%c 로 문자열출력", word);

	return 0;
}