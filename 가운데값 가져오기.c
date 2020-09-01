#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* s) {
    int check = 2; //문자열 수가 홀수인지 짝수인지 확인
    check = strlen(s) % 2;
    int tmp = 0;   //홀수라면 가운데 1자리 짝수라면 가운데 2자리를 입력하기 위한 변수
    tmp = strlen(s) / 2;
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.

    char* answer = (char*)malloc(sizeof(s));
    if (check == 1)
    {
        answer[0] = s[tmp];
        
    }
    else
    {
        answer[0] = s[tmp-1];
        answer[1] = s[tmp];
    }
    return answer;
    free(answer);
}
