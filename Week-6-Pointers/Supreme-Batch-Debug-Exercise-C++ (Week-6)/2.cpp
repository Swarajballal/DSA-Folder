// int main() {
//     int* p = NULL;  // p is a pointer that points to nowhere
//     *p = 42;       // Trying to write to nowhere, which is undefined behavior
//     return 0;
// }


// solution

int main() {
    int* p = new int;  // p is a pointer that points to a newly allocated int
    *p = 42;           // Writing to the allocated memory, which is valid
    delete p;          // Freeing the allocated memory, which is good practice
    return 0;
}
