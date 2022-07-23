# Binomial Distribution

# Probability distribution
x <- dbinom(6, 20, prob = 0.3); x
x <- dbinom(0:20, 20, prob = 0.3); x
plot(0:20, x, type = "o")


# Cumulative distribution
y <- pbinom(6, 20, 0.3); y
y <- pbinom(0:20, 20, 0.3); y
plot(0:20, y, type = "o")

# Quantile distribution
z <- qbinom(0.8, size = 20, prob = 0.3); z
z <- qbinom(seq(0, 1, 0.05), size = 20, prob = 0.3); z
plot(z, type = "o")

# Generate Binomial distributed random numbers
a <- rbinom(12, size = 20, prob = 0.3); a
plot(a, type = "p")
