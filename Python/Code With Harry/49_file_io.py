#f = open('test.txt', 'r')
# f = open('test.txt') #this would be the same as above
# f = open('test.txt', 'rt') #rt means, open it as a text file; default behaviour
# f = open('test.txt', 'rb') #open it as a binary file

#cuz 'r' mode is default


#write mode (w)
#if the file doesn't exist and i am trying to open the file in write mode
#then the file will be created auto

#append mode (a)
#will add text at the end of the specific file
#diff with write mode?
#append doesn't overwrite the data of the file, unlike write mode

#create mode (c)
#will create a file
#throws error, if the file already exists 


#READING A FILE
#f = open('test.txt', 'r')
# text = f.read()
# #if i open the file in write mode ('w) then i would be able to read the file
# print(text)
# f.close()


#WRITING ON A FILE
# f = open('test.txt', 'w')
# f.write("hello world")
# f.close()


#APPEND 
# f = open('test.txt', 'a')
# f.write("hello world")
# f.close()



#with statement
#by using this, we don't need to close the file explicitely
#it is closed automatically

with open('test.txt', 'a') as f:
    f.write("hey this is a updated process")
