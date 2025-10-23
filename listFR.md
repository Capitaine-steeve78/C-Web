C-Web protocol : <br>
. . C-Web = nom du projet <br>
. . CWP = C.O.S. Web Protocol <br>
. . C.O.S. = {TOP SECRET} <br>
- . . . . doit pouvoir être disponible sous toutes les forme de communication ne doit pas être sur le TCP ou l'UDP car c'est un protocole de communication a par<br>
- . . . . doit pouvoir être update sinon impossibilité de se connecter au réseau<br>
- . . . . doit être quanticproof <br>
- . . . . doit supporter un nombre infini de port ( meme négatif mais que pour système interne a P. corp<br>
- . . . . utilises les IPc (IP cos) au format <paysID>.<fournisseur>.<COS account ID>.<personnalisé>.<personnalisé>.{etc...}
  
format de packet : <br>
-     CWP                                | indique que c'est un pacquet CWP
-       metadata:                        | donne les métadonné
-         CWP-version: 1.0.0             | version du paquet
-         CWP-v-compat: 1.x.x, 0.5.x     | version oompatible avec ce packet
-         from: 1.sfr.1.1                | IPc source
-         to: 1.sfr.1.2                  | IPc cible
-       data:                            | donne les données du paquet
-         <content>                      | contenu du packet
-     end                                | indique la fin du packet
__formatage des paquets non définitive__
