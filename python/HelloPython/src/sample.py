
#import turtle

print '***Display characters***'
print "Hello, python!!"

print '***Display the calculation result***'
print 2+1
print 4-9
print 8*5
print 10/3

print '***Display the value of variables***'
va = 100
print va

print '***Display the comments of multi-line***'
print '''I have a pen.
I go to the library'''

print '***Display the sentence included quotation mark***'
print '''I can't speack English'''

print '***Display the sentence embedded data***'
myscore = 1000
mymessage = 'I scored %s points.'
print mymessage % myscore

print '***Display the sentence embedded multiple data***'
mathscore = 200
engscore = 300
myscoremessage = 'I scored %s points in math and %s points in English.'
print myscoremessage % (mathscore, engscore)

print '***Display the line break***'
print 
print '***Display the multiplication of character***'
print 'a' * 10

print '***Display the list and the element of list***'
school_subject = ['Japanese', 'Mathematics', 'Science', 'Social', 'English']
print school_subject
print school_subject[2]
print school_subject[2:4]

print '***Display the list included multi lists***'
numbers = [0, 1, 2, 3, 4]
strings = ['I', 'have', 'a', 'pen']
mylist = [numbers, strings]
print mylist

print 'Add the element in the list of end***'
school_subject.append('music')
print school_subject

print '***Delete the element of the list'
del school_subject[3]
print school_subject

print '***link the lits***'
print numbers + strings

print '***multiple the list***'
print numbers * 2

print '***Display tuple which the element cannot be changed, added, deleted and etc...***'
tuple_num = (0,1,2,3,4)
print tuple_num

print '***Display dict(key-value)***'
favorite_sports ={'Ken':'football',
                  'Sam':'baseball',
                  'Bob':'basketball',
                  'Emi':'tennis',
                  'Nic':'rugby'}
print favorite_sports

print '***Pick up the value using key from dict***'
print favorite_sports['Bob']

print '***Delete the key-value, Change the value using key***'
del favorite_sports['Sam']
print favorite_sports
favorite_sports['Emi'] = 'Judo'
print favorite_sports

print 
print '***Exit chapter 3.***'

#t = turtle.Pen()




