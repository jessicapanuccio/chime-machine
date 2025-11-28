// Chime Project Code 
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
    int move_forward = 200; // variable adjusts how long motor turns, aka how much belt moves
    int move_backward = 200;
    int var_motor = var/3;
    int note_pause = var/3; //pause after note plays and motor moves
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
// FUNCTIONS
      void solenoids_out()
        { for (int i=2;i<=5;i++){digitalWrite(i,LOW);} }
      void solenoids_in()
        { for (int i=2;i<=5;i++){digitalWrite(i,HIGH);} }
      void motors_off()
        {
          digitalWrite(M1, LOW);
          digitalWrite(M2, LOW);
        }
      void play_all_quarter()
        {
          solenoids_out();
          delay(quarter);
          solenoids_in();
        }
      void move_right()      // rpb, formally cw
        {
          digitalWrite(M1, HIGH);
          digitalWrite(M2, LOW);
          delay(move_forward);
          digitalWrite(M1, LOW);
          //    play_all_quarter();   //line is only for testing
        }
      void move_left()     // lpb, formally ccw
        {
          digitalWrite(M2, HIGH);
          digitalWrite(M1, LOW);
          delay(move_backward);
          digitalWrite(M2, LOW);  
          //    play_all_quarter();   //line is only for testing 
        }
      
      

