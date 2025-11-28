// Motor Testing
// Author: Jessica Panuccio
// Arduino

// initialization
  // solenoids
    int S1 = 2;    // S1 LED, used for Eb6 and F6
    int S2 = 3;    // S2 LED, used for G6 and Bb6
    int S3 = 4;    // S3 LED. used for C7 and Eb7
    int S4 = 5;    // S4 LED, used for F7 and G7
  // motor
    int M1 = 6;    // 
    int M2 = 7;    // 
  // rhythm
    int var = 1000; // variable adjusts tempo
    int num = 1;
    int eighth = var/8;
    int quarter = var/4;
    int whole = var;
    int move_left = 375; // variable adjusts how long motor turns, aka how much belt moves
    int move_right = 500;
    int var_motor = var/3;
  /*  Here is a diagram of the chimes and moving solenoid belt
   *    notes               Eb6  F6  G6  Bb6 C7  Eb7 F7  G7
   *    left position belt   S1      S2      S3      S4
   *    right position belt      S1      S2      S3      S4
   *    lpb = left position belt;
   *    rpb = right position belt;
   *    
    */
void setup() 
{
  // put your setup code here, to run once:
  pinMode(S1, OUTPUT);
  pinMode(S2, OUTPUT);
  pinMode(S3, OUTPUT);
  pinMode(S4, OUTPUT);
  pinMode(M1, OUTPUT);
  pinMode(M2, OUTPUT);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  // initialize positions
       // motors off
          digitalWrite(M1, LOW);
          digitalWrite(M2, LOW);
      // one direction on
          digitalWrite(M1, HIGH);
          digitalWrite(M2, LOW);
      // sucks all solenoids in
          for (int i=2;i<=5;i++){digitalWrite,HIGH;}
           
       // all solenoids out
          //for (int i=2;i<=5;i++){digitalWrite,LOW;}
          
      for(int i=1; i<10; i++)
      {
          // move clockwise
                  digitalWrite(M1, HIGH);
                  digitalWrite(M2, LOW);
                  delay(var/2);
                  digitalWrite(M1, LOW);
                      for (int i=2;i<=5;i++){digitalWrite,LOW;}
                      delay(quarter);
                      for (int i=2;i<=5;i++){digitalWrite,HIGH;}
          // pause
                  delay(var);
          // move counter-clockwise
                  digitalWrite(M2, HIGH);
                  digitalWrite(M1, LOW);
                  delay(var/2);
                  digitalWrite(M2, LOW);  
                      for (int i=2;i<=5;i++){digitalWrite,LOW;}
                      delay(quarter);
                      for (int i=2;i<=5;i++){digitalWrite,HIGH;}  
          // pause
                  delay(var);     
      } 
}
