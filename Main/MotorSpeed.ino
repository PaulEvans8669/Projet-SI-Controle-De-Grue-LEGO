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
