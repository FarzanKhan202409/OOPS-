#include <iostream>
#include <math.h>
using namespace std;

class math{
	public:
		int power(int m,int n){
			int i, ans=1;
			for (i=1;i<=n;i++){
				ans = ans*m;
			}
			return ans;
		}
};

int main()
{
	int result=0;
     math p;
    result=p.power(16,2);
	cout<<result;
    return 0;
}
