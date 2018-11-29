int main(void)
{
	//void my_void; // void는 메모리를 차지 않기 때문에 이렇게 선언이 안됨
	int i = 123;
	float f = 123.456f;

	void *my_void;

	my_void = (void *)&i;
	my_void = (void *)&f;
	
	return 0;
}