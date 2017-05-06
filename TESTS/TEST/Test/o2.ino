void mouvementMoteur(String moteur, String sens, int intensite){
    int puissance = 0;
  if(intensite !=0){
    puissance = (((255-80)*intensite)/100) +80;
  }
  if(sens == "HORAIRE"){
    if(moteur == "X"){
      sensX = H;
      digitalWrite(pinXrun, HIGH);
      analogWrite(pinXH,puissance);
      analogWrite(pinXAH,0);
    }else if(moteur == "Y"){
      sensY = H;
      digitalWrite(pinYrun, HIGH);
      analogWrite(pinYH,puissance);
      analogWrite(pinYAH,0);
    }else if(moteur == "Z"){
      sensZ = H;
      digitalWrite(pinZrun, HIGH);
      analogWrite(pinZH,puissance);
      analogWrite(pinZAH,0);
    }
  }else if(sens == "AHORAIRE"){
    if(moteur == "X"){
      sensX = AH;
      digitalWrite(pinXrun, HIGH);
      analogWrite(pinXH,0);
      analogWrite(pinXAH,puissance);
    }else if(moteur == "Y"){
      sensY = AH;
      digitalWrite(pinYrun, HIGH);
      analogWrite(pinYH,0);
      analogWrite(pinYAH,puissance);
    }else if(moteur == "Z"){
      sensZ = AH;
      digitalWrite(pinZrun, HIGH);
      analogWrite(pinZH,0);
      analogWrite(pinZAH,puissance);
    }
  }
}

void groupedMovement(float desiredX, float desiredY, float desiredZ){
  float desiredPosition[] = {desiredX, desiredY, desiredZ};
  float actualPosition[] = {nacellePositionX, BrasAngleY, NacelleHauteurZ};
  while(array_comp(desiredPosition,actualPosition) == false){
    getMotorData(X);
    getMotorData(Y);
    getMotorData(Z);
    if(desiredX != nacellePositionX){
      if(desiredX>=nacellePositionX){
        mouvementMoteur(X,H,100);
      }else if(desiredX<nacellePositionX){
        mouvementMoteur(X,AH,100);
      }
      }else{arretMoteur(X);}
    if(desiredY != BrasAngleY){
      if(desiredY>=BrasAngleY){
        mouvementMoteur(Y,H,100);
      }else if(desiredY<BrasAngleY){
        mouvementMoteur(Y,AH,100);
      }
      }else{arretMoteur(Y);}
    if(desiredZ != NacelleHauteurZ){
      if(desiredZ>=NacelleHauteurZ){
        mouvementMoteur(Z,H,100);
      }else if(desiredZ<NacelleHauteurZ){
        mouvementMoteur(Z,AH,100);
      }
      }else{arretMoteur(Z);}
  }
}

void arretMoteur(String moteur){
  if(moteur == "X"){
      sensX = "";
    digitalWrite(pinXrun, LOW);
    digitalWrite(pinXH,LOW);
    digitalWrite(pinXAH,LOW);
  }else if(moteur == "Y"){
      sensY = "";
    digitalWrite(pinYrun, LOW);
    digitalWrite(pinYH,LOW);
    digitalWrite(pinYAH,LOW);
  }else if(moteur == "Z"){
      sensZ = "";
    digitalWrite(pinZrun, LOW);
    digitalWrite(pinZH,LOW);
    digitalWrite(pinZAH,LOW);
  }
}

