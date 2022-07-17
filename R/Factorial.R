#1 - To find factorial of a non-negative integer
fact <- function(a) {
  b = as.integer(a)                                 #To convert any number to integer
  c = 1
  for(i in 1:b) {
    c=c*i
  }
  print(paste("Factorial of", b, "is", c))
}
fact(4)                                            #To find factorial of 4
fact(9)                                            #To find factorial of 9
