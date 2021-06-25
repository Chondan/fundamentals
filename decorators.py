# Learning Resources
# - https://www.geeksforgeeks.org/decorators-in-python/
# - https://www.programiz.com/python-programming/args-and-kwargs#:~:text=*args%20and%20**kwargs%20are,to%20take%20variable%20length%20argument.&text=**kwargs%20passes%20variable%20number,kwargs%20make%20the%20function%20flexible.

# --- Example 1: Treating the functions as objects ---
def example1():
	def shout(text):
		return text.upper()
	yell = shout
	print(yell('Hello'))

# example1()

# --- Example 2: Passing the function as argument ---
def example2():
	def shout(text):
		return text.upper()

	def whisper(text):
		return text.lower()

	def greet(func):
		greeting = func("""Hi, I am created by a function passed as an argument.""")
		print(greeting)

	greet(shout)
	greet(whisper)

# example2()

# --- Example 3: Returning functions from another functions ---
def example3():
	def create_adder(x):
		def adder(y):
			return x + y
		return adder

	add_15 = create_adder(15)
	print(add_15(10))

# example3()

# --- Decorators ---
# Decorators are used to modify the behaviour of function or class.
# In Decorators, functions are taken as the argument into another
# function and then called inside the wrapper function
def _decorators():
	# Decorator can modify the behavior
	def hello_decorator(func):
		# inner 1 is a Wrapper function in
		# which the argument is called
		def inner1():
			print("Hello, this is before function execution")

			# calling the actual function now
			# inside the wrapper function
			func()
			print("This is after function execution")

		return inner1

	# defining a function, to be called inside wrapper
	def function_to_be_used():
		print("This is inside the function !!")

	# passing 'function_to_be_used' inside the
	# decorator to control its behavior

	function_to_be_used = hello_decorator(function_to_be_used)

	function_to_be_used()

# _decorators()

# --- Example Decorators ---
def example_decorators():
	import time
	import math

	# decorator to calculate duration
	# taken by any function
	def calculate_time(func):
		# added arguments inside the inner1,
		# if function takes any arguments,
		# can be added like this.
		def inner1(*args, **kwargs):
			# storing time before function execution
			begin = time.time()

			func(*args, **kwargs)

			# storing time after function execution
			end = time.time()
			print("Total time taken in : ", func.__name__, end - begin)

		return inner1

	# this can be added to any function present,
	# in this case to calculate a factorial
	@calculate_time
	def factorial(num):
		# sleep 2 seconds because it takes very less time
		# so that you can see the actual differenc
		time.sleep(2)
		print(math.factorial(num))

	# calling the function
	factorial(10)

# example_decorators()

# --- Python *args and **kwargs ---
# 1. *args (Non Keyword Arguments)
# 2. **kwargs (Keyword Arguments)
def example_args_kwargs():
	def sum(*nums, func_name):
		sum = 0
		for num in nums:
			sum += num

		print(f"func_name: {func_name}")
		print(f"sum: {sum}")

	sum(10, 12, func_name="mySumFunc")

example_args_kwargs()
