// MAIN  
void loop() 
  {
    // put your main code here, to run repeatedly:
    // initialize positions
         // motors off
            motors_off;
        // sucks all solenoids in
            solenoids_in();
       
        /*
        // test  moves side to side, each time enacting solenoids  
        for(int i=1; i<10; i++)
        {
            // move clockwise
                move_cw();  
            // pause
                    delay(var*2);
            // move counter-clockwise
                move_ccw();
            // pause
                    delay(var*2);     
        } 
        */


// Whole Song
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
          // Should start in default lpb
          digitalWrite(S3, LOW);
          delay(eighth);
          digitalWrite(S3, HIGH);
          delay(note_pause);
     // "(we)ee", Bb6
        // move belt to rpb
          move_right();
          digitalWrite(S2, LOW);
          delay(eighth);
          digitalWrite(S2, HIGH); 
          delay(note_pause);
     // "get", C7
        // move belt to lpb
          move_left();
          digitalWrite(S3, LOW);
          delay(eighth);
          digitalWrite(S3, HIGH);
          delay(note_pause); 
     // "it", Eb7
        // move belt to rpb
          move_right();
          digitalWrite(S3, LOW);
          delay(eighth);
          digitalWrite(S3, HIGH);
          delay(note_pause);
      // "on", G6
        // move belt to lpb
          move_left();
          digitalWrite(S2, LOW);
          delay(eighth);
          digitalWrite(S2, HIGH);
          delay(note_pause);
      // "(on)nnn", F6
        // move belt to rpb
          move_right();
          digitalWrite(S1, LOW);
          delay(quarter);
          digitalWrite(S1, HIGH);
          delay(note_pause);
      // "most", Eb6
        // move belt to lpb
          move_left();
          digitalWrite(S1, LOW);
          delay(eighth);
          digitalWrite(S1, HIGH);
          delay(note_pause);
      // "ev-", F6
        // move belt to rpb
          move_right();
          digitalWrite(S1, LOW);
          delay(eighth);
          digitalWrite(S1, HIGH);
          delay(note_pause);
      // "'ry", Eb6
        // move belt to lpb
          move_left();
          digitalWrite(S1, LOW);
          delay(eighth);
          digitalWrite(S1, HIGH);
          delay(note_pause);
      // "night", F6
        // move belt to rpb
          move_right();
          digitalWrite(S1, LOW);
          delay(eighth);
          digitalWrite(S1, HIGH);
          delay(note_pause);
          
      // rest
          delay(whole*3);
          
      // "when", Eb6
        // move belt to lpb
          move_left();
          digitalWrite(S1, LOW);
          delay(eighth);
          digitalWrite(S1, HIGH);
          delay(note_pause);
      // "that", F6
        // move belt to rpb
          move_right();
          digitalWrite(S1, LOW);
          delay(quarter);
          digitalWrite(S1, HIGH);
          delay(note_pause);
      // "moon", G6
        // move belt to lpb
          move_left();
          digitalWrite(S2, LOW);
          delay(eighth);
          digitalWrite(S2, HIGH);
          delay(note_pause);
      // "is", Bb6
        // move belt to rpb
          move_right();
          digitalWrite(S2, LOW);
          delay(eighth);
          digitalWrite(S2, HIGH);
          delay(note_pause);
      // "(is)ss", G6
        // move belt to lpb
          move_left();
          digitalWrite(S2, LOW);
          delay(eighth);
          digitalWrite(S2, HIGH);
          delay(note_pause);
       // "big", Bb6
        // move belt to rpb
          move_right();
          digitalWrite(S2, LOW);
          delay(quarter);
          digitalWrite(S2, HIGH);
          delay(note_pause);
       // "and", Bb6
        // move belt to rpb
          //already right, keep or delete delay to equalize
          delay(move_forward);
          digitalWrite(S2, LOW);
          delay(eighth);
          digitalWrite(S2, HIGH);
          delay(note_pause);
       // "(and)ddd", G6
        // move belt to lpb
          move_left();
          digitalWrite(S2, LOW);
          delay(eighth);
          digitalWrite(S2, HIGH);
          delay(note_pause);
       // "bright", C7
        // move belt to lpb
          //already left, keep or delete delay to equalize
          delay(move_backward);
          digitalWrite(S3, LOW);
          delay(quarter);
          digitalWrite(S3, HIGH);
          delay(note_pause);
       // "it's", C7
        // move belt to lpb
          //already left, keep or delete delay to equalize
          delay(move_backward);
          digitalWrite(S3, LOW);
          delay(eighth);
          digitalWrite(S3, HIGH);
          delay(note_pause);
       // "a", Bb6
        // move belt to rpb
          move_right();
          digitalWrite(S2, LOW);
          delay(eighth);
          digitalWrite(S2, HIGH);
          delay(note_pause);
       // "su-", C7
        // move belt to lpb
          move_left();
          digitalWrite(S3, LOW);
          delay(quarter);
          digitalWrite(S3, HIGH);
          delay(note_pause);
       // "-per", Eb7
        // move belt to rpb
          move_right();
          digitalWrite(S3, LOW);
          delay(quarter);
          digitalWrite(S3, HIGH);
          delay(note_pause);
       // "-na", G6
        // move belt to lpb
          move_left();
          digitalWrite(S2, LOW);
          delay(eighth);
          digitalWrite(S2, HIGH);
          delay(note_pause);
       // "(aa)", F6
        // move belt to rpb
          move_right();
          digitalWrite(S1, LOW);
          delay(eighth);
          digitalWrite(S1, HIGH);
          delay(note_pause);
       // "-tu-", F6
        // move belt to rpb
          //already right, keep or delete delay to equalize
          delay(move_forward);
          digitalWrite(S1, LOW);
          delay(eighth);
          digitalWrite(S1, HIGH);
          delay(note_pause);
       // "(uu)", Eb6
        // move belt to lpb
          move_left();
          digitalWrite(S1, LOW);
          delay(eighth);
          digitalWrite(S1, HIGH);
          delay(note_pause);
       // "-ral", F6
        // move belt to rpb
          move_right();
          digitalWrite(S1, LOW);
          delay(quarter);
          digitalWrite(S1, HIGH);
          delay(note_pause);
       // "de", Eb6
        // move belt to lpb
          move_left();
          digitalWrite(S1, LOW);
          delay(eighth);
          digitalWrite(S1, HIGH);
          delay(note_pause);
       // "-light", F6
        // move belt to rpb
          move_right();
          digitalWrite(S1, LOW);
          delay(quarter);
          digitalWrite(S1, HIGH);
          delay(note_pause);
       // rest
          delay(eighth);
       // "Ev-", F6
        // move belt to rpb
          //already right, keep or delete delay to equalize
          delay(move_forward);
          digitalWrite(S1, LOW);
          delay(quarter);
          digitalWrite(S1, HIGH);
          delay(note_pause);
       // "ry", Eb6
        // move belt to lpb
          move_left();
          digitalWrite(S1, LOW);
          delay(eighth);
          digitalWrite(S1, HIGH);
          delay(note_pause);
       // "bod", F6
        // move belt to rpb
          move_right();
          digitalWrite(S1, LOW);
          delay(quarter);
          digitalWrite(S1, HIGH);
          delay(note_pause);
       // "-y's", Eb6
        // move belt to lpb
          move_left();
          digitalWrite(S1, LOW);
          delay(quarter);
          digitalWrite(S1, HIGH);
          delay(note_pause);
       // "Danc-", G6
        // move belt to lpb
          //already left, keep or delete delay to equalize
          delay(move_backward);
          digitalWrite(S2, LOW);
          delay(quarter);
          digitalWrite(S2, HIGH);
          delay(note_pause);
       // "-ing", Bb6
        // move belt to rpb
          move_right();
          digitalWrite(S2, LOW);
          delay(eighth);
          digitalWrite(S2, HIGH);
          delay(note_pause);
       // "(gg)", G6
        // move belt to lpb
          move_left();
          digitalWrite(S2, LOW);
          delay(quarter);
          digitalWrite(S2, HIGH);
          delay(note_pause);
       // "in", Bb6
        // move belt to rpb
          move_right();
          digitalWrite(S2, LOW);
          delay(quarter);
          digitalWrite(S2, HIGH);
          delay(note_pause);
       // "the", Bb6
        // move belt to rpb
          //already right, keep or delete delay to equalize
          delay(move_forward);
          digitalWrite(S2, LOW);
          delay(eighth);
          digitalWrite(S2, HIGH);
          delay(note_pause);
       // "(ee)", G6
        // move belt to lpb
          move_left();
          digitalWrite(S2, LOW);
          delay(eighth);
          digitalWrite(S2, HIGH);
          delay(note_pause);
       // "moon", C7
        // move belt to lpb
          //already left, keep or delete delay to equalize
          delay(move_backward);
          digitalWrite(S3, LOW);
          delay(quarter);
          digitalWrite(S3, HIGH);
          delay(note_pause);
       // "light", F6
        // move belt to rpb
          move_right();
          digitalWrite(S1, LOW);
          delay(eighth);
          digitalWrite(S1, HIGH);
          delay(note_pause);
       // "(ight)", Eb6
        // move belt to lpb
          move_left();
          digitalWrite(S1, LOW);
          delay(quarter);
          digitalWrite(S1, HIGH);
          delay(note_pause);
       // rest
          delay(quarter);    
    /* sample format to copy and paste
      // "__", __
        // move belt to _pb
          digitalWrite(S_, HIGH);
          delay(_);
          digitalWrite(S_, LOW);
     */
     /*
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
            */
  }
