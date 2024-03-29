// int* foo() {
//     int x = 10;
//     int* p = &x;
//     return p;
// }

// int main() {
//     int* q = foo();
//     cout << *q << endl; // Expected output: 10, Actual output: some random value
//     return 0;
// }


// it is a local variable and it is destroyed after the function call. So, the pointer q is pointing to a memory location that is no longer valid. instead we should use new int or dynamic memory allocation to store the value of x.


int* foo() {
    int* p = new int; 
    *p = 10;
    return p;
}

int main() {
    int *q = foo();
    cout << *q << endl;
    return 0;
}