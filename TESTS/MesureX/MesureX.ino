//initialisation des variables

  //pins de contrôle du moteur▼
  int pinXrun = 22;
  int pinXH = 2;
  int pinXAH = 3;
  //pins de contrôle du moteur▲

int pinEncodeur = 4; //Connecté au pin CLK de l'encodeur

int n = 0;
int dernval;

//initialisation des variables


void setup() {
  
    Serial.begin(9600);//Démarage de la communication avec l'affichage arduino de l'ordinateur

    //Attribution des modes de connexion des pins de la carte arduino▼
    pinMode(pinXrun, OUTPUT);//OUPUT = SORTIE
    pinMode(pinXH, OUTPUT);
    pinMode(pinXAH, OUTPUT);
    pinMode(pinEncodeur, INPUT);//INPUT = ENTREE
    //Attribution des modes de connexion des pins de la carte arduino▲

    
    dernval = digitalRead(pinEncodeur);//Lecture de la position initiale du signal de l'encodeur (0 ou 1)
    Serial.println(n); //Affichage de la position initiale de l'encodeur
    
}


void loop() {//revient en ARR: 5,44s
            //va en AVA: 5,99s
  
  //Contrôle du moteur
  digitalWrite(pinXrun, HIGH);
  digitalWrite(pinXH, LOW);
  digitalWrite(pinXAH, HIGH);
  //Contrôle du moteur
  
  if(digitalRead(pinEncodeur) != dernval){//On vérifie si le signal de l'encodeur a changé
    
    n = n+1;//On incrémente la variable qui compte le nombre de changement de signal
    Serial.println(n);// Affichage de cette valeur
    dernval=digitalRead(pinEncodeur);//on change la position de "départ" du signal
    
  }

}
