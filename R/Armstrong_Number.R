#3 To check whether the integer is armstrong number or not

armstrng <- function(a) {
  num = as.integer(a)
  sum = 0
  temp = num
  while(temp > 0) {
    digit = temp%%10                   #Using modulo operator to get remainder
    sum = sum + digit^3
    temp = floor(temp/10)
  }
  print(paste("sum of cubes of each digit of", num, "is", sum))
  if(num == sum) {
    print(paste("Therefore,", num, "is an Armstrong number"))
  } else {
    print(paste("Therefore,", num, "is not an Armstrong number"))
  }
}

#Examples
armstrng(123)
armstrng(153)
armstrng(1)
armstrng(2)
