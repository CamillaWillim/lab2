









#include<iostream>
using namespace std;

int main(){
  
  int N= 100; //number of iterations
  //double r = 3.1;
  double NR=4; //max. of r
  
  
  for(double r=0.0000001; r<=NR;r+=0.01){
  double x=0.5;
  for(int i=1;i<=N;i++){
    x = x*r*(1-x);
    if(i>19){
    cout << r << "\t" << x<< endl;
    }
    
  }
  }
  
  
}