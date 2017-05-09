#include <iostream>

using namespace std;
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
void swapt(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void swaptr(int **a, int **b){
    int temp = **a;
    **a = **b;
    **b =temp;
}
void swape(int **a, int **b){
    int *temp = *a;
    *a = *b;
    *b = temp;
}
int mergesort(int arr[], int tam){
    if (tam == 1)
        return 0;
    else{
        int m = tam/2;
        int izq[] = mergesort(arr[m:]);
        int der[] = mergesort(arr[:m]);
        return mergeord(izq,der);
    }
}


int main()
{
    /*
    int a, b;
    cin >> a >> b;
    swap(a, b);
    cout << "Paso por referencia: "<< endl;
    cout <<"el valor de a es: "<< a <<" el valor de b es: " << b<<endl;
    cout <<"Por punteros: "<< endl;
    swapt(&a, &b);
    cout <<"El valor de a es: "<< a << "El valor de b es: "<< b<< endl;
    int *p = &a;
    int *q = &b;
    cout <<"Por puntero a puntero intercambiando valores: "<<endl;
    swaptr(&p, &q);
    cout << "El valor de a es: "<< a <<"El valor de b es: "<< b<< endl;
    cout << "Por puntero a puntero intercambiando apuntadores: "<< endl;
    swape(&p, &q);
    cout << "El puntero p apunta a: "<< *p << "El puntero q apunta a: "<< *q; */
    //Segundo ejercicio

    return 0;
}
