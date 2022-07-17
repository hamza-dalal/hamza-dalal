#4 To find sum of n natural numbers - 

# Without using formula:
sntrl <- function(n) {
  n=as.integer(n)
  sum=0
  if(n>0) {
    for(i in 1:n) {
      sum=sum+i
    }
    print(paste("Sum of all natural number till", n, "is:", sum))
  } else {
    print("Entered number is not natural")
  }
}

#Examples
sntrl(2)
sntrl(6)
sntrl(40)
sntrl(-24)
sntrl(89.8)


# Using Formula:

swf <- function(n) {
  n = as.integer(n)
  if(n>0) {
    sum = n*(n+1)/2               #Formula of sum of natural numbers
    print(paste("Sum of all natural number till", n, "is:", sum))
  } else {
    print("Entered number is not natural")
  }
}

#Examples
swf(2)
swf(6)
swf(40)
swf(-24)
swf(89.8)
