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
