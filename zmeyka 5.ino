void setup() {
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop(){
  int LEDS[5] = {255,85,0,0,0};
  for(int k = 0; k < 5; k++)
  {
    while(LEDS[k] > 0)
    {
      analogWrite(3, LEDS[0]);
      analogWrite(5, LEDS[1]);
      analogWrite(6, LEDS[2]);
      analogWrite(9, LEDS[3]);
      analogWrite(10, LEDS[4]);
      LEDS[k] = LEDS[k] - 3;
      if(k+2 < 5)
      {
        LEDS[k+1] = LEDS[k+1] + 2;
        LEDS[k+2] = LEDS[k+2] + 1;
      }else if(k+1 < 5){
        LEDS[k+1] = LEDS[k+1] + 2;
        LEDS[k-3] = LEDS[k-3] + 1;
      }else{
        LEDS[k-4] = LEDS[k+1] + 2;
        LEDS[k-3] = LEDS[k-3] + 1;
      }
      delay(10);
    }
  }
}
