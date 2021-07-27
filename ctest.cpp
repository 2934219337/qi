#include <string>
#include <iostream>

using namespace std;

char *dd(char *aa);
char *fun(){
    char *cv = (char *)"hello";
    cout<<&cv<<"!!!!!!"<<sizeof(cv)<<endl;
    return dd(cv);

}

char *dd(char *aa){
    cout<<&aa<<endl;

    return aa;
}

int main() {



int a[10];

printf("a: %d, a+1: %d, &a: %d, &a+1:%d ，&a[9]:%d \n", a, a+1, &a, &a+1,&a[9]);
char *ap =fun();

cout<<ap<<&ap<<endl;
return 0;

}