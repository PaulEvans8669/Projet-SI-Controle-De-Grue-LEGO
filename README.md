# Projet-SI-Controle-De-Grue-LEGO

## Télécharger les fichiers
  Télécharger le [dossier compressé](https://github.com/amatokus8669/Projet-SI-Controle-De-Grue-LEGO/archive/master.zip)
  Un fichier compressée est alors téléchargé. Il contient tout les programmes présents sur le repertoire GIT.
  
## Mise en place
  1. Ouvrir  le dossier compressé et extraire le dossier Main issu du fichier ayant pour nom la version du programme à utiliser, ici de préférence la version 4.0.
  2. Une fois le dossier Main extrait, ouvrir à l'aide du logiciel arduino, le fichier nommé Main.ino. Un ensemble de fichier apparaît  alors dans le logiciel arduino. 
  3. Tout est prêt!
  
  
## Faire fonctionner la grue

> Toujours mettre tous les éléments dans une position centrale afin d'éviter des cassures.

Dans le fichier Main, inscrire la ligne de code suivante: 
  ```Arduino
  void loop() {
    groupedMovement(ValeurX,ValeurY,ValeurZ);
  }
  ```
  Les différentes valeurs `ValeurX` `ValeurY` `ValeurZ` sont les valeurs représentant les coordonnées   souhaitées. Elles prennent les valeurs des positions souhaitées (impulsions d'encodeurs).
