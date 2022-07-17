#2 - Program to find multiplication table
multi_table <- function(a) {
  for(i in 1:10) {
    print(paste(a, "x", i, "=", a*i))
  }
}
multi_table(5)               #Multiplication table of 5
multi_table(2.25)            #Multiplication table of 2.25