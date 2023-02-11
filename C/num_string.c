#include <stdio.h>

void main()
{
    int pos_num = 100, num = 0, i, temp_num;
    /* pos_num은 각 자리수에 곱할 숫자, num은 정수로 변환될 숫자, i는 인덱스용으로 */
    char num_string[4] = "123";

    for(i = 0 ; i < 3 ; i++) {
        temp_num = num_string[i] - '0';

        num = num + temp_num * pos_num;

        pos_num = pos_num / 10;

    }
    printf(" %s -> %d\n", num_string, num);
}

        

