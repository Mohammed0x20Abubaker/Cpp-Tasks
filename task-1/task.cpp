#include <iostream>

using namespace std ;

int main()
{
    int user_input  ;
    double sum = 0 ;

    do{
        cout<<"Enter No. of orange-containing drinks in Vasya's fridge : "<<endl;
        cin>>user_input ;
    }while((user_input < 1) || (user_input > 100));

    for(int i = 0 ; i < user_input ; i++)
    {
        int temp ;
        cin>>temp ;
        sum += temp ;
    }
    
    cout<<sum/user_input<<endl ;
}