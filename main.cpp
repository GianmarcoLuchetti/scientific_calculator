#include<iostream>
#include<math.h>
using namespace std;

void addition();
void multiplication();
void subtraction();
void division();
void exponent();
void square_root();
void sin();
void cos();
void tan();
void anti_sin();
void anti_cos();
void anti_tan();
void log();
void log_10();

int main(){

    // MAIN INTERFACE
    cout<<"**************************************CALCULATOR*************************************\n";
    cout<<"_____________________________________________________________________________________\n";
    cout<<"Operation\t"<<"\t Trigonometric function \t"<<"\t Logaritmic function\n";
    cout<<"_____________________________________________________________________________________\n";
    cout<<"1: Division\t\t" <<"7: Sin\t\t" <<"\t\t\t 13: Log" <<endl;
    cout<<"2: Multiplication\t"  <<"8: Cos\t\t" <<"\t\t\t 14: Log base 10" <<endl;
    cout<<"3: Subtraction\t\t" <<"9: Tan" <<endl;
    cout<<"4: Addiction\t\t" <<"10: Inverse of Sin" <<endl;
    cout<<"5: Exponent\t\t" <<"11: Invese of Cos" <<endl;
    cout<<"6: Sqaure root\t\t" <<"12: Inverse of Tan" <<endl;
    cout<<"0: Quit"<<endl;

    float x,y;
    float PI=3.14159265;
    int choice;

    while (1)
    {
        cout << "\nEnter you choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            division();
            break;
        case 2:
            multiplication();
            break;
        case 3:
            subtraction();
            break;
        case 4:
            addition();
            break;
        case 5:
            exponent();
            break;
        case 6:
            square_root();
            break;
        case 7:
            sin();
            break;
        case 8:
            cos();
            break;
        case 9:
            tan();
            break;
        case 10:
            anti_sin();
            break;
        case 11:
            anti_cos();
            break;
        case 12:
            anti_tan();
            break;
        case 13:
            log();
            break;
        case 14:
            log_10();
            break;
        case 0:
            exit(0);
            break;
                
        default:
            cout << "\n*******Wrong choice, Enter valid choice*******\n\n";
            break;
        }
    }
    

    return 0;
}

void division(){
    // 4 - 3 = 1
    cout<<"Enter the numbers you want to divide: ";
    float a,b;
    cin>>a>>b;
    cout<<"The division of "<<a<<" and "<<b<<" is "<<a/b<<endl;
}

void multiplication(){
    // 3 * 3 = 9
    cout<<"Enter the numbers you want to multipliation: ";
    float a,b;
    cin>>a>>b;
    cout<<"The multiplication of "<<a<<" and "<<b<<" is "<<a*b<<endl;
}

void subtraction(){
    // 4 / 2 = 2
    cout<<"Enter the numbers you want to subtract: ";
    float a,b;
    cin>>a>>b;
    cout<<"The subtraction of "<<a<<" and "<<b<<" is "<<a-b<<endl;
}

void addition(){
    // 2 + 5 = 7
    cout<<"Enter the numbers you want to add: ";
    float a,b;
    cin>>a>>b;
    cout<<"The addition of "<<a<<" and "<<b<<" is "<<a+b<<endl;
}

void exponent(){
    // 2^2 = 4
    cout<<"Enter the base and exponent: ";
    double b,e;
    cin>>b>>e;
    double power = pow(b,e);
    cout<<"The solution for base "<<b<<" and exponent "<<e<<" is "<<power<<endl;
}

void square_root(){
    // sqrt(4) = 2
    cout<<"Enter the number you want the sqaure of: ";
    float a;
    cin>>a;
    cout<<"The square root of "<<a<<" is "<<sqrt(a)<<endl;
}

void sin(){
    // sin(180) = -0.8
    cout<<"Enter the angle in radians: ";
    float a;
    cin>>a;
    cout<<"The sin of "<<a<<" is "<<sin(a)<<endl;
}

void cos(){
    // cos(180) = -0.6
    cout<<"Enter the angle in radians: ";
    float a;
    cin>>a;
    cout<<"The cos of "<<a<<" is "<<cos(a)<<endl;
}

void tan(){
    // tan(180) = 15
    float PI = 3.14159265;
    cout<<"Enter the angle in radians: ";
    float a;
    cin>>a;
    cout<<"The tan of "<<a<<" is "<<tan(a)<<endl;
}

void anti_sin(){
    // asin(180) = -0.8
    float PI=3.14159265;
    cout<<"Enter the angle in radians: ";
    float a;
    cin>>a;
    cout<<"The anti sin of "<<a<<" is "<<asin(a)* 180.0 / PI<<endl;
}

void anti_cos(){
    float PI=3.14159265;
    cout<<"Enter the angle in radians: ";
    float a;
    cin>>a;
    cout<<"The anti cos of "<<a<<" is "<<acos(a)* 180.0 / PI<<endl;
}

void anti_tan(){
    float PI=3.14159265;
    cout<<"Enter the angle in radians: ";
    int a;
    cin>>a;
    cout<<"The anti tan of "<<a<<" is "<<atan(a)* 180.0 / PI<<endl;
}

void log(){
    // log(10) = 2.3
    cout<<"Enter the number: ";
    float a;
    cin>> a;
    cout<<"The log of "<<a<<" is "<<log(a)<<endl;
}

void log_10(){
    // log_10(10) = 1
    cout<<"Enter the number: ";
    float a;
    cin>> a;
    cout<<"The log base 10 of "<<a<<" is "<<log10(a)<<endl;
}
