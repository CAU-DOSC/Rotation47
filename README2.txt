# README file for TEAM[4,7]:
This text file describes brief but precise and complete specification of project including:
- funtion descriptions: name, input/output parameters
- declaration of of important data and data types to be included in user header file
- your team's brief ideas of implementations
- - -
Your description start form next line and do not delete lines upto this point.

<프로그램 내용>
* 문자열 길이와 rotation 주기를 입력
* Rotation을 trivial, juggle, block swap, reverse 각각의 algorithm으로 실행
* 각각의 방법의 소요시간을 출력한다.

<역할 분담>
* 정세훈 - trivial function
* 이성민 - reverse function, main function
* 박진선 - block swap function
* 김태훈 - README, juggle function

<사용자 지정 함수에 대한 설명>
 1. trivial function
1-1) 함수 이름: trivial_rotation
1-2) 인수: (int)num, (int)d, (char *)ary, (int)length
1-3) 출력: (void)

 2. reverse function
2-1) 함수 이름: reverse
2-2) 인수: (char *)arr, (int)strlen_start, (int)strlen_end
2-3) 출력: (void)

 3. block swap function
3-1) 함수 이름: Block_Swap
3-2) 인수: (char)arr[], (int)n, (int)d
3-3) 출력: (void)

 4. swap function
4-1) 함수 이름: Swap
4-2) 인수: (char)arr[], (int)a, 
4-3) 출력: (void)

 5. juggle function
5-1) 함수 이름: juggle
5-2) 인수: (char)line, (int)n, (int)d
5-3) 출력: (void)

 6. (양수일 때) rotate reverse function
6-1) 함수 이름: Rotate_reverse_pos
6-2) 인수: (char *)arr, (int)n, (int)d
6-3) 출력: (void)

 7. (음수일 때) rotate reverse function
3-1) 함수 이름: Rotate_reverse_neg
3-2) 인수: (char *)arr, (int)n, (int)d
3-3) 출력: (void)

<결과 측정>
STRLength ROTATEdistance  T.trivial T.juggle T.Blockswap T.Rev
100  3   0.000000 0.000000 0.000000 0.000000
1000  30   0.004000 0.000000 0.000000 0.000000
10000  3    0.489000  0.000000  0.000000  0.000000
50000  5   13.40600 0.000000 0.001000 0.000000
100000  3   53.43800 0.001000 0.001000 0.000000
100000  10   53.51000 0.000000 0.001000 0.000000
100000  257   54.87700 0.000000 0.001000 0.001000
1000000  30       -  0.005000 0.010000 0.007000
100000000 2       -  0.815000 2.523000 0.996000

* trivial 방식의 마지막 측정값은 오랜 시간이 지나도 나오지 않는 것으로 보아 매우 긴 시간이 걸리는 것으로 추정

<그에 대한 추론>
1. 문자열의 길이와 주기가 길지 않고 짧으면 소요시간이 큰 차이가 나지 않는다.
2. 문자열의 길이를 같게 하고 주기의 크기를 다르게 하였을 때 trivial의 측정값은 주기의 크기가 커질수록 걸리는   시간이 길어진다.
3. 문자열의 길이와 주기를 일정 크기 이상으로 커지면 소요시간에 있어서 명확한 차이를 보인다.
4. 각 알고리즘마다의 소요시간의 차이는 알고리즘의 효율성 정도를 의미한다.

따라서, 알고리즘의 효율성 순서는 juggle > reverse > blockswap > trivial 이다.
