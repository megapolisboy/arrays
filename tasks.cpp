#include<iostream>
#include <cmath>
using namespace std;

void arr1(int n){
    int a[10];
    for (int i = 1; i < 2*n; i+=2){
        a[i/2] = i;
    }
    for (int i = 0; i < n; i++){
        cout << a[i] << ' ';
    }
    cout << endl;
}

void arr2(int n){
    int a[10];
    for (int i = 1; i <= n; i++){
        a[i] = pow(2, i);
    }
    for (int i = 0; i < n; i++){
        cout << a[i] << ' ';
    }
    cout << endl;
}

void arr7 (int a[], int n){
    for (int i = n-1; i >= 0; i--){
        cout << a[i] << ' ';
    }
    cout << endl;
}

void arr18 (int a[]){
    for (int i = 0; i < 10; i++){
        if (a[i] < a[9]){
            cout << a[i] << endl;
            return;
        }
    }
    cout << 0;
    cout << endl;
}

void arr19 (int a[]){
    int answer = 0;
    for (int i = 0; i < 10; i++){
        if (a[i] > a[0] && a[i] < a[9]){
            answer = a[i];
        }
    }
    cout << answer;
    cout << endl;
}

void arr20 (int a[], int n, int l, int k){
    int sum = 0;
    for (int i = l; i <= k; i++){
        sum += a[i];
    }
    cout << sum << endl;
}

void arr51(int a[], int b[], int n){
    for (int i = 0; i < n; i++){
        int reserve = a[i];
        a[i] = b[i];
        b[i] = reserve;
    }
    for (int i = 0; i < n; i++){
        cout << a[i] << ' ';
    }
    cout << endl;
    for (int i = 0; i < n; i++){
        cout << b[i] << ' ';
    }
    cout << endl;
}

void arr52(int a[], int n){
    int b[10];
    for (int i = 0; i < n; i++){
        if (a[i] < 5){
            b[i] = 2*a[i];
        } else {
            b[i] = a[i]/2;
        }
    }
    for (int i = 0; i < n; i++){
        cout << b[i] << ' ';
    }
    cout << endl;
}

void arr53(int a[], int b[], int n){
    int c[10];
    for (int i = 0; i < n; i++){
        if (a[i] > b[i]){
            c[i] = a[i];
        } else {
            c[i] = b[i];
        }
    }
    for (int i = 0; i < n; i++){
        cout << c[i] << ' ';
    }
    cout << endl;
}

void arr65 (int a[], int n, int k){
    for (int i = 0; i < n; i++){
        a[i] += a[k];
    }
    for (int i = 0; i < n; i++){
        cout << a[i] << ' ';
    }
    cout << endl;
}

void arr65 (int a[], int n, int k){
    for (int i = 0; i < n; i++){
        a[i] += a[k];
    }
    for (int i = 0; i < n; i++){
        cout << a[i] << ' ';
    }
    cout << endl;
}

void arr71(int a[], int n){
    for (int i = 0; i < n/2; i++){
        int reserve = a[i];
        a[i] = a[n-1-i];
        a[n-1-i] = reserve;
    }
    for (int i = 0; i < n; i++){
        cout << a[i] << ' ';
    }
    cout << endl;
}

void arr69(int a[], int n){
    for (int i = 0; i < n-1; i++){
        int reserve = a[i];
        a[i] = a[i+1];
        a[i+1] = reserve;
    }
    for (int i = 0; i < n; i++){
        cout << a[i] << ' ';
    }
    cout << endl;
}

int main(){
    arr1(8);
    arr2(8);
    int n = 7;
    int a[7] = {1,2,3,4,5,6,7};
    arr7(a, 7);
    int b[10] = {5, 4, 9, 6, 3, 5, 0, 8, 5, 4};
    arr18(b);
    arr19(b);
    arr20(b, 10, 3, 5);
}