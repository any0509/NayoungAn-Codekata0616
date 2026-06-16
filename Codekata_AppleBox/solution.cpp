#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int compare_descend(const void* a, const void* b)
{
    return *(int*)b - *(int*)a;
}

// score_len은 배열 score의 길이입니다.
int solution(int k, int m, int score[], size_t score_len) {
    int answer = 0;

    // 사과 박스 점수 내림차순 정렬
    qsort(score, score_len, sizeof(int), compare_descend);

    for (int i = m - 1; i < (int)score_len; i += m)
    {
        answer += score[i] * m;
    }


    return answer;
}