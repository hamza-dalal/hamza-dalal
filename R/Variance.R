#6 To find variances of different kinds


#Population Variance without using R inbuilt function
print("Enter your Observation:")
x <- scan()                                          #To take input from user
xbar <- mean(x); xbar
n <- length(x); n
pvar_wo <- sum((x - xbar)^2)/n; pvar_wo              #Formula of population variance

#Sample Variance using R inbuilt function
x                                                    #Same data
svar_w <- var(x); svar_w                             #This function gives sample variance(i.e. denominator n-1)

#Sample Variance without using R inbuilt function
x                                                    #Same data
xbar                                                 #Mean of x
svar_wo <- sum((x - xbar)^2)/(n-1); svar_wo

#Population Variance using R inbuilt function
#Note: There is no direct function for population variance in R. So we find using var() function which is sample variance.
x                                                    #Same data
svar                                                 #Sample variance
pvar_w <- svar_wo*(n-1)/n; pvar_w

