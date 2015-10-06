# Quantum Virtual Machine


Joshua Freedman, Thomas Steinholz

Science Fair 2016

##Rationale
For this project we are going to time travel into the not so distant future, a point in time where computers are no longer based on transistor processors; quantum computers have taken over.  We plan to create an emulator to simulate theoretical processors based on Quantum Physics as well as design our own programming language designed specifically for the platform.  Due to experimental and hybrid quantum computers costing millions of dollars (Rincon, §1), we will be programming a virtual one, in which we will be able to program theoretical data so as to cause it to behave like a real quantum computer.  The goal of the emulator will be to make the software running on it not be able to tell the difference between the real thing and our emulator.  One of the major bottlenecks of this project is performance.  A normal computer can't even begin to compare to a quantum one, as they are built on totally separate hardware.  On top of that, the emulator will be extremely resource intensive, and the code will take a lot more memory during runtime.

##Goals
The goal of our project is really a collection of many smaller goals.  First and foremost, there is a more intimate understanding of quantum physics, circuitry, and technologies advances in the modern world.  Another goal of ours is to make a working emulator that hopefully could be used to “code” programs for a real quantum computer.  One of the more interesting aspects of this project is the ability to be able to potentially test out new theories and ideas on a piece of software the we have made.  This project is most likely going to be tedious, elongated, and ambitious, however it will definitely be a great educational experience.  All of the code relating to this project will be publicly hosted on Github[1] under the group “The Quantum Project”[2] and will be under the GNU Open-Source license.  On the public repo, we will have our temporary website, our virtual machine and emulator code, the details of the custom language, and any other repositories related to this project.  Throughout the daunting journey of this project, we will be doing massive amounts of research, and recording many of our notes, ideas, and theories in a public Google Drive[3][4] folder.

##Procedure Outline
This is a very complicated project that will require many steps to complete. 
The first step is to get a complete understanding of what the emulator would need to do.  In order to do this, we will need a fairly strong comprehension of how a quantum computer should theoretically work.  Only once we have conducted nearly all of our research into quantum physics and its implementations into a quantum computer, will we be able to start designing our actual emulator.
The second thing we will need to do is layout or programing language, and all the features we will want it to have.  
The third task will be to choose the language we are going to write the emulator in, and actually start laying out the groundwork for the emulator.
The fourth step will be to either set up virtual machines or buy some mini computers to test our emulator on.
The fifth part of our plan involves getting the emulator to a working stage, without to many features, and then starting the creation process of our own language on it. 
After that, we will have to design a compiler for our own language: Quantum Computing Language (QCL) and take it through rigorous tests.  All test results will be available in the Google Drive folder.
The sixth step will to be to write an interpreter/virtual machine for our compiled code, and again take it through many, many hours of testing.
Once both the primitive version of the compiler and virtual machine are in a stable working state, we will be able to start writing the standard language libraries and the documentation for them.
At this point, if everything is working properly, we will start working on research into future uses of this, along with working on adding language support packages for common editors.
Last but hopefully not least, we will start adding on features on an as needed basis.

##What is Quantum Computing?
This is a extremely heavy question.  One of the major differences between traditional computers and Quantum Computers (Q-Computers) is the use of quantum bits, or qubits.  In a standard computer, a bit can either be 1 or 0, which is seen in things like binary code, where the number 7 is equal to 111.  In Q-Computers however, qubits behave very differently.  Quantum Computers encode information according to quantum mechanical states of the involved atomic constituents, such as spin directions of electrons or the orientation of photons.  The various possibilities could also represent 0 or 1, or could represent a combination of the two, or could represent a combination between 0 and 1, and finally, could simultaneously represent many different numbers.  (“Quantum computing”, §2).  This phenomenon is called superposition, which is most certainly something that a standard computer cannot handle.

_____________________________________________________________________________________________________________________________


[1] https://github.com

[2] https://github.com/The-Quantum-Project

[3] https://drive.google.com

[4] https://drive.google.com/folderview?id=0B4D89DiD2y-jeHRNTk5UeUhtRE0&usp=sharing


Rincon, Paul. "D-Wave: Is $15m Machine a Glimpse of Future Computing?" BBC News. N.p., 20 May 2014. Web. 05 Oct. 2015. <http://www.bbc.com/news/science-environment-27264552>.


"Quantum computing." World of Computer Science. Gale, 2002. Science in Context. Web. 5 Oct. 2015. <http://goo.gl/li0plk>
