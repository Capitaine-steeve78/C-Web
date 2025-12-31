# IPCv2 : PPP.FFF.TTT.000.000.000.000.000.000.000.000.000.000
P = pays
F = FAI
T = type de machine

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
```shell
     CWP                                | indique que c'est un pacquet CWP
       metadata:                        | donne les métadonné
         CWP-version: 1.0.0             | version du paquet
         CWP-v-compat: 1.x.x, 0.5.x     | version oompatible avec ce packet
         from: 001.001.001.204.728.375.364.264.364.364.474.295.204                | IPcV2 source
         to: 001.001.001.274.173.018.274.028.010.375.295.175.018                  | IPc cible
       data:                            | donne les données du paquet
         <content>                      | contenu du packet
     end                                | indique la fin du packet
```


different mode :

- le mode normal, C-Web classique qui serait la version standard 
- C-Web Ultra Fast, qui serait optimisé pour oa vitesse au lieux de la qualité 
- C-Web Quality, qui serai plutôt pour etre sur que le packet arrive en un seul morceau 
- C-Web Bridge, qui permettrait de faire passer C-Web par IPv6 pour ameliorer la transition 



__formatage des paquets non définitive__







Windows <br>
Build system : CMake<br>
Generator / Build tool : Ninja<br>
Compilateur C/C++ : MSVC (via Visual Studio)<br>
Standard Library : MSVC STL<br>
Linux / macOS<br>
Build system : CMake<br>
Generator / Build tool : Ninja<br>
Compilateur C/C++ : Clang (Linux ou macOS)<br>
Standard Library : libc++<br>








Web-Gate : porte d'entré pour utiliser C-Web

