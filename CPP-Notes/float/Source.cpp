#include<iostream>
#include<limits>
#include<iomanip>
#include<cmath>

int main(void)
{
	using namespace std;

	float f;
	double d;
	long double ld;

	cout << numeric_limits<float>::min() << endl; // 최소값의 절대 값을 표현함.
	cout << numeric_limits<float>::lowest() << endl; // 정말 최소값.

	float fp(3.14); // 3.14 = 31.4 * 0.1(e-1)

	cout << 3.14 << endl;
	cout << 3.14e-1 << endl;
	cout << 3.14e-2 << endl;
	cout << 3.14e1 << endl;
	cout << 3.14e2 << endl;

	// 소수점 이하 정확도 개선 #include<iomanip>
	cout << "Before : " << 1.0 / 3.0 << endl;

	cout << std::setprecision(16);
	cout << "After : "<< 1.0 / 3.0 << endl;

	// float시 오류. 이진수로 저장하기 때문에 발생되는 어쩔수 없는 문제. 오차누적
	float fpp(123456789.0f);
	cout << std::setprecision(9);
	cout << fpp << endl; // 123456792 뒷자리 숫자가 바뀜. 정밀도가 떨어지는 문제.

	double dpp(0.1);
	cout << dpp << endl; // 0.1
	cout << std::setprecision(17);
	cout << dpp << endl; // 0.100000000001

	double d1(0.1);
	double d2(0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1); // 0.1 10개

	cout << setprecision(6); // 일반적인 경우
	cout << d1 << endl;
	cout << d2 << endl;
	cout << setprecision(17); // 정밀도를 높혔을때
	cout << d1 << endl; // 0.1000000000001
	cout << d2 << endl; // 0.9999999999999

	// 0으로 나누는 문제 cmath
	double zero = 0;
	double posinf = 5.0 / zero; // +무한대
	double neginf = -5.0 / zero; // -무한대
	double nan = zero / zero; // 숫자가 아님. Not A Number
	
	cout << posinf << std::isinf(posinf) << endl;
	cout << neginf << std::isinf(neginf) << endl;
	cout << nan << std::isnan(nan) << endl; // ind = INDeterminate. 결정할수없다.
	return 0;
}