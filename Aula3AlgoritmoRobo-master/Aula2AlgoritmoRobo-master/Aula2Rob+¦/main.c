#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

 int s1, s2, m1, m2, tecla;

int LerSensor(){
    tecla = getch();
    if(tecla == 'a'){
        s1 = 1;
        s2 = 0;
    }
    else if(tecla == 'd'){
        s1 = 0;
        s2 = 1;
    }
    else if(tecla == 'w'){
        s1 = 1;
        s2 = 1;
    }
    else if(tecla == 's'){
        s1 = 0;
        s2 = 0;
    }
    printf("\n");
}
int IA(){
    if (s1 ==1 && s2 == 0){
            m1 = 0;
            m2 = 1;
    }

    else if (s1 == 0 && s2 == 0){
            m1 = 1;
            m2 = 1;
    }
    else {
        m1 = 1;
        m2 = 0;
    }
    return m1,m2;
}
int DriveMotors(){
    printf(" m1:%d , m2:%d \n", m1, m2);

}
int main()
{
while(1){
    //LerSensor
    LerSensor();

    //IA
    IA();

    //DriveMotors
    DriveMotors();
}
}



