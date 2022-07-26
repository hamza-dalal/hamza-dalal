# Chi Square Distribution

# Probability Distribution
x <- dchisq(seq(0, 20, by = 0.5), df = 2); x
plot(x)

# Cumulative Distribution
y <- pchisq(seq(0, 20, by = 0.5), df = 2); y
plot(y)

# Quantiles
z <- qchisq(0.5, df = 5); z

# Generate random numbers
a <- rchisq(120, df = 2); a
plot(a)
hist(a, breaks = 25)
