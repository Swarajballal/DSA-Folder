// int main() {
//     int* p; // this will lead to wild pointer
//     *p = 10;
//     return 0;
// }


int main() {
    int* p = new int; 
    *p = 10;          
    delete p;         
    return 0;
}
