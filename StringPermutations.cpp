#include<iostream>
using namespace std;

void permutations(string ans, string original){        
 if(original==""){
  cout<<ans<<"  ";
  return;
 }
for(int i=0;i<original.length();i++){
  char c=original[i];
  string left= original.substr(0,i);
  string right= original.substr(i+1);
  permutations(ans+c, left+right);
  }
}

//Main function
int main(){
 string str;
 cout<<"Enter the string\n";
 cin>>str;
 permutations("", str);
}
