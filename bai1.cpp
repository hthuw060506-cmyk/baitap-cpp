// tinh phan du phan nguyen cua phep chia hai chu so a b
#include<iostream>
using namespace std;
int main()
{
    long long a ,b;
    cout << "nhap a :";
    cin >> a;
    cout << " nhap b :";
    cin >> b;
    long long phan_du =a%b;
    long long phan_nguyen = a/b;
    
 
    if(b!=0){
        cout << " phan du :" << phan_du << endl;
        cout << " phan nguyen :" << phan_nguyen << endl;

    }
    else if(b!=0){
        cout << " khong chia duoc cho 0";

    }
    else {
        cout << " du lieu khong hop le ";
    }
    return 0;
    
}    