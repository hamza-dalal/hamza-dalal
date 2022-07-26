# Continuous Uniform Distribution

# Probability Distribution
x <- dunif(25:30, min = 20, max = 50); x

# Cumulative Distribution
y <- punif(5:15, min = 0, max = 20); y

# Quantiles
z <- qunif(seq(0.2, 0.8, by = 0.1), min = 50, max = 100); z

# Generate random numbers
a <- runif(150, min = 10, max = 11); a
plot(a)
