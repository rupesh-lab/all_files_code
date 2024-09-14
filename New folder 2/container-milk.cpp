// #include <iostream>
// using namespace std;
// void data(int a, int b, int x, int y, int i){
//     if(i==1){
//         x=0;
//         cout<<"A: "<<x<<" B: "<<y<<endl;
//     }
//     elif(i==2){
//         y=0;
//         cout<<"A: "<<x<<" B: "<<y<<endl;
//     }
//     elif(i==3){
//         x=a;
//         cout<<"A: "<<x<<" B: "<<y<<endl;
//     }
//     if(i==4){
//         y=b;
//         cout<<"A: "<<x<<" B: "<<y<<endl;
//     }
//     else{
//         return;
//     }
//     cin>>i;
//     data(a,b,x,y,i);
// }
// int main(){
//     int a=7;
//     int b=3;
//     int x=0,y=0;
//     cout<<"Empty the contaner A (press 1)"<<endl;
//     cout<<"Empty the contaner B (press 2)"<<endl;
//     cout<<"Fill the container A (press 3)"<<endl;
//     cout<<"Fill the container B (press 4)"<<endl;
//     int i;
//     cin>>i;
//     data(a,b,x,y,i);
// }

#include <iostream>
using namespace std;

void data(int a, int b, int x, int y, int i){
    if(i == 5){
        x = 0;
    }
    else if(i == 6){
        y = 0;
    }
    else if(i == 1){
        x = a;
    }
    else if(i == 2){
        y = b;
    }
    else if(i==3){
        if((x+y)>b){
            x=x-b+y;
            y=b;
        }
        else{
            y=x+y;
            x=0;
        }
    }
    else if(i==4){
        if((x+y)>a){
            y=y-a+x;
            x=a;
        }
        else{
            x=x+y;
            y=0;
            
        }
    }
    else {
        return;
    }
    
    // Continue taking inputs
    cout  << x << " , " << y << endl;
    if(x==a && y==b){
        cout<<"Done."<<endl;
        return;
    }
    else if(x==a && y!=0){
        i=3;
    }
    else if(x==0){
        i=1;
    }
    else if(y==0){
        i=3;
    }
    else{
        i=6;
    }
    data(a, b, x, y, i);
}

int main(){
    int a,b;
    cout<<"Size of container A: "<<endl;
    cin>>a;
    cout<<"Size of container B"<<endl;
    cin>>b;
    int x = 0, y = 0;
    
    cout << "Fill the container A (press 1)" << endl;
    cout << "Fill the container B (press 2)" << endl;
    cout<<"Pour into B from A (press 3)"<<endl;
    cout<<"Pour into A from B (press 4)"<<endl;
    cout << "Empty the container A (press 5)" << endl;
    cout << "Empty the container B (press 6)" << endl;
    int i=1;
    data(a, b, x, y, i);
    
    return 0;
}
