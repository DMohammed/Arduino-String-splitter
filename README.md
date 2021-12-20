# Arduino String Splitter
String splitter for Arduino Board and any other board work with Arduino IDE

the functionality of this code is explained as below : 

(Serial.readStringUntil("\n"), ',', 1));

if Serial. available is triggered then 

    the first value of function (end of line): 
      the function reads one line in our example code I decided to use "\n" as an end of line character u use whatever u, please.

    the second value of the function (separator ):
      u can use any character to separate ur string to parts we used "," as a separator.
      note: u can only use one character at a time.
    
    the third value of the function (which value):
     in the example, above we typed 1 which means we want a second separated value in our string:
     
      (test1,test2,test3,test4)
      the output will be test2







