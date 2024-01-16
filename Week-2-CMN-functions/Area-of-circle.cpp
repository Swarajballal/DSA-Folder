#include<iostream>
using namespace std;

//void area(int r)
//{
//    float area = 0;
//    area = 3.14*r*r;
//    cout<<"Area of Circle for radius "<<r<<" is: "<<area;
//}
//
//int main()
//{
//    int r;
//    cout<<"Enter the radius of circle: ";
//    cin >> r;
//    area(r);
//    return 0;
//}


float AreaOfCircle(float radius, float diameter){
    if(radius > 0) {
        return 3.14*radius*radius;
    }else{
        return 0.25*3.14*diameter*diameter;
    }
}

int main() {
    // Write C++ code here
    int option;
    float d = 0,r = 0;
    float ans;

    cout << "Select the below option:"<<endl;
    cout << "1 for entering radius "<<endl;
    cout << "2 for entering diamter" <<endl;
    cout <<"Enter the option: "<<endl;
    cin >> option;

    switch(option) {
        case 1: {
            cout << "Enter the Radius :"<<endl;
            cin >> r;
            break;
        }
        case 2: {
            cout << "Enter the Diamter :"<<endl;
            cin >> d;
            break;
        }
        default:
            cout <<"Please select from the given option only: "<<endl;
    }

    if(d != 0 || r != 0){
        ans = AreaOfCircle(r, d);
        cout << "Area of Circle is: "<<ans<<endl;
    }else{
        cout << "NO input found"<<endl;
    }

    return 0;
}