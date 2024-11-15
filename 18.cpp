using namespace std;

int main() {
    int x = 10;
    int *ptr = &x;  // ptr points to the address of x

    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << &x << endl;
    cout << "Value pointed to by ptr: " << *ptr << endl;

    *ptr = 20;

    cout << "New value of x: " << x << endl;

    return 0;
}
