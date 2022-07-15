#include <iostream>

using namespace std;


int main()
{
    int num,min,max;
    cout<<"Enter minimum range:"<<endl;
    cin>>min;
    cout<<"Enter max range:"<<endl;
    cin>>max;
    
    for(int i=min;i<=max;i++){
        num=i;
    
    int size=1;
            char letters[size];
            while(num != 0){
            
                while(num/1000 != 0){               //1000's
                    num=num-1000;
                    letters[size] = 'M';
                    size++;
                }
                
                
                while(num/100 != 0){                //100's
                    if(num/100 == 9){
                        num=num-900;
                        letters[size] = 'C';
                        size++;
                        letters[size]= 'M';
                        size++;
                    }
                    else if(num/500 == 1){
                        num=num-500;
                        letters[size]='D';
                        size++;
                    }
                    else if(num/100 == 4){
                        num=num-400;
                        letters[size] = 'C';
                        size++;
                        letters[size] = 'D';
                        size++;
                    }
                    else{
                        num=num-100;
                        letters[size] = 'C';
                        size++;
                    }
                }
                
                while(num/10 !=0){                  //10's
                    if(num/10 == 9){
                        num=num-90;
                        letters[size] = 'X';
                        size++;
                        letters[size] = 'C';
                        size++;
                    }
                    else if(num/10==5){
                        num=num-50;
                        letters[size] = 'L';
                        size++;
                    }
                    else if(num/10==4){
                        num=num-40;
                        letters[size] = 'X';
                        size++;
                        letters[size] = 'L';
                        size++;
                    }
                    else{
                        num=num-10;
                        letters[size] = 'X';
                        size++;
                    }
                }
                
                while(num/1 != 0){                  //1's
                    if(num/1 == 9){
                        num=num-9;
                        letters[size] = 'I';
                        size++;
                        letters[size] = 'X';
                        size++;
                    }
                    else if(num/1 >= 5){
                        num=num-5;
                        letters[size] = 'V';
                        size++;
                    }
                    else if(num/1 == 4){
                        num=num-4;
                        letters[size] = 'I';
                        size++;
                        letters[size] = 'V';
                        size++;
                    }
                    else {
                        num=num-1;
                        letters[size] = 'I';
                        size++;
                    }
                }
            }
   
    for(int i=1; i<size; i++){  //Reposting code caused bug where 0 would appear before all roman numerals, changed i=0 to i=1
        cout<<letters[i];
    }
    
    cout<<endl;
    }
}

