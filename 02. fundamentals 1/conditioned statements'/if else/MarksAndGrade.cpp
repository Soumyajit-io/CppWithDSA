#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a Marks : ";
    int n ;
    cin>>n;
    // if(n>=91){
    //     cout<<"Excellent";
    // }
    // else{
    //     if(n>=81){
    //         cout<<"very good";

    //     }
    //     else{
    //         if(n>=71){
    //             cout<<"good";
    
    //         }
    //         else{
    //             if(n>=61){
    //                 cout<<"Can do better";
        
    //             }
    //             else{
    //                 if(n>=51){
    //                     cout<<"Average";

            
    //                 }
    //                 else{
    //                     if(n>=41){
    //                         cout<<"Below average";
                
    //                     }
    //                     else{
                            
    //                         cout<<"Fail";
                    
                            
                            
    //                     }
                        
    //                 }
                    
    //             }
                
    //         }

    //     }
    // }
    if(n>=91){
        cout<<"Excellent";
    }
    else if(n>=81){
        cout<<"very good";
    }
    else if(n>=71){
        cout<<"good";
    }

    else if(n>=61){
        cout<<"can do better";
    }

    else if(n>=51){
        cout<<"average";
    }

    else if(n>=41){
        cout<<"below average";
    }

    else {
        cout<<"Fail";
    }



}