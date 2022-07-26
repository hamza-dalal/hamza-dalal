# Exponential Distribution

# Probability Distribution
x <- dexp(1:5, rate = 5); x

# Cumulative Distribution
y <- pexp(1:9, rate = 0.1); y

# Quantiles
z <- qexp(0.03, rate = 0.005); z

# Generate random numbers
a <- rexp(120, rate = 0.5); a
plot(a)
hist(a, breaks = 20)
