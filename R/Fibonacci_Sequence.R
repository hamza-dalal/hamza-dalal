# To find Fibonacci sequence till nth number

n = 12
x = c(0, 1)
for(i in 3:n) {
  x[i] = x[i-1] + x[i-2]
  append(x, x[i])
}
print(x)

# To find number of Fibonacci numbers in the given range and its length
ll = 10
ul = 250
x1 = 0
x2 = 1
y = c()
while(x1 <= ul) {
  if(x1 >= ll) {
    y = c(y, x1)
  }
  x3 = x1 + x2
  x1 = x2
  x2 = x3
}

# List of Fibonacci numbers in the given range
print(y)

#No. of Fibonacci numbers in the given range
length(y)



