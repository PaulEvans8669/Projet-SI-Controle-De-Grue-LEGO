


void posReset(String Motor){
  if(Motor == X){
    if(digitalRead(pinMotorXSwitch) == LOW){
    nacellePositionX = 0;
   } 
  }else if(Motor == Y){
    if(digitalRead(pinMotorYSwitch) == LOW){
    BrasAngleY = 0;
   } 
  }else if(Motor == Z){
    if(digitalRead(pinMotorZSwitch) == LOW){
    NacelleHauteurZ = 0;
   } 
  }
}

void encodeMotorSpeed(String Motor){
  if(Motor == X){
       float rotationX2 = millis()*0.001;
       float timeR1R2X = rotationX2-rotationX1;
       float vitesseRotationX = rapportEngrenagesX/timeR1R2X;
       Serial.print (vitesseRotationX);
       Serial.println ("deg/s");
       float rpmX = vitesseRotationX *60/360 ;
       Serial.print (rpmX);
       Serial.println ("tr/min");
       rotationX1 = rotationX2;
  }else if(Motor == Y){
       float rotationY2 = millis()*0.001;
       float timeR1R2Y = rotationY2-rotationY1;
       float vitesseRotationY = rapportEngrenagesY/timeR1R2Y;
       Serial.print (vitesseRotationY);
       Serial.println ("deg/s");
       float rpmY = vitesseRotationY *60/360 ;
       Serial.print (rpmY);
       Serial.println ("tr/min");
       rotationY1 = rotationY2;
  }else if(Motor == Z){
       float rotationZ2 = millis()*0.001;
       float timeR1R2Z = rotationZ2-rotationZ1;
       float vitesseRotationZ = rapportEngrenagesZ/timeR1R2Z;
       Serial.print (vitesseRotationZ);
       Serial.println ("deg/s");
       float rpmZ = vitesseRotationZ *60/360 ;
       Serial.print (rpmZ);
       Serial.println ("tr/min");
       rotationZ1 = rotationZ2;
  }
}
void encodePosition(String Motor){
  Serial.println(nacellePositionX);
  Serial.println(BrasAngleY);
  Serial.println(NacelleHauteurZ);
  if(Motor == X){
    Serial.println(X);
    if(sensX == H){
      nacellePositionX = nacellePositionX + 1;
    }else if(sensX == AH){
      nacellePositionX = nacellePositionX - 1;
    }else if(sensX == ""){
      //no rotation
    }
    
  }else if(Motor == Y){
    Serial.println(Y);
    if(sensY == H){
      BrasAngleY = BrasAngleY + 1;
        if(BrasAngleY >= 1080){
          Serial.println("Rotation sur Y presque en butée");
        }
    }else if(sensY == AH){
      BrasAngleY = BrasAngleY - 1;
        if(BrasAngleY == 30){
          Serial.println("Rotation sur Y presque en butée");
        }
    }else if(sensY == ""){
      //no rotation
    }
    
    
  }else if(Motor == Z){
    Serial.println(Z);
    if(sensZ == H){
      Serial.println(H);
      NacelleHauteurZ = NacelleHauteurZ + 1;
    }else if(sensZ == AH){
      Serial.println(AH);
      NacelleHauteurZ = NacelleHauteurZ - 1;
    }else if(sensZ == ""){
      Serial.println("nope");
      //no rotation
    }
  }
}

void getMotorData(String Motor){
  if(Motor == X){
    pinCLKXValue = digitalRead(pinCLKX); 
    if (pinCLKXValue != pinCLKXLastValue){
      if(posChaineAEncodeurX == 1){
        encodeMotorSpeed(X);
        encodePosition(X);
        posChaineAEncodeurX--;
      }else{
        posChaineAEncodeurX++;
      }
    }
    pinCLKXLastValue = pinCLKXValue;
  }else if(Motor == Y){
    pinCLKYValue = digitalRead(pinCLKY); 
    if (pinCLKYValue != pinCLKYLastValue){
      if(posChaineAEncodeurY == 1){
        encodeMotorSpeed(Y);
        encodePosition(Y);
        posChaineAEncodeurY--;
      }else{
        posChaineAEncodeurY++;
      }
    }
    pinCLKYLastValue = pinCLKYValue;
  }else if(Motor == Z){
    pinCLKZValue = digitalRead(pinCLKZ); 
    if (pinCLKZValue != pinCLKZLastValue){
      if(posChaineAEncodeurZ == 1){
        encodeMotorSpeed(Z);
        encodePosition(Z);
        posChaineAEncodeurZ--;
      }else{
        posChaineAEncodeurZ++;
      }
    }
    pinCLKZLastValue = pinCLKZValue;
  }
}
