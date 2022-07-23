# Poisson Distribution

# Probability distribution
x <- dpois(0:10, lambda = 20); x
plot(x, type = "o")

# Cumulative distribution
y <- ppois(10, lambda = 20); y

# Quantile distribution
z <- qpois(0.3, lambda = 20); z

# Generate Poisson distributed random numbers
a <- rpois(100, lambda = 9); a
plot(a, type = "p")
hist(a)
