#include<iostream>
#include<cctype>
using namespace std;

int main(){

    char ch;
    ch=cin.get();
    int total_digits=0;
    int total_alpha = 0;
    int other_char = 0;
    int total_spaces = 0;

    while(ch!='$'){
        if (isdigit(ch)){
            total_digits++;
        }
        else if(isalpha(ch)){
            total_alpha++;
        }
        else if (ch == ' ' || ch == '\t'){
            total_spaces++;
        }
        else{
            other_char++;
        }
        
        ch=cin.get();

    }
    cout<<"Total digits = "<<total_digits<<endl;
    cout<<"Total alphabets = "<<total_alpha<<endl;
    cout<<"Other characters = "<<other_char<<endl;
    cout<<"Total spaces = "<<total_spaces;
    return 0;
}