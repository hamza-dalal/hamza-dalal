# Gamma Distribution

# Probability Distribution
x <- dgamma(1:20, shape = 1, rate = 2); x
plot(x)

# Cumulative Distribution
y <- pgamma(1, shape = 1, rate = 1); y

# Quantiles
z <- qgamma(0.63, shape = 1, rate = 1); z

# Generate random numbers
a <- rgamma(120, shape = 1, rate = 1); a
plot(a)
hist(a, breaks = 25)
