#include <iostream>
#include <cmath>
#include <string>

using namespace std;

double deg2rad(double x){
	x = x*(M_PI/180);
	return x;
}


double rad2deg(double x){
	x = x*(180/M_PI);
	return x;
}

double findXComponent(double x,double y,double z,double w){
	double j,k;
	j = x*cos(z);
	k = y*cos(w);
	return j+k;
}

double findYComponent(double x,double y,double z,double w){
	double j,k;
	j = x*sin(z);
	k = y*sin(w);
	return j+k;
}

double pythagoras(double x,double y){
	double r;
	r = pow(x,2) + pow(y,2);
	return sqrt(r);
}



void showResult(double a,double b){
	cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
	cout<<"Length of the resultant vector = "<<a<<endl;
	cout<<"Direction of the resultant vector (deg) = "<<b<<endl;
	cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
}


int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}
