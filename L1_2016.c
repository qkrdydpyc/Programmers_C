#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int a, int b) {
    int month[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
    char* day[] = { "FRI","SAT","SUN","MON","TUE","WED","THU" };
    //1금2토3일4월5화6수7목8금
    int c = 0;
    char* answer = (char*)malloc(sizeof(day));
    for (int i = 0; i < a-1; i++)
    {
        c += month[i];
    }
    c = c + b-1;
    int tmp;
    tmp = c % 7;
    answer = day[tmp];
    printf("\n%s\n", answer);
    return answer;
    free(answer);
}

void main() {
    solution(5, 24);
}
