#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    int s1, s2, s3, m1, m2;
    s1 = s2 = s3 = m1 = m2 = 0;

    /*Leitura do sensor
      1 para obstaculo identificado e 0 para nao tem obstaculo
      S1 -- SENSOR FRONTAL
      S2 -- SENSOR LATERAL ESQUERDO
      S3 -- SENSOR LATERAL DIREITO
      m1 -- Motor esquerdo
      m2 -- motor direito*/
    label:{

    scanf("%d %d %d", &s1, &s2, &s3);
    if ((s1 == 1) && (s2 == 1) && (s3 == 1)){
            m1 = 0;
            m2 = 0;
            printf(" m1:%d , m2:%d \n", m1, m2);
            goto label;
    }
    else if (s1 ==1 && s2 == 0 && s3 == 0){
            m1 = 1;
            m2 = 0;
            printf(" m1:%d , m2:%d \n", m1, m2);
            goto label;
    }
    else if (s1 ==0 && s2 ==1 && s3==0){
            m1 = 1;
            m2 = 0;
           printf(" m1:%d , m2:%d \n", m1, m2);
            goto label;
    }
    else if (s1 == 0 && s2 == 0 && s3 == 1){
            m1 = 0;
            m2 = 1;
            printf(" m1:%d , m2:%d \n", m1, m2);
            goto label;
    }
    else if (s1 ==1 && s2==1 && s3==0){
            m1 = 1;
            m2 = 0;
            printf(" m1:%d , m2:%d \n", m1, m2);
            goto label;
    }
    else if (s1== 1 && s2==0 && s3==1){
            m1 = 0;
            m2 = 1;
            printf(" m1:%d , m2:%d \n", m1, m2);
            goto label;
    }
    else if (s1==0 && s2==1 && s3==1){
            m1 = 1;
            m2 = 1;
            printf(" m1:%d , m2:%d \n", m1, m2);
            goto label;
    }
    else if (s1==0 && s2==0 && s3==0){
            m1 = 1;
            m2 = 1;
            printf(" m1:%d , m2:%d \n", m1, m2);
            goto label;
    }
    }
}
