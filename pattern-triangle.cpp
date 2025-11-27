include<iostream>
using namespace std;

// int main(){
//     int n=4;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i+1;j++){
//             cout<<i+1;
//         }

//         cout<<endl;

//     }
//     return 0;
// }



// int main(){
//     int n=4;
//     for(int i=0; i<n; i++){
//         char ch ='A';
//         for(int j=0; j<i+1;j++){
//             cout<<ch;
//             ch+=1;
//         }
//         cout<<endl;

//     }
//     return 0;
// }


// int main(){
//     int n=4;
//     for(int i=0; i<n; i++){
//         int num=1;
//         for(int j=0; j<i+1;j++){
//             cout<<num;
//             num+=1;
//         }

//         cout<<endl;

//     }
//     return 0;
// }



int main(){
    int n=4;
    for(int i=0; i<n; i++){
        
        for(int j=i+1; j>0;j--){
            cout<<j;
        }
        
        cout<<endl;

    }
    return 0;
}
