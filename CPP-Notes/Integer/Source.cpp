#include <iostream>

int main(void)
{
	using namespace std;

	short s = 1;

	cout << std::pow(2, sizeof(short) * 8 - 1) << endl; // pow = 제곱근. 2^
	cout << std::numeric_limits<short>::max() << endl;
	cout << std::numeric_limits<short>::min() << endl;
	cout << std::numeric_limits<short>::lowest() << endl;

	s = std::numeric_limits<short>::max(); // 0111 1111 1111 1111
	s++; // 1000 0000 0000 0000
	cout << " Max overflow : "<< s << endl;

	s = std::numeric_limits<short>::min(); // 1000 0000 0000 0000
	s--; // 0111 1111 1111 1111
	cout << " Min overflow : " << s << endl;

	/////////////////////////////////////////////////
	unsigned short i = -1; // unsigned 에 마이너스 값을 주면 이진수 -1로 인식(1111 1111 1111 1110)
	// 이걸 다시 십진수로 변환 65535... warning, error도 안내줌.

	cout << i << endl;

	/////////////////////////////////////////
	int k = 22 / 4; // 5.555 인데 정수형이므로 5만 출력. float라도 5만 출력
	// 소수점 까지 출력하기 위해서는 입력값이 하나라도 float 여야함.

	cout << k << endl;
	cout << 22.5/4 << endl;

	return 0;
}