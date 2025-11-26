#include<iostream>
using namespace std;

// int main()
// {
//     if(cout<<"hello")
//     return 0;
// }

// int main(void){
//     int i, j=2;
//     for(i=0;i<=5,j>=0;i++){
//         cout<<i+j;
//         j--;
 
//     }
// }


// int main(){
//     int j;
//     for(j=0; ; j++){
//         cout<<j;
//         if(j>=2){
//             break;
//         }
//     }
//     return 0;
// }

// int main(){
//     int a=0,b;
//     a=(5>2)? b=6:b=8;
//     cout<<a,b;
//     return 0;
// }

// int main(void){
//     int i;
//     for(i=0;i<=10;i++)
//         cout<<i;
//         return 0;
// }

// int main(void){
//     int i;
//     for(i=0;i<=10;i++);
//         cout<<i;
//         return 0;
// }

// int main(void){
//     int i;
//     for(i=0;i<=10;i++){
//         cout<<i;
//         return 0;
//     }
// }

// int main(){
//     int x=2,y=2;
//     while(x<=5 && y<=3){
//         cout<<++x,++y;
//         return 0;

//     }
// }


// int main(){
//     while(!(cout<<"hello"));
//     return 0;
// }

// int main(){
//     int i;
//     for(i=0;i<=4;i++){
//         cout<<i;
//         cout<<endl;
//         break;
//         cout<<"lable1";

//     }
//     cout<<"lable2";
//     return 0;
// }


bool isPrime(int n){
    if(n<=1)
    return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)
        return false;
    }
    return true;
}
int gcd(int a,int b){
    while(b!=0){
        int temp=a;
        b=a%b;
        a=temp;
    }
    return 0;
}
int main(){
    int m,n;
    char op;

 cout<<"enter integer n(1-100):";
 cin>>n;
 cout<<"enter operation a , b ,c";
 cin>>op;
 cout<<"enter integer m";
 cin>>m;
 switch(op){
    case 'a':
    if(isPrime(n)) {
        cout<<"n is prime result="<<n*m<<endl;
    }else{
        cout<<"n is not prime result="<<n+m<<endl;
    }
    break;
    case'b':
    if(n%2==0){
        if(m != 0)
        cout<<"result="<< n/m << endl;
    } else{
        cout<<"result="<<m-n<<endl;
    }
    break;
    case'c':
    cout<<"gcd="<<gcd(n,m)<<endl;
    break;
    default:
    cout<<"invalid operation";
    return 0;

 }
}
