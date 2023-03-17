#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system(
) or input loop */
//create namespace
/*Branch name
*
*
*/
//prototype
//--------------------------
//micro
//---------------------
//global variable
//-------------------
int main(int argc, char** argv)
{

//Declare array size
int size = 6;

//Declare array
int a[size] = {2,4,8,12,21,33};

cout<<"Show array before sort :"<<endl<<endl;

//Show array
for(int i = 0; i<size; ++i)
{
    cout<<"a["<<i<<"] = "<<a[i];
    cout<<endl;
}

cout<<endl<<endl<<"--------------------------"<<endl<<endl

//Sort array with function
sort(a,size);

//Show array
for(int i = 0; i<size; ++i)
{
    cout<<"a["<<i<<"] = "<<a[i];
    cout<<endl;
}
getch();
}
//function variable
//--------------------------
//functions
void sort(int b[],int size)
{


}