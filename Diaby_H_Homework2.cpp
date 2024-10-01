// Halimatou Diaby
//Lecture Four (If statements)
//10/1/24


#include <iostream>
#include <string> 

using namespace std;


/*(My notes)
3 (21) -> 6 (20) (spring months)
6 (21) -> 9(22)  (summer months)
9 (23) -> 12 (21) (fall months)
12 (22) -> 3 (20) (winter months)

*/ 




int main(){

int Month;
int day;





cout << "Please input the month (enter a number from 1-12 corresponding with the 12 months of the year)" <<endl;
cin >> Month;

cout <<"Please input the day of the month (1-31)"<<endl;
cin >> day;


if (Month >=3 && Month <=6 &&  21 <= 20)
    cout <<"ITS SPRING YIPPPPEEE!!!!!!!!!!"<<endl;





return 0;
}