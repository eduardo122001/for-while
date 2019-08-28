#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int d=1;

    //----------------potencia
    /*while(d){
        int nt=n;
        n=n/2;
        nt=nt%2;
        if(n==1 && nt==0){
            cout<<"es potencia de 2"<<endl;
            d=d-1;
        }
        if(n!=1 && nt!=0){
            cout<<"no es potencia de 2"<<endl;
            d=d-1;
        }
    }*/
    //---------------------
    int m=1;
    int perf=0;
    for(m;m<n;m++){

        int g=n%m;

        if(g==0){
            perf=perf+m;
            cout<<perf<<endl;
        }
    }
    if(perf==n){
    cout<<"es perfecto"<<endl;}

    //-------------------
/*

        int x=0;
        int i=1;
        for(i;i<=n;i++){
            int y=n%i;
            if(y==0){
            x++;}

                }
        if(x==2){
            cout<<"es primo"<<endl;
        }
        else{
            cout<<"no es primo"<<endl;
        }
*/
    //------------------------------------------
        int a=1;
        for(a;a<=100;a++){
            int b=1;
            int cant=0;

            for(b;b<=n;b++){
                int t=a%b;
                if(t==0){
                cant++;}
            }

            if(cant==2){
                cout<<a<<endl;
            }
        }

    //-----------------


    return 0;
    }


