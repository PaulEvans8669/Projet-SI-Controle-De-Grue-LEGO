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
