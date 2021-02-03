int LED = 15; // we have to declare our led here
void setup()
{
    pinMode(LED, OUTPUT);
}
void loop()
{
    digitalWrite(LED, HIGH); 
    delay(500);
    digitalWrite(LED, LOW);
    delay(2000);
}

//1. In the void setup the command will be run for one time
//2. so the thing which we want to setup for the first time we should write here.
//3. As we have to tell the arduino we are working with PIN so we have to use pinMode.

//4. The pinMode(params, params) take two parameter which u are working and second is which type of signal OUTPUT or INPUT all must be in CAPS.
//5. In the void loop the thing which we want to excute multiple time or till a condition break it we should write here in the loop.

//6. As we have to send the signal to the pin to on it so we use digitalWrite(parms ,params).

//7. digitalWrite takes two parameters first which Led to on or off
//8. To ON the led use HIGH
//9. To OFF the led use LOW

//10. To put the delay in our program we have to use delay( milliseconds);
// 1 second is 1000 milliseconds