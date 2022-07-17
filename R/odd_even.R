#5 To find number of odd/even numbers in given range and to find it's sum
#Note: Run this code line by line so that errors can be avoided.

ll <- as.integer(readline(prompt = "Enter lower limit of range:")); ll
ul <- as.integer(readline(prompt = "Enter upper limit of range:")); ul
range <- ll:ul; range
odd <- c()
even <- c()
oddsum <- 0
evensum <- 0
for(i in range) {
  if(i%%2 == 0) {
    even = append(even, i)
    evensum = evensum + i
  } else {
    odd = append(odd, i)
    oddsum = oddsum + i
  }
}
print(paste("Even numbers are:")); even
print(paste("Odd numbers are:")); odd
print(paste("Sum of Even numbers is:", evensum))
print(paste("Sum of Odd numbers is:", oddsum))
print(paste("Total even numbers in the given range are:", length(even)))
print(paste("Total odd numbers in the given range are:", length(odd)))

