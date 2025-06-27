#walrus
if (n := 3) > 0:        # ':=' is walrus operator
    print("n is greater than 0")
else:
    print("n is less than or equal to 0")
    
#TYPE DEFINATION

n: int = 5
#by doing this we are stating that n is an integer and 
# it should not be changed to any other type
name: str = "Harry"

def sum(a: int, b: int) -> int: # ->int indicates that the function will return an integer
# a: int, b: int indicates that a and b are integers
    return a + b

#TYPE CASTING

#Type casting is the process of converting one data type into another data type.
#In Python, we can convert one data type to another using the following functions:
a = "123"
print(type(a)) # <class 'str'>
a = int(a)
print(type(a)) # <class 'int'>
print(a)

#Similarly, we can convert an integer to a string using the str() function.
a = 123
print(type(a)) # <class 'int'>
a = str(a)
print(type(a)) # <class 'str'>
print(a)

#MAP FUNCTION
#The map() function is used to apply a function to all the elements of a sequence 
# like a list.
#Syntax:
#map(function, sequence)
#The function is the function that we want to apply to the sequence.

def square(a):
    return a*a

x = map(square, [1, 2, 3, 4, 5])
print(x)
#To print the result, we can convert the map object to a list.
print(list(x)) # [1, 4, 9, 16, 25]
#We can also use the lambda function with the map() function.
#The lambda function is an anonymous function that is defined without a name.
#Syntax:
#lambda arguments: expression
x = map(lambda a: a*a, [1, 2, 3, 4, 5])
print(list(x)) # [1, 4, 9, 16, 25]

#FILTER FUNCTION

#The filter() function is used to filter the elements of a sequence.
#Syntax:
#filter(function, sequence)

def greater_than_3(a):
    return a > 3

x = filter(greater_than_3, [1, 2, 3, 4, 5])
print(x)
#To print the result, we can convert the filter object to a list.
print(list(x)) # [4, 5]
#We can also use the lambda function with the filter() function.    
x = filter(lambda a: a > 3, [1, 2, 3, 4, 5])
print(list(x)) # [4, 5]

#REDUCE FUNCTION
#The reduce() function is used to reduce the sequence to a single value 
# by applying the function cumulatively to the items of the sequence.
#Syntax:
#reduce(function, sequence)

from functools import reduce

def add(a, b):
    return a + b

x = reduce(add, [1, 2, 3, 4, 5])
print(x) # 15
#We can also use the lambda function with the reduce() function.
x = reduce(lambda a, b: a + b, [1, 2, 3, 4, 5])
print(x) # 15
#The reduce() function is not available in the global namespace by default.
# We need to import it from the functools module.

#ZIP FUNCTION

#The zip() function is used to combine two or more sequences.
#Syntax:
#zip(sequence1, sequence2, ...)
numbers = [1, 2, 3]
letters = ['a', 'b', 'c']
zipped = zip(numbers, letters)
print(zipped)
#To print the result, we can convert the zip object to a list.
print(list(zipped)) # [(1, 'a'), (2, 'b'), (3, 'c')]
#If the sequences have different lengths, the zip() function will stop
# at the shortest sequence.
numbers = [1, 2, 3]
letters = ['a', 'b']
zipped = zip(numbers, letters)
print(list(zipped)) # [(1, 'a'), (2, 'b')]
#The zip() function returns a zip object which is an iterator.

#MATCH CASE

#Just like switch case in C

def http_status(status):
    match status:
        case 200:
            return "OK"
        case 404:
            return "Not Found"
        case 500:
            return "Internal Server Error"
        case _:
            return "Unknown status"  

# Usage
print(http_status(200))  # Output: OK
print(http_status(404))  # Output: Not Found
print(http_status(500))
print(http_status(400))  # Output: Unknown status

#Merge Dictionaries

#We can merge two dictionaries in Python using the update() method.
#The update() method updates the dictionary with the elements from the
# another dictionary object or from an iterable of key-value pairs.
#Syntax:
#dictionary1.update(dictionary2)
#The elements from dictionary2 are added to dictionary1.
#If there are common keys in both dictionaries, the values from dictionary2
# will overwrite the values from dictionary1.

dict1 = {'a': 1, 'b': 2}
dict2 = {'b': 3, 'c': 4}
dict1.update(dict2)
print(dict1) # {'a': 1, 'b': 3, 'c': 4}
#We can also merge two dictionaries using the ** operator.
#Syntax:
#merged_dict = {**dict1, **dict2}
dict1 = {'a': 1, 'b': 2}
dict2 = {'b': 3, 'c': 4}
merged_dict = {**dict1, **dict2}
print(merged_dict) # {'a': 1, 'b': 3, 'c': 4}
#OR
#We can also merge two dictionaries using the | operator.
dict1 = {'a': 1, 'b': 2}
dict2 = {'b': 3, 'c': 4}
merged_dict = dict1 | dict2
print(merged_dict) # {'a': 1, 'b': 3, 'c': 4}
