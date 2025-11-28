// Chime Project Code 
// Author: Jessica Panuccio
// Arduino

// initialization
  // solenoids
    int S1 = 2;    // S1 LED, used for Eb6 and F6
    int S2 = 3;    // S2 LED, used for G6 and Bb6
    int S3 = 4;    // S3 LED. used for C7 and Eb7
    int S4 = 5;    // S4 LED, used for F7 and G7
  // rhythm
    int var = 1000; // variable adjusts tempo
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
  */

void setup() 
{
  // put your setup code here, to run once:
  pinMode(S1, OUTPUT);
  pinMode(S2, OUTPUT);
  pinMode(S3, OUTPUT);
  pinMode(S4, OUTPUT);
}

void loop() 
{
  // put your main code here, to run repeatedly:
      // song lyrics are quoted notations
      /* sample format to copy and paste
      // "__", __
        // move belt to _pb
          digitalWrite(S_, HIGH);
          delay(_);
          digitalWrite(S_, LOW);
     */
  // verse
     // "we", C7
        // move belt to lpb
        // digitalWrite(6,HIGH)
          digitalWrite(S3, LOW);
          delay(eighth);
          digitalWrite(S3, HIGH);
     // "(we)ee", Bb6
        // move belt to rpb
          digitalWrite(S2, LOW);
          delay(eighth);
          digitalWrite(S2, HIGH); 
     // "get", C7
        // move belt to lpb
          digitalWrite(S3, LOW);
          delay(eighth);
          digitalWrite(S3, HIGH); 
     // "it", Eb7
        // move belt to rpb
          digitalWrite(S3, LOW);
          delay(quarter);
          digitalWrite(S3, HIGH);
      // "on", G6
        // move belt to lpb
          digitalWrite(S2, LOW);
          delay(eighth);
          digitalWrite(S2, HIGH);
      // "(on)nnn", F6
        // move belt to rpb
          digitalWrite(S1, LOW);
          delay(quarter);
          digitalWrite(S1, HIGH);
      // "most", Eb6
        // move belt to lpb
          digitalWrite(S1, LOW);
          delay(eighth);
          digitalWrite(S1, HIGH);
      // "ev-", F6
        // move belt to rpb
          digitalWrite(S1, LOW);
          delay(eighth);
          digitalWrite(S1, HIGH);
      // "'ry", Eb6
        // move belt to lpb
          digitalWrite(S1, LOW);
          delay(eighth);
          digitalWrite(S1, HIGH);
      // "night", F6
        // move belt to rpb
          digitalWrite(S1, LOW);
          delay(eighth);
          digitalWrite(S1, HIGH);
          
      // rest
          delay(whole*3);
          
      // "when", Eb6
        // move belt to lpb
          digitalWrite(S1, LOW);
          delay(eighth);
          digitalWrite(S1, HIGH;
      // "that", F6
        // move belt to rpb
          digitalWrite(S1, LOW);
          delay(quarter);
          digitalWrite(S1, HIGH);
      // "moon", G6
        // move belt to lpb
          digitalWrite(S2, LOW);
          delay(eighth);
          digitalWrite(S2, HIGH;
      // "is", Bb6
        // move belt to rpb
          digitalWrite(S2, LOW);
          delay(eighth);
          digitalWrite(S2, HIGH);
      // "(is)ss", G6
        // move belt to lpb
          digitalWrite(S2, LOW);
          delay(eighth);
          digitalWrite(S2, HIGH);
       // "big", Bb6
        // move belt to rpb
          digitalWrite(S2, LOW);
          delay(quarter);
          digitalWrite(S2, HIGH);
       // "and", Bb6
        // move belt to rpb
          digitalWrite(S2, LOW);
          delay(eighth);
          digitalWrite(S2, HIGH);
       // "(and)ddd", G6
        // move belt to lpb
          digitalWrite(S2, LOW;
          delay(eighth);
          digitalWrite(S2, HIGH);
       // "bright", C7
        // move belt to lpb
          digitalWrite(S3, LOW);
          delay(quarter);
          digitalWrite(S3, HIGH);
       // "it's", C7
        // move belt to lpb
          digitalWrite(S3, LOW);
          delay(eighth);
          digitalWrite(S3, HIGH);
       // "a", Bb6
        // move belt to rpb
          digitalWrite(S2, LOW);
          delay(eighth);
          digitalWrite(S2, HIGH);
       // "su-", C7
        // move belt to lpb
          digitalWrite(S3, LOW);
          delay(quarter);
          digitalWrite(S3, HIGH);
       // "-per", Eb7
        // move belt to rpb
          digitalWrite(S3, LOW);
          delay(quarter);
          digitalWrite(S3, HIGH);
       // "-na", G6
        // move belt to lpb
          digitalWrite(S2, LOW);
          delay(eighth);
          digitalWrite(S2, HIGH);
       // "(aa)", F6
        // move belt to rpb
          digitalWrite(S1, LOW);
          delay(eighth);
          digitalWrite(S1, HIGH);
       // "-tu-", F6
        // move belt to rpb
          digitalWrite(S1, LOW);
          delay(eighth);
          digitalWrite(S1, HIGH);
       // "(uu)", Eb6
        // move belt to lpb
          digitalWrite(S1, LOW);
          delay(eighth);
          digitalWrite(S1, HIGH);
       // "-ral", F6
        // move belt to rpb
          digitalWrite(S1, LOW);
          delay(quarter);
          digitalWrite(S1, HIGH);
       // "de", Eb6
        // move belt to lpb
          digitalWrite(S1, LOW);
          delay(eighth);
          digitalWrite(S1, HIGH);
       // "-light", F6
        // move belt to rpb
          digitalWrite(S1, LOW);
          delay(quarter);
          digitalWrite(S1, HIGH);
       // rest
          delay(eighth);
       // "Ev-", F6
        // move belt to rpb
          digitalWrite(S1, LOW);
          delay(quarter);
          digitalWrite(S1, HIGH);
       // "ry", Eb6
        // move belt to lpb
          digitalWrite(S1, LOW);
          delay(eighth);
          digitalWrite(S1, HIGH);
       // "bod", F6
        // move belt to rpb
          digitalWrite(S1, LOW);
          delay(quarter);
          digitalWrite(S1, HIGH);
       // "-y's", Eb6
        // move belt to lpb
          digitalWrite(S1, LOW);
          delay(quarter);
          digitalWrite(S1, HIGH);
       // "Danc-", G6
        // move belt to lpb
          digitalWrite(S2, LOW);
          delay(quarter);
          digitalWrite(S2, HIGH);
       // "-ing", Bb6
        // move belt to rpb
          digitalWrite(S2, LOW);
          delay(eighth);
          digitalWrite(S2, HIGH);
       // "(gg)", G6
        // move belt to lpb
          digitalWrite(S2, LOW);
          delay(quarter);
          digitalWrite(S2, HIGH);
       // "in", Bb6
        // move belt to rpb
          digitalWrite(S2, LOW);
          delay(quarter);
          digitalWrite(S2, HIGH);
       // "the", Bb6
        // move belt to rpb
          digitalWrite(S2, LOW);
          delay(eighth);
          digitalWrite(S2, HIGH);
       // "(ee)", G6
        // move belt to lpb
          digitalWrite(S2, LOW);
          delay(eighth);
          digitalWrite(S2, HIGH);
       // "moon", C7
        // move belt to lpb
          digitalWrite(S3, LOW);
          delay(quarter);
          digitalWrite(S3, HIGH);
       // "light", F6
        // move belt to rpb
          digitalWrite(S1, LOW);
          delay(eighth);
          digitalWrite(S1, HIGH);
       // "(ight)", Eb6
        // move belt to lpb
          digitalWrite(S1, LOW);
          delay(quarter);
          digitalWrite(S1, HIGH);
       // rest
          delay(quarter);    
    /* sample format to copy and paste
      // "__", __
        // move belt to _pb
          digitalWrite(S_, HIGH);
          delay(_);
          digitalWrite(S_, LOW);
     */
  // chorus
        // "Danc", G7
          // move belt to rpb
            digitalWrite(S4, LOW);
            delay(eighth);
            digitalWrite(S4, HIGH);
        // "(ccc)", F7 
          // move belt to lpb
            digitalWrite(S4, LOW);
            delay(eighth);
            digitalWrite(S4, HIGH);
         // "-ing", F7 
          // move belt to lpb
            digitalWrite(S4, LOW);
            delay(eighth);
            digitalWrite(S4, HIGH);
         // "in", F7 
          // move belt to lpb
            digitalWrite(S4, LOW);
            delay(eighth);
            digitalWrite(S4, HIGH);
         // "the", Eb7 
          // move belt to rpb
            digitalWrite(S3, LOW);
            delay(eighth);
            digitalWrite(S3, HIGH);
         // "moon", Eb7 
          // move belt to rpb
            digitalWrite(S3, LOW);
            delay(quarter);
            digitalWrite(S3, HIGH);
         // "light", G7
          // move belt to rpb
            digitalWrite(S4, LOW);
            delay(quarter);
            digitalWrite(S4, HIGH);
         // rest
            delay(eighth);   
         // "Ev-", F7 
          // move belt to lpb
            digitalWrite(S4, LOW);
            delay(eighth);
            digitalWrite(S4, HIGH);
         // "ry", Eb7 
          // move belt to rpb
            digitalWrite(S3, LOW);
            delay(eighth);
            digitalWrite(S3, HIGH);
         // "bod", F7 
          // move belt to lpb
            digitalWrite(S4, LOW);
            delay(quarter);
            digitalWrite(S4, HIGH);
         // "-(d)y", Eb7 
          // move belt to rpb
            digitalWrite(S3, LOW);
            delay(quarter);
            digitalWrite(S3, HIGH); 
         // "feel", G7
          // move belt to rpb
            digitalWrite(S4, LOW);
            delay(quarter);
            digitalWrite(S4, HIGH);   
         // "-ing", F7 
          // move belt to lpb
            digitalWrite(S4, LOW);
            delay(quarter);
            digitalWrite(S4, HIGH);
         // "warm", F7 
          // move belt to lpb
            digitalWrite(S4, LOW);
            delay(quarter);
            digitalWrite(S4, HIGH);
         // "and", Eb7 
          // move belt to rpb
            digitalWrite(S3, LOW);
            delay(quarter);
            digitalWrite(S3, HIGH);
         // "bright", Eb7 
          // move belt to rpb
            digitalWrite(S3, LOW);
            delay(quarter);
            digitalWrite(S3, HIGH);
         // "it", C7
          // move belt to lpb
            digitalWrite(S3, LOW);
            delay(quarter);
            digitalWrite(S3, HIGH);
         // "'s", Bb6
          // move belt to rpb
            digitalWrite(S2, LOW);
            delay(eighth);
            digitalWrite(S2, HIGH);
         // "such", C7
          // move belt to lpb
            digitalWrite(S3, LOW);
            delay(quarter);
            digitalWrite(S3, HIGH);
         // "a", Eb7 
          // move belt to rpb
            digitalWrite(S3, LOW);
            delay(quarter);
            digitalWrite(S3, HIGH);
         // "fine", G7
          // move belt to rpb
            digitalWrite(S4, LOW);
            delay(eighth);
            digitalWrite(S4, HIGH);
         // "-ee", F7 
          // move belt to lpb
            digitalWrite(S4, LOW);
            delay(quarter);
            digitalWrite(S4, HIGH);
         // "and", Eb7 
          // move belt to rpb
            digitalWrite(S3, LOW);
            delay(eighth);
            digitalWrite(S3, HIGH);
         // "na", F7 
          // move belt to lpb
            digitalWrite(S4, LOW);
            delay(eighth);
            digitalWrite(S4, HIGH);
         // "-tural", Eb7 
          // move belt to rpb
            digitalWrite(S3, LOW);
            delay(eighth);
            digitalWrite(S3, HIGH);
         // "sight", F7 
          // move belt to lpb
            digitalWrite(S4, LOW);
            delay(eighth);
            digitalWrite(S4, HIGH);
         // rest
            delay(quarter+eighth);
  
          // "Ev", F7 
          // move belt to lpb
            digitalWrite(S4, LOW);
            delay(eighth);
            digitalWrite(S4, HIGH);
         // "'ry", Eb7 
          // move belt to rpb
            digitalWrite(S3, HIGH);
            delay(eighth);
            digitalWrite(S3, LOW);
         // "-bod-", F7 
          // move belt to lpb
            digitalWrite(S4, HIGH);
            delay(quarter);
            digitalWrite(S4, LOW);
         // "-y's", Eb7 
          // move belt to rpb
            digitalWrite(S3, HIGH);
            delay(quarter);
            digitalWrite(S3, LOW);
         // "Danc", G7
          // move belt to rpb
            digitalWrite(S4, HIGH);
            delay(quarter);
            digitalWrite(S4, LOW);
         // "-ing", F7 
          // move belt to lpb
            digitalWrite(S4, HIGH);
            delay(quarter);
            digitalWrite(S4, LOW);
         // "in", F7 
          // move belt to lpb
            digitalWrite(S4, HIGH);
            delay(quarter);
            digitalWrite(S4, LOW);
         // "the", Eb7 
          // move belt to rpb
            digitalWrite(S3, HIGH);
            delay(quarter);
            digitalWrite(S3, LOW);
         // "moon", G7
          // move belt to rpb
            digitalWrite(S4, HIGH);
            delay(quarter+eighth);
            digitalWrite(S4, LOW);
         // "li", F7 
          // move belt to lpb
            digitalWrite(S4, HIGH);
            delay(eighth);
            digitalWrite(S4, LOW);
         // "-ight", Eb7 
          // move belt to rpb
            digitalWrite(S3, HIGH);
            delay(quarter+eighth);
            digitalWrite(S3, LOW);
         // rest
            delay(quarter);  
}
