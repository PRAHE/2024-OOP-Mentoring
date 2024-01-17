#include <iostream>
#include <string>
using namespace std;

void main() {
	bool arr[10];
	bool arr1[10];
	char s[10];
	char m[10];
	int s_cou=0;
	int m_cou=0;
	int count = 1;
	int i = 0;
	int j = 0;

	for (int i = 0; i < 10; i++) {
		arr[i] = false;
		arr1[i] = false;
	}

	cin >> s;
	cin >> m;

	while (s[i] != NULL) {
		s_cou++;
		i++;
	}

	while (m[j] != NULL) {
		m_cou++;
		j++;
	}

	for (int i = 0; i < s_cou; i++) {
		for (int j = 0; j < m_cou; j++) {
			if (s[i] == m[j]&&arr1[i]==false) {
				count++;
				arr[i] = true;
			}
		}
		cout << s[i];
		if(count!=1) cout << count;
		count = 1;

	}
	for (int i = 0; i < m_cou; i++) {
		for (int j = 0; j < s_cou; j++) {
			if (m[i] == s[j]&&arr[i]==false) {
				count++;
				arr1[i] = true;
			}
		}
		cout << m[i];
		if (count != 1) cout << count;
		count = 1;

	}
}