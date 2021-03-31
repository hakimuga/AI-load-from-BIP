
--------------------------------------------------------------------------------------------------------------------------------------------------------
# AI-load-from-BIP
--------------------------------------------------------------------------------------------------------------------------------------------------------
* 1- The maven project "classification" is used to train the model with four features (f0, f1, f2, f4) and one output (q0) and produce a file "model.bin".

* 2- The maven project "ModelLoading" is used to generate a jar file in charge of prediction using "model.bin" generated from 1. 


**Important:**

* 1- To generate the jar file (assembly) : build the Maven project "ModelLoading" with goal assembly:single.

* 2-Put the jar file and  model.bin close to external c++ file, to use external Unix shell commands.

Enjoy.

--------------------------------------------------------------------------------------------------------------------------------------------------------
