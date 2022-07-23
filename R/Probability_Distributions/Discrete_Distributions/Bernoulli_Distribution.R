# Bernoulli Distribution

library(Rlab)
x <- seq(0, 10, by = 0.1); x

# Probability distribution
y <- dbern(x, prob = 0.7); y
plot(y, type = "o")

# Cumulative Distribution
z <- pbern(x, prob = 0.7); z
plot(z, type = "o")

# Quantile function
a <- qbern(x, prob = 0.7,lower.tail = TRUE, log.p = FALSE); a
plot(a, type = "o")

# Generate Bernoulli distributed random numbers
b <- rbern(10, prob = 0.4); b
plot(b, type = "p")
