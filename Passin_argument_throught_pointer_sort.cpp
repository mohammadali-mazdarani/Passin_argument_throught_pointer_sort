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

void sort(int b[],int n);

void swap(int *pa,int *pb);

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
int a[size] = {2,0,18,4,12,33,21};

cout<<"Show array before sort :"<<endl<<endl;

//Show array
for(int i = 0; i<size; ++i)
{
    cout<<"a["<<i<<"] = "<<a[i];
    cout<<endl;
}

cout<<endl<<endl<<"--------------------------"<<endl<<endl;

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
void sort(int b[],int n)
{

//For loop
int i , j;

//Declare pointer
int *p;

p = b;

for(int i = 0; i<n; ++i)
{
    for(int j = 0; j<n-1; ++j)
    {
        if (*(p + j) > *(p + j + 1))
        swap((p+j),(p+j+1));
    }
}


}

void swap(int *pa,int *pb)
{

    int temp;

    temp = *pb;

    *pb = *pa;

    *pa = temp;

}

