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

	cout << numeric_limits<float>::min() << endl; // �ּҰ��� ���� ���� ǥ����.
	cout << numeric_limits<float>::lowest() << endl; // ���� �ּҰ�.

	float fp(3.14); // 3.14 = 31.4 * 0.1(e-1)

	cout << 3.14 << endl;
	cout << 3.14e-1 << endl;
	cout << 3.14e-2 << endl;
	cout << 3.14e1 << endl;
	cout << 3.14e2 << endl;

	// �Ҽ��� ���� ��Ȯ�� ���� #include<iomanip>
	cout << "Before : " << 1.0 / 3.0 << endl;

	cout << std::setprecision(16);
	cout << "After : "<< 1.0 / 3.0 << endl;

	// float�� ����. �������� �����ϱ� ������ �߻��Ǵ� ��¿�� ���� ����. ��������
	float fpp(123456789.0f);
	cout << std::setprecision(9);
	cout << fpp << endl; // 123456792 ���ڸ� ���ڰ� �ٲ�. ���е��� �������� ����.

	double dpp(0.1);
	cout << dpp << endl; // 0.1
	cout << std::setprecision(17);
	cout << dpp << endl; // 0.100000000001

	double d1(0.1);
	double d2(0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1); // 0.1 10��

	cout << setprecision(6); // �Ϲ����� ���
	cout << d1 << endl;
	cout << d2 << endl;
	cout << setprecision(17); // ���е��� ��������
	cout << d1 << endl; // 0.1000000000001
	cout << d2 << endl; // 0.9999999999999

	// 0���� ������ ���� cmath
	double zero = 0;
	double posinf = 5.0 / zero; // +���Ѵ�
	double neginf = -5.0 / zero; // -���Ѵ�
	double nan = zero / zero; // ���ڰ� �ƴ�. Not A Number
	
	cout << posinf << std::isinf(posinf) << endl;
	cout << neginf << std::isinf(neginf) << endl;
	cout << nan << std::isnan(nan) << endl; // ind = INDeterminate. �����Ҽ�����.
	return 0;
}