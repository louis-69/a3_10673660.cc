#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
int mark;
int main(){


cout << " Enter your Marks:" << endl;

cin >> mark;


     if (mark>=80 && mark<=100){
cout<<"A" << endl;
}

else if (mark>=75 && mark<=79){
cout<<"B+" << endl;
}

else if (mark>=70 && mark<=74){
cout<<"B" <<endl;
}

else if (mark>=65 && mark<=69){
cout<<"C+" <<endl;
}

else if (mark>=60 && mark<=64){
cout<<"C" <<endl;
}

else if (mark>=55 && mark<=59){
cout<<"D+" <<endl;
}

else if (mark>=50 && mark<=54){
cout<<"D" <<endl;
}

else if (mark>=45 && mark<=49){
cout<<"E" <<endl;
}

else if (mark>=0 && mark<=44){
cout<<"F" <<endl;
}

else {
cout<<"Enter a valid mark." <<endl;
} 








return 0;

}
