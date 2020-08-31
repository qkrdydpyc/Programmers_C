#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int a, int b) {
    long long int answer = 0;
    int tmpab = a - b;
    int tmpba = b - a;
    if (a == b)
    {
        answer = a;
    }
    else if (a > b)
    {
        for(int i = 0; i < tmpab+1; i++)
        answer += b++;
    }
        else if (b > a)
    {
            for(int i = 0; i < tmpba+1; i++)
            answer += a++;
    } 
    return answer;
}
