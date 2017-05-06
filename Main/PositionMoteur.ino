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
        if(BrasAngleY < -180){
          BrasAngleY = 180 - 1;
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
