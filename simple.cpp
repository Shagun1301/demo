#include<iostream>
using namespace std;

// count of digit 

int main(){
    int count=0,num;
    cin>>num;
    while(num>0){
        num=num/10;
        count++;
    }
    cout<<count;
    return 0;
}




// sum of digit

int main(){
    int sum=0,num;
    cin>>num;
    while(num>0){
       int digit=num%10;
        num=num/10;
        sum+=digit;
    }
    cout<<sum;
    return 0;
}


// magic number 

int main(){
    int num,sum=0;
    cin>>num;
    while(num>=10){
        sum=0;
        while(num!=0){
            sum+=num%10;
            num/=10;
        }
        num=sum;
    }
    cout<<(num==1);
    return 0;
}
