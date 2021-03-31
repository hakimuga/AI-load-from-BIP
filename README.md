# AI-load-from-BIP

* 1- The maven project "classification" is used to train the model with four features (f0, f1, f2, f4) and one output (q0)

* 2- The maven project "ModelLoading" is used to generate a jar file in charge of prediction using "model.bin" generated from 1. 

Important:

* 1- To generate the jar file (assembly) : build the model with goal assembly:single

* 2- Load the trained model  - > model.bin

* 3-Put it close to external c++ file, to use external shell commands.

Enjoy.
