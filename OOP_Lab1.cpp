#include <iostream>
#include <vector>

using namespace std;

void add_elements_random (vector<int> &array, int n) {
	for (int i = 0; i < n; i++) {
		array.push_back(rand() % (30) - 15);
	}
}

void add_elements (vector<int> &array, int n) {
	for (int i = 0; i < n; i++) {
		int x;
		cout << "Enter element: ";
		cin >> x;
		array.push_back(x);
	}
}

void print_array(vector<int> array) {
	for (int i = 0; i < array.size(); i++) {
		cout << array[i] << " ";
	}
	cout << endl;
}

void task_1(vector<int>& array_a, vector<int>& array_b, vector<int>& array_c) {

}

int main() {
    int n;
    vector<int> array_a;
    vector<int> array_b;
    vector<int> array_c;
    int t;
    srand(time(nullptr));

    saldfkjsal

    int choice;
    do {
        cout << "Task 1 - arrays" << endl;
        cout << "Task 2 - max in array" << endl;
        cout << "Task 3 - additional task" << endl;
        cout << "Close program (4)" << endl;
        cout << "Enter task number: ";
        cin >> choice;

        
    } while (choice != 4);
}