//

#define RX 37

void setup() {
  // put your setup code here, to run once:
  pinMode(RX, INPUT);
  //int data[8] = {0, 0, 0, 0, 0, 0, 0, 0};
  char data;
  int RX_old = 0;
}

void loop() {
  // put your main code here, to run repeatedly:
  if (RX_old && !RX)
  {
    delay(/* 1.5 * bitbredd */);
    // Shifta in RX i data.
  }
  RX_old = RX;
}
