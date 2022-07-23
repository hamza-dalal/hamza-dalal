# Negative Binomial Distribution

# Probability distribution
x <- dnbinom(0:20, size = 100, prob = 0.3); x
plot(0:20, x, type = "o")

# Cumulative distribution
y <- pnbinom(20, size = 100, prob = 0.7); y
y <- pnbinom(0:20, size = 100, prob = 0.7); y
plot(0:20, y, type = "o")

# Quantile distribution
z <- qnbinom(0.8, size = 100, prob = 0.3); z
z <- qnbinom(seq(0, 1, 0.05), size = 20, prob = 0.3); z
plot(z, type = "o")

# Generate Binomial distributed random numbers
a <- rnbinom(1500, size = 20, prob = 0.3); a
plot(a, type = "p")
hist(a, breaks = 100)
