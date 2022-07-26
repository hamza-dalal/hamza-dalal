# Normal Distribution

# Probability Distribution
x <- dnorm(15:25, mean = 20, sd = 2); x

# Cumulative Distribution
y <- pnorm(15:25, mean = 20, sd = 2); y

# Quantiles
z <- qnorm(0.99, mean = 20, sd = 5); z

# Generate random numbers
a <- rnorm(120, mean = 100, sd = 25); a
plot(a)
hist(a, breaks = 25)
