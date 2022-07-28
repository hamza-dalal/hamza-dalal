# Discrete Uniform Distribution

# Discrete uniform has same probability for all the observations. Hence only sense is to create random numbers through this distribution in R.
N = as.integer(readline(prompt = "Enter no of observation: ")); N

# Probability distribution
Pmf <- 1/N

# Cumulative mass function
CMF <- function(x) { # x<= N
    cmf = x/N
    print(cmf)
}
CMF(8)

# Quantile function
# All observation have equal probability

# Mean
mean = (N+1)/2; mean

# Variance
var = (N^2 - 1)/12

# Moments
mo = c()
for (i in 1:4) {
  mo[i] = (exp(i)*(1 - exp(i*N)))/(N*(1 - exp(i)))
}
print(mo)

# To generate discrete random numbers
library(purrr)
x <- rdunif(100, 50); x

