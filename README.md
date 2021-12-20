# Arduino String Splitter
String splitter for Arduino Board and any other board work with Arduino IDE

the functionality of this code is explained as below : 

      Example String  = test1,test2,test3,test4\n

      
(Serial.readStringUntil("\n"), ',', 1));

if Serial. available is triggered then 

    the first value of function (end of line): 
      the function reads one line in our example code I decided to use "\n" as an end of line character u use whatever u, please.

    the second value of the function (separator ):
      u can use any character to separate ur string to parts we used "," as a separator.
      note: u can only use one character at a time.
    
    the third value of the function (which value):
     in the example, above we typed 1 which means we want a second separated value in our string:
     
      the output will be test2


عملکرد این کد به صورت زیر توضیح داده می شود:

        یک نمونه از ارسال بر روی سریال = test1,test2,test3,test4\n 

(Serial.readStringUntil("\n"), ',', 1));

اگر سریال وجود داشته باشد فعال می شود.

    ااولین مقدار تابع (انتهای خط):
           تابع یک خط را در کد مثال ما می خواند. من تصمیم گرفتم از 
           "\n"
           به عنوان کاراکتر انتهای خط استفاده کنم.
       
    مقدار دوم تابع (جداکننده):
           شما می توانید از هر کاراکتری برای جدا کردن رشته خوداستفاده کنید. برای مثال در این کد از ',' استفاده شده است.
           توجه: جدا کننده فقط یک کارکتر می باشد .
    
    مقدار سوم تابع (که مقدار):
          در مثال، در بالا ما 1 را تایپ کردیم که به این معنی است که دومین مقدار جداشده را به عنوان خروجی تحویل بدهد.:
     
       خروجی test2 خواهد بود
       


