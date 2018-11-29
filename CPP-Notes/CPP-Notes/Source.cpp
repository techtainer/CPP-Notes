
int main(void)
{
	using namespace std;

	float fValue = 3.141592f; // f 안붙이면 double로 인식
	double dValue = 3.141592;

	int iValue1 = 3;		// copy initialization
	int iValue2(3);		// direct initialization
	int iValue3{ 3 };	// uniform initialization -> 가장 안정. 잘못쓰면 바로 컴파일러가 warning, error 보냄.

	return 0;
}