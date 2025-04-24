#include <iostream>

using namespace std;

int sumaDeArreglo (int *arr, int size){
    int suma;
     for (int i=0 ; i<size ; i++){
            suma = *(arr+0)+ *(arr+i);
     }
     return suma;
     }

bool primos (int x){
    if (x<=1) return false;
    for (int i=2 ; i*i<=x ; i++){
        if (x%i==0) return false;
        return true;
        }
    }
void invertir (int *ini, int *fin){
    int temp;
   while (ini<fin){
        temp = *ini;
        *ini = *fin;
        *fin = temp;
        ini++;
        fin--;
    }

}

int imprime (int* arr, int size){
for (int i=0 ; i<size ; i++){
    cout << *(arr+i) << " ";
}
    cout << endl;
}

void duplicar (int* arr, int size){
    for (int i=0 ; i<size ; i++){
        *(arr+i)*=2;
    }
}


int main(){

int val=20;
int *ptr;
cout << val << endl;
cout << &val << endl;
ptr = &val;
cout << ptr << endl;
cout << *ptr << endl;
*ptr=1000;
cout << val << endl;
int *ptr2=&val;
*ptr2=400;
cout << ptr2 << endl;
cout << val << endl;
double d= 20.55;
double *ptr3=&d;
char car='A';
char *ptr4=&car;
cout << *ptr3 << endl << *ptr4 << endl;

cout << "_____________________" << endl;
//arrays

int arr[8]={1,2,3,4,5,6,7,8};
int *ptrArr=&arr[0];
int *ptrArr2=&arr[7];
cout << endl << arr << endl;
cout << *arr << endl;
cout << *(arr+1) << endl;
cout << *(arr+2) << endl;
cout << *(arr+3) << endl;
cout << *(arr+4) << endl;
cout << *(arr+5) << endl;
cout << *(arr+6) << endl;
cout << *(arr+7) << endl;

//ptr++ ---> apunta al siguiente elemento

/*
*for (int i=0 ; i<size ; i++ , ptrArr++){
*    cout << *ptrArr << " ";
*}
*/

int size=sizeof(arr) / sizeof(arr[0]);


cout << "_____________________" << endl;

// funcion

int x = invertir(ptrArr,ptrArr2);
cout << sumaDeArreglo(arr,size);
cout << x;
cout << imprime(arr,size);


    return 0;

}
