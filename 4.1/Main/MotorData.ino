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
