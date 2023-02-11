#include <stdio.h>

int GetMyString(char buffer[], int limit)
{
    int i;
    for( i = 0; i < limit; i++ ) { /*limit이i++되고  9가 되면 for문 탈출*/
        buffer[i] = getchar();
        if( buffer[i] == '\n' ) {
            buffer[i] = 0;
            return 1;
        }
    }
    buffer[i] = 0;
    rewind(stdin); /*표준 입력 버퍼에 남아있는 문자들을 제거 */
    return 0;
}

void main()
{
    char temp[10]; /*배열길이는 10이지만 실제 입력 가능 문자열  길이는 10-1=9 */
    int state = GetMyString(temp, 9);
    if( state == 1 ) printf("input : %s\n", temp);      /*정상입력*/
    else printf("input : %s -> out of range\n", temp);  /*범위초과*/
}
