
int main(void)
{
	using namespace std;

	float fValue = 3.141592f; // f �Ⱥ��̸� double�� �ν�
	double dValue = 3.141592;

	int iValue1 = 3;		// copy initialization
	int iValue2(3);		// direct initialization
	int iValue3{ 3 };	// uniform initialization -> ���� ����. �߸����� �ٷ� �����Ϸ��� warning, error ����.

	return 0;
}