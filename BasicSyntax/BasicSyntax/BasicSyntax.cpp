

#include <iostream>
using namespace std;

int main(
{
    std::cout << "Hello C Plus Plus\n";
    std::cout << "Hello C Plus Plus" << std::endl;
    std::cout << "hi\n";
    std::cout << 12345 << std::endl;

    /*
        정수형 타입 : int(integer)
        실수형 타입 : float
        문자형 타입 : char
        bool형 타입 : bool
    */

    int Number1 = 10;
    int Number2 = 20;
    int Number3 = 0;
    Number1 = 10;


    int Number2 = 20;//변수 초기화
    float PointNumber = 1.234f;
    char Word = 'A';
    bool Condition = true;

    cout << Number1 + 10 << endl;
    Number3 = Number1 + 10;

    Number1 = Number1 + 10; //Number1 = 20
    Number1 = Number1 + 10; //Number1= 30
    Number1 += 10; //Number1 = 40
    Number1 -= 10; //Number1 =30

    Number2 += 1;// 카운트 연산
    Number2 -= 1;

    Number2++; //1씩 증가시키는
    Number2--; //1씩 감소

    //논리 연산 : BOOL 타입 데이터 연산
    /*
        &&  :And
        ||  :Or
        !   :Not

        And 연산 : true && true - 연산데이터가 모두 tru이면 결과 true 그외 나머지는 모두 false
        Or 연산 : true || true - 연산데이터가 모두 false이면 결과 false 그외 나머지 true
        Not 연산 : !true => false / !false => true
        c++ true = 1


    */

    /*
    *   ()속 연산식의 결가괎이 true면 코드실행
    * false면 코드실행안함
        if(비교연산/논리연산/산술연산)
        {
            실행코드
        }
    */


    int Number4 = 10;
    if (Number4 > 5) {
        cout << "참일때 실행1" << endl;
    }
    if (true) {
        cout << "참일때 실행2" << endl;
    }
    //false => 0 / true => 1(0을제외한 정수)

    if (0) {
        cout << "참일때 실행3" << endl;
    }
    if (1) {
        cout << "참일때 실행4" << endl;
    }
}