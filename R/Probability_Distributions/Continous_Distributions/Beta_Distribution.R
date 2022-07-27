# Beta Distribution

# Probability Distribution
x <- dbeta(0.2, shape1 = 2, shape2 = 5); x
plot(x)

# Cumulative Distribution
y <- pbeta(0.3, shape1 = 1, shape2 = 10); y

# Quantiles
z <- qbeta(0.63, shape1 = 1, shape2 = 3); z

# Generate random numbers
a <- rbeta(120, shape1 = 1, shape2 = 7); a
plot(a)
hist(a, breaks = 25)
