void mouvementMoteur(String moteur, String sens, int intensite){
    int puissance = 0;
  if(intensite !=0){
    puissance = (((255-80)*intensite)/100) +80;
  }
  //Serial.println(puissance);
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
