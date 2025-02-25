#include <iostream>

using namespace std;

void arrayA(int a[], int n) {
    for (int i = 0; i < n * 2; i++)
    {
        a[i] = rand() % (30) - 15;
        cout << a[i] << " ";
    }
    cout << endl;
}

void arrayB(int b[], int n) {
    for (int i = 0; i < n * 2; i++)
    {
        b[i] = rand() % (30) - 15;
        cout << b[i] << " ";
    }
    cout << endl;
}

void arrayC(int c[], int a[], int b[], int n) {
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j < n * 2; j++)
        {
            c[i] = a[i] + b[i];
            c[j] = a[j] - b[j];
        }
    }

    for (int i = 0; i < n * 2; i++)
    {
        cout << c[i] << " ";
    }
}

void maxArray(int a[], int n, int t, int max) {
    cout << "Enter array elements ( > -100): " << endl;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
    {
        if (a[i] != t)
        {
            if (a[i] < 0 && a[i] > max)
                max = a[i];
        }
        else break;
    }
}

int main() {
    srand(time(nullptr));

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