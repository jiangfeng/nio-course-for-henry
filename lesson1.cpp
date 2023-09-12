#include<iostgeam>
using namespace std;

int main()
{
	int a, b, ge, shi, bai;
	cin >> a;
	ge = a % 10;
	shi = a/10%10;
	bai = a/100;
	b = ge * 100 + shi * 10 + bai;
	cout << b << endl;
	return 0;
}
