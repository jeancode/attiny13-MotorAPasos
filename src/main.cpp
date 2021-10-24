#include<Arduino.h>
#include<servo.h>




void setup(){

    pinMode(0,OUTPUT);
    pinMode(1,OUTPUT);
    pinMode(2,OUTPUT);
    pinMode(3,OUTPUT);

}


void pasoN(int paso){

    if(paso == 0){

        digitalWrite(0,1);
        digitalWrite(1,0);
        digitalWrite(2,0);
        digitalWrite(3,0);

    }else if(paso == 1){

        digitalWrite(0,1);
        digitalWrite(1,1);
        digitalWrite(2,0);
        digitalWrite(3,0);


    }else if(paso == 2){

        digitalWrite(0,0);
        digitalWrite(1,1);
        digitalWrite(2,0);
        digitalWrite(3,0);


    }else if(paso == 3){

        digitalWrite(0,0);
        digitalWrite(1,1);
        digitalWrite(2,1);
        digitalWrite(3,0);


    }else if(paso == 4){

        digitalWrite(0,0);
        digitalWrite(1,0);
        digitalWrite(2,1);
        digitalWrite(3,0);


    }else if(paso == 5){

        digitalWrite(0,0);
        digitalWrite(1,0);
        digitalWrite(2,1);
        digitalWrite(3,1);


    }else if(paso == 6){


        digitalWrite(0,0);
        digitalWrite(1,0);
        digitalWrite(2,0);
        digitalWrite(3,1);

    }else if(paso == 7){

        digitalWrite(0,1);
        digitalWrite(1,0);
        digitalWrite(2,0);
        digitalWrite(3,1);


    }

}

void giro(int pasos,int tiempo,bool direccion){

    if(direccion == true){

        for(int i = 0;i <= pasos;i++){


            for(int  p = 0; p <= 7;p++){

                pasoN(p);
                delayMicroseconds(tiempo);

            }

        }

    }
    else{

        for(int i = 0;i <= pasos;i++){


            for(int  p = 7; p >= 0;p--){

                pasoN(p);
                delayMicroseconds(tiempo);

            }

        }
    }
}


void loop(){

    giro(500,1000,0);

    delay(1000);

    giro(500,1000,1);

    delay(1000);

}
