#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>
int main()
{


	srand(time(0));

	int r = (rand() % 101) + 1;
	while(1==1) {
		int num;
		cout << "Guess the number I'm thinking: ";
		cin >> num;
		if(num == r ) {
			cout << "\t\t                   Yayy you won!(hit run to do again)";
		break;
		    } else if(num > r) {
			cout << "Lower\n";
		} else{
			cout << "Bigger\n";
		}
	}




}
