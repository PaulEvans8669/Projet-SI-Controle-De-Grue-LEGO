void groupedMovement(float desiredX, float desiredY, float desiredZ){
  float desiredPosition[] = {desiredX, desiredY, desiredZ};
  float actualPosition[] = {nacellePositionX, BrasAngleY, NacelleHauteurZ};
  while(array_comp(desiredPosition,actualPosition) == false){
    Serial.print(desiredPosition[0]);
    Serial.print(desiredPosition[1]);
    Serial.println(desiredPosition[2]);
    Serial.print(actualPosition[0]);
    Serial.print(actualPosition[1]);
    Serial.println(actualPosition[2]);
    getMotorData(X);
    getMotorData(Y);
    getMotorData(Z);
    if(desiredX != nacellePositionX){
      if(desiredX>nacellePositionX){
        mouvementMoteur(X,H,100);
      }else if(desiredX<nacellePositionX){
        mouvementMoteur(X,AH,100);
      }
      }else{arretMoteur(X);}
    if(desiredY != BrasAngleY){
      if(desiredY>BrasAngleY){
        mouvementMoteur(Y,H,100);
      }else if(desiredY<BrasAngleY){
        mouvementMoteur(Y,AH,100);
      }
      }else{arretMoteur(Y);}
    if(desiredZ != NacelleHauteurZ){
      if(desiredZ>NacelleHauteurZ){
        mouvementMoteur(Z,H,100);
      }else if(desiredZ<NacelleHauteurZ){
        mouvementMoteur(Z,AH,100);
      }
      }else{arretMoteur(Z);}
      actualPosition[0] = nacellePositionX;
      actualPosition[1] = BrasAngleY;    
      actualPosition[2] = NacelleHauteurZ;        
  }
}



