/*
    จงเรียงลำดับเลขจากข้อมูลที่ผู้ใช้กรอก โดยเรียงจากมากไปน้อย (โดยใช้คำสั่ง if else หรือ else if เท่านั้น)
    
    Test case:
        Input[1] :
            6
        Input[2] :
            9
        Input[3] :
            1
    Output:
        9 6 1

    Test case:
        Input[1] :
            65
        Input[2] :
            91
        Input[3] :
            112
    Output:
        112 91 65
*/
#include <stdio.h>
int main() {
    int Input1, Input2, Input3 ;
    printf( "Input[1] :\n" );
    scanf("%d", &Input1);
    printf( "Input[2] :\n" );
    scanf("%d", &Input2);
    printf( "Input[3] :\n" );
    scanf("%d", &Input3);
    if( Input1 >= Input2 && Input1 >= Input3 ) {
        if( Input2 >= Input3 ) {
            printf( "%d %d %d", Input1, Input2, Input3 );
        }else {
            printf( "%d %d %d", Input1, Input3, Input2 );
        }
    }else if( Input2 >= Input1 && Input2 >= Input3 ) {
        if( Input1 >= Input3 ) {
            printf( "%d %d %d", Input2, Input1, Input3 );
        }else {
            printf( "%d %d %d", Input2, Input3, Input1 );
        }
    }else {
        if( Input1 >= Input2 ) {
            printf( "%d %d %d", Input3, Input1, Input2 );
        }else {
            printf( "%d %d %d", Input3, Input2, Input1 );
        }
    }
}