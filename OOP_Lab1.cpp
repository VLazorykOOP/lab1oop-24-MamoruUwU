#include <iostream>
#include <vector>

using namespace std;

void add_elements_random(vector<int>& array, int n) {
    for (int i = 0; i < n; i++) {
        array.push_back(rand() % (30) - 15);
    }
}

void add_elements(vector<int>& array, int n) {
    cout << "Enter element: ";
    for (int i = 0; i < n; i++) {
        int x;
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
    for (int i = 0; i < (array_a.size() / 2); i++) array_c.push_back(array_a[i] + array_b[i]);
    for (int j = array_b.size() / 2; j < array_b.size(); j++) array_c.push_back(array_a[j] - array_b[j]);

}

void task_2(vector<int>& array, int t) {
    int pos = -1;
    int max = INT_MIN;
    int last_t_index = -1;

    for (int i = array.size() - 1; i >= 0; i--) {
        if (array[i] == t) {
            last_t_index = i;
            break;
        }
    }

    for (int i = last_t_index; i < array.size(); i++) {
        if (array[i] < 0 && array[i] > max) {
            max = array[i];
            pos = i;
        }
    }

    if (pos != -1)
        cout << "Max index: " << pos << endl;
    else
        cout << "Max not found :(" << endl;
}
void task_3(vector<int>& array) {
    int size = array.size();
    for (int i = 0; i < size; i++) {
        if (array[i] >= 0) {
            array.push_back(array[i]);
            array.erase(array.begin() + i);
            i--;
            size--;
        }
    }
}


void print_task_3(vector<int>& array) {
    for (int i = 0; i < array.size(); i++) {
        cout << array[i] << " ";
        if (i % 10 == 9) cout << endl;
    }
    cout << endl;
}

int main() {
    int n;
    vector<int> array_a;
    vector<int> array_b;
    vector<int> array_c;
    int t;
    srand(time(nullptr));

    int choice;
    do {
        cout << "Task 1 - arrays" << endl;
        cout << "Task 2 - max in array" << endl;
        cout << "Task 3 - additional task" << endl;
        cout << "Close program (4)" << endl;
        cout << "Enter task number: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            array_a.clear();
            array_b.clear();
            array_c.clear();

            cout << "Enter n: ";
            cin >> n;
            add_elements_random(array_a, n * 2);
            add_elements_random(array_b, n * 2);

            cout << "Array A: " << endl;
            print_array(array_a);

            cout << "Array B: " << endl;
            print_array(array_b);
            task_1(array_a, array_b, array_c);

            cout << "Array C: " << endl;
            print_array(array_c);
            break;
        }
        case 2: {
            array_a.clear();

            cout << "Enter n: ";
            cin >> n;
            cout << "Enter t: ";
            cin >> t;
            add_elements(array_a, n);
            print_array(array_a);
            task_2(array_a, t);
            break;
        }
        case 3: {
            array_a.clear();
            do {
                cout << "Enter n (<= 400): ";
                cin >> n;
            } while (n > 400);
            add_elements_random(array_a, n);
            task_3(array_a);
            print_task_3(array_a);
            break;
        }
        }
    } while (choice != 4);
}