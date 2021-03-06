#ifndef posizione_magneti_h
#define posizione_magneti_h

void posizione_magneti() {

  extern bool iz; extern bool is; extern bool id; extern bool rd; extern bool rs; extern bool set; extern int pos;


  /////////////////////////// pos = posizione magneti nel vano/////////////////////////////

  if  (pos <= 5) {
    id = HIGH;
  }                                            //quota piano terra  0
  if (pos <= 10) {
    is = HIGH;
    iz = HIGH;
  }

  ////////////////////////////

  if (pos <= 30) {                             //rifasatore inferiore
    rd = LOW;
  }

  /////////////////////////////

  if (pos >= 35 && pos <= 40) {
    if (set == 1) {
      id = HIGH;
    }
    if (set == 0) {
      is = HIGH;
    }
  }

  /////////////////////////////

  if (pos >= 60 && pos <= 65) {
    if (set == 1) {
      is = HIGH;
    }
    if (set == 0) {
      id = HIGH;
    }
  }

  //////////////////////////////

  if (pos >= 90 && pos <= 105) {
    id = HIGH;
    iz = HIGH;
  }                                            // quota primo piano 100
  if (pos >= 95 && pos <= 110) {
    is = HIGH;
    iz = HIGH;
  }

  ///////////////////////////////

  if (pos >= 135 && pos <= 140) {
    if (set == 1) {
      id = HIGH;
    }
    if (set == 0) {
      is = HIGH;
    }
  }

  ///////////////////////////////

  if (pos >= 160 && pos <= 165) {
    if (set == 1) {
      is = HIGH;
    }
    if (set == 0) {
      id = HIGH;
    }
  }

  ///////////////////////////////

  if (pos >= 190 && pos <= 205) {
    id = HIGH;
    iz = HIGH;
  }                                            // quota secondo piano 200
  if (pos >= 195 && pos <= 210) {
    is = HIGH;
    iz = HIGH;
  }

  ///////////////////////////////

  if (pos >= 235 && pos <= 240) {
    if (set == 1) {
      id = HIGH;
    }
    if (set == 0) {
      is = HIGH;
    }
  }

  ///////////////////////////////

  if (pos >= 260 && pos <= 265) {
    if (set == 1) {
      is = HIGH;
    }
    if (set == 0) {
      id = HIGH;
    }
  }

  ///////////////////////////////

  if (pos >= 290 && pos <= 305) {
    id = HIGH;
    iz = HIGH;
  }                                            // quota terzo piano 300
  if (pos >= 295 && pos <= 310) {
    is = HIGH;
    iz = HIGH;
  }

  ///////////////////////////////

  if (pos >= 335 && pos <= 340) {
    if (set == 1) {
      id = HIGH;
    }
    if (set == 0) {
      is = HIGH;
    }
  }

  ///////////////////////////////

  if (pos >= 360 && pos <= 365) {
    if (set == 1) {
      is = HIGH;
    }
    if (set == 0) {
      id = HIGH;
    }
  }

  ///////////////////////////////

  if (pos >= 390 && pos <= 405) {
    id = HIGH;
    iz = HIGH;
  }                                            // quota quarto piano 400
  if (pos >= 395 && pos <= 410) {
    is = HIGH;
    iz = HIGH;
  }

  /////////////////////////////////

  if (pos >= 435 && pos <= 440) {
    if (set == 1) {
      id = HIGH;
    }
    if (set == 0) {
      is = HIGH;
    }
  }

  /////////////////////////////////

  if (pos >= 460 && pos <= 465) {
    if (set == 1) {
      is = HIGH;
    }
    if (set == 0) {
      id = HIGH;
    }
  }

  ////////////////////////////////

  if (pos >= 470) {                            //rifasatore superiore
    rs = LOW ;
  }

  ////////////////////////////////

  if (pos >= 490 && pos <= 505) {
    id = HIGH;
    iz = HIGH;
  }                                            // quota quarto piano 500
  if (pos >= 495 && pos <= 510) {
    is = HIGH;
    iz = HIGH;
  }

}




void posizione_magneti_lb2() {

  extern bool iz; extern bool is; extern bool id; extern bool rd; extern bool rs; extern bool set; extern int pos;




 /////////////////////////// pos = posizione magneti nel vano/////////////////////////////

  if  (pos <= 5) {
    iz = HIGH;
  }                                            //quota piano terra  0
  ////////////////////////////
  if (pos <= 30) {                             //rifasatore inferiore
    rd = LOW;
  }
  /////////////////////////////
  if (pos >= 35 && pos <= 40) {
      id = HIGH;
  }
  /////////////////////////////
  if (pos >= 60 && pos <= 65) {
      is = HIGH;
  }
  //////////////////////////////
  if (pos >= 95 && pos <= 105) {
    iz = HIGH;
  }                                            // quota primo piano 100
  ///////////////////////////////
  if (pos >= 135 && pos <= 140) {
      id = HIGH;
  }
  /////////////////////////////
  if (pos >= 160 && pos <= 165) {
      is = HIGH;
  }
  //////////////////////////////
  if (pos >= 195 && pos <= 205) {
    iz = HIGH;
  }                                            // quota secondo piano 200
  ///////////////////////////////
  if (pos >= 235 && pos <= 240) {
      id = HIGH;
  }
  /////////////////////////////
  if (pos >= 260 && pos <= 265) {
      is = HIGH;
  }
  //////////////////////////////
  if (pos >= 295 && pos <= 305) {
    iz = HIGH;
  }                                            // quota terzo piano 300
  ///////////////////////////////
  if (pos >= 335 && pos <= 340) {
      id = HIGH;
  }
  /////////////////////////////
  if (pos >= 360 && pos <= 365) {
      is = HIGH;
  }
  //////////////////////////////
  if (pos >= 395 && pos <= 405) {
    iz = HIGH;
  }                                            // quota quarto piano 400
  ///////////////////////////////
  if (pos >= 435 && pos <= 440) {
      id = HIGH;
  }
  /////////////////////////////
  if (pos >= 460 && pos <= 465) {
      is = HIGH;
  }
  //////////////////////////////
  if (pos >= 470) {                            //rifasatore superiore
    rs = LOW ;
  }
  ////////////////////////////////
  if (pos >= 495 && pos <= 505) {
    iz = HIGH;
  }                                            // quota quinto piano 500
  ///////////////////////////////



}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////7





#endif
