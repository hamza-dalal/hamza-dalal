# Continuous Uniform Distribution

# Probability Distribution
x <- dunif(25:30, 20, 50); x

# Cumulative Distribution
y <- punif(5:15, 0, 20); y

# Quantiles
z <- qunif(seq(0.2, 0.8, by = 0.1), 50, 100); z

# Generate random numbers
a <- runif(150, 10, 11); a
plot(a)
