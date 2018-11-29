#include <iostream>

int main(void)
{
	using namespace std;

	short s = 1;

	cout << std::pow(2, sizeof(short) * 8 - 1) << endl; // pow = ������. 2^
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
	unsigned short i = -1; // unsigned �� ���̳ʽ� ���� �ָ� ������ -1�� �ν�(1111 1111 1111 1110)
	// �̰� �ٽ� �������� ��ȯ 65535... warning, error�� �ȳ���.

	cout << i << endl;

	/////////////////////////////////////////
	int k = 22 / 4; // 5.555 �ε� �������̹Ƿ� 5�� ���. float�� 5�� ���
	// �Ҽ��� ���� ����ϱ� ���ؼ��� �Է°��� �ϳ��� float ������.

	cout << k << endl;
	cout << 22.5/4 << endl;

	return 0;
}