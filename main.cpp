#include <iostream>
#include <bitset>

using namespace std;

int main(){
	int a, b;
	
	cout << "podaj pierwsza liczbe: " << endl;
	cin >> a;
	cout << "podaj druga liczbe: " << endl;
	cin >> b;
	
	cout << "--------------------------------" << endl;
	cout << "   OR: " << bitset<8>(a|b).to_string() << endl;
	cout << "  XOR: " << bitset<8>(a&b).to_string() << endl;
	cout << "  AND: " << bitset<8>(a^b).to_string() << endl;
	
	return 0;
}
